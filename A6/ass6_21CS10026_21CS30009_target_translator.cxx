#include "ass6_21CS10026_21CS30009_translator.h"

string input_filename, asm_filename;
ActivationRecord *currentAR; 
ofstream asm_file; 

// get ascii value of the character const
int getAsciiValue(string charConst) {
    if(charConst.length() == 3) 
        return (int)charConst[1];
    else {
        // escape character
        if (charConst[2] == 'n')
            return 10;
        else if (charConst[2] == 't')
            return 9;
        else if (charConst[2] == 'r')
            return 13;
        else if (charConst[2] == 'b')
            return 8;
        else if (charConst[2] == 'f')
            return 12;
        else if (charConst[2] == 'v')
            return 11;
        else if (charConst[2] == 'a')
            return 7;
        else if (charConst[2] == '0')
            return 0;
        else return (int)charConst[2];
    }
}

// get the register to be used for the parameter in the function call
string getReg(string paramName, int paramNum, int size) {
    if(paramNum == 1){
        if(size==1) return "%dil";
        else if(size==4) return "%edi";
        else if(size==8) return "%rdi";
    }

    else if(paramNum == 2){
        if(size==1) return "%sil";
        else if(size==4) return "%esi";
        else if(size==8) return "%rsi";
    }

    else if(paramNum == 3){
        if(size==1) return "%dl";
        else if(size==4) return "%edx";
        else if(size==8) return "%rdx";
    }

    else if(paramNum == 4){
        if(size==1) return "%cl";
        else if(size==4) return "%ecx";
        else if(size==8) return "%rcx";
    }
}

// get the stack location of the parameter in the function call
string getStackLoc(string paramName) {
    // check if it is a parameter
    if(currentAR->displacement.count(paramName))
        return to_string(currentAR->displacement[paramName]) + "(%rbp)";
    // else it is a global variable
    else
        return paramName;
}

// load the parameter from register to stack
void loadParam(string paramName, int paramNum) {
    Symbol *symbol = currentST->lookup(paramName);
    int size = symbol->size;
    TYPE type = symbol->type->type;
    string movIns = "";

    if(type == ARRAY) {
        // in this case, just store the address
        movIns = "movq";
        size = 8;
    } else if (size == 1) {
        movIns = "movb";
    } else if (size == 4) {
        movIns = "movl";
    } else if (size == 8) {
        movIns = "movq";
    }
    string reg = getReg(paramName, paramNum, size);
    asm_file << "\t" << setw(8) << movIns << reg << ", " << getStackLoc(paramName) << endl;
}

// stack to register
void storeParam(string paramName, int paramNum) {
    Symbol *symbol = currentST->lookup(paramName);
    int size = symbol->size;
    TYPE type = symbol->type->type;
    string movIns = "";
    // if it is an array just store the address
    if(type == ARRAY) {
        movIns = "leaq";
        size = 8;
    } else if (size == 1) {
        movIns = "movb";
    } else if (size == 4) {
        movIns = "movl";
    } else if (size == 8) {
        movIns = "movq";
    }
    string reg = getReg(paramName, paramNum, size);
    asm_file << "\t" << setw(8) << movIns << getStackLoc(paramName) << ", " << reg << endl;
}

void translate() {
    asm_file.open(asm_filename);

    asm_file << left;
    asm_file << "\t.file\t\"" + input_filename + "\"" << endl;

    asm_file << endl;
    // activation records
    asm_file << "#\t" << "Allocation of function variables and temporaries on the stack:\n" << endl;

    list<Symbol>::iterator it = globalST->symbols.begin();
    while (it != globalST->symbols.end()){
        // cout<<"type of it = "<<(it->category == Symbol::GLOBAL ? "global" : (it->category == Symbol::PARAM ? "param" : (it->category == Symbol::LOCAL ? "local" : (it->category == Symbol::TEMP ? "temp" : "function"))))<<endl;
        if(it->category == Symbol::FUNCTION) {
            asm_file << "#\t" << it->name << endl;

            map<string, int>::iterator it2 = (it->nestedST->AR->displacement).begin();
            while(it2 != (it->nestedST->AR->displacement).end()){
                asm_file << "#\t" << it2->first << " : " << it2->second << endl;
                it2++;
            }
        }
        it++;
    }
    asm_file << endl;

    // string literals in the rodata section
    if(stringList.size() > 0) {
        asm_file << "\t.section\t.rodata" << endl;
        int i = 0;
        vector<string>::iterator it = stringList.begin();
        while(it != stringList.end()) {
            asm_file << ".LC" << i++ << ":" << endl;
            asm_file << "\t.string\t" << *it << endl;
            it++;
        }
    }

    // global variables (uninitialised)
    it = globalST->symbols.begin();
    while(it != globalST->symbols.end()) {
        if(it->init_val == "-" && it->category == Symbol::GLOBAL) {
            asm_file << "\t.comm\t" << it->name << "," << it->size << "," << it->size << endl;
        }
        it++;
    }

    // convert tac labels to assembly labels
    map<int, string> labelMap;
    int quadNum = 1, labelNum = 0;

    vector<Quad*>::iterator it2 = qArr.begin();
    while(it2 != qArr.end()) {
        if((*it2)->op == "label") {
            labelMap[quadNum] = ".LFB" + to_string(labelNum);
        } else if((*it2)->op == "labelend") {
            labelMap[quadNum] = ".LFE" + to_string(labelNum);
            labelNum++;
        }
        quadNum++; it2++;
    }

    it2 = qArr.begin();
    while(it2 != qArr.end()) {
        if((*it2)->op == "goto" or (*it2)->op == "==" or (*it2)->op == "!=" or (*it2)->op == "<" or (*it2)->op == ">" or (*it2)->op == "<=" or (*it2)->op == ">=") {
            int loc = stoi((*it2)->res);
            if(labelMap.find(loc) == labelMap.end()) {
                labelMap[loc] = ".L" + to_string(labelNum);
                labelNum++;
            }
        }
        it2++;
    }


    bool inTextSpace = false; // whether we are currently inside a function body or in the global space
    string globalStringTemp;
    int globalIntTemp, globalCharTemp; // for char simply hold the ascii value
    string functionEndLabel;
    stack<string> params; // stack to store the params for function calls, especially helpful for nested function calls
                            // of the type fun1(fun2(arg1, arg2), fun3(arg3, arg4))
    quadNum = 1;
    it2 = qArr.begin();
    while(it2 != qArr.end()) {

        if((*it2)->op == "label") {
            if(!inTextSpace) {
                asm_file << "\t.text" << endl;
                inTextSpace = true;
            }

            currentST = globalST->lookup((*it2)->res)->nestedST;
            currentAR = currentST->AR;
            
            functionEndLabel = labelMap[quadNum];
            functionEndLabel[3] = 'E';

            // function prologue
            asm_file << "\t" << setw(8) << ".globl" << (*it2)->res << endl;
            asm_file << "\t" << setw(8) << ".type" << (*it2)->res << ", @function" << endl;
            asm_file << (*it2)->res << ":" << endl;
            asm_file << labelMap[quadNum] << ":" << endl;
            asm_file << "\t" << ".cfi_startproc" << endl;
            asm_file << "\t" << setw(8) << "pushq" << "%rbp" << endl;
            asm_file << "\t.cfi_def_cfa_offset 16" << endl;
            asm_file << "\t.cfi_offset 6, -16" << endl;
            asm_file << "\t" << setw(8) << "movq" << "%rsp, %rbp" << endl;
            asm_file << "\t.cfi_def_cfa_register 6" << endl;
            asm_file << "\t" << setw(8) << "subq" << "$" << -currentAR->total_displacement << ", %rsp" << endl;

            int paramNum = 1;
            vector<string>::iterator it3 = currentST->params.begin();
            while(it3 != currentST->params.end()) {
                loadParam(*it3, paramNum);
                paramNum++;
                it3++;
            }

        } else if((*it2)->op == "labelend") {
            // function epilogue
            asm_file << labelMap[quadNum] << ":" << endl;
            asm_file << "\t" << setw(8) << "movq" << "%rbp, %rsp" << endl;
            asm_file << "\t" << setw(8) << "popq" << "%rbp" << endl;
            asm_file << "\t" << ".cfi_def_cfa 7, 8" << endl;
            asm_file << "\t" << "ret" << endl;
            asm_file << "\t" << ".cfi_endproc" << endl;
            asm_file << "\t" << setw(8) << ".size" << (*it2)->res << ", .-" << (*it2)->res << endl;

            inTextSpace = false;

        } else {
            if(inTextSpace) {
                // process the function instructions
                string op = (*it2)->op;
                string result = (*it2)->res;
                string arg1 = (*it2)->arg1;
                string arg2 = (*it2)->arg2;

                if(labelMap.count(quadNum)) {
                    asm_file << labelMap[quadNum] << ":" << endl;
                }

                if(op == "=") {
                    // first check if arg1 is a constant
                    if(isdigit(arg1[0])) {
                        // integer constant
                        asm_file << "\t" << setw(8) << "movl" << "$" << arg1 << ", " << getStackLoc(result) << endl;
                    } else if(arg1[0] == '\''){
                        // character constant
                        asm_file << "\t" << setw(8) << "movb" << "$" << getAsciiValue(arg1) << ", " << getStackLoc(result) << endl;
                    } else {
                        // variable
                        // check the size of arg1 in the current table and apply the corresponding move from arg1 to result via the appropriate register
                        int sz = currentST->lookup(arg1)->size;
                        if(sz == 1) {
                            asm_file << "\t" << setw(8) << "movb" << getStackLoc(arg1) << ", %al" << endl;
                            asm_file << "\t" << setw(8) << "movb" << "%al, " << getStackLoc(result) << endl;
                        } else if(sz == 4) {
                            asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", %eax" << endl;
                            asm_file << "\t" << setw(8) << "movl" << "%eax, " << getStackLoc(result) << endl;
                        } else if(sz == 8) {
                            asm_file << "\t" << setw(8) << "movq" << getStackLoc(arg1) << ", %rax" << endl;
                            asm_file << "\t" << setw(8) << "movq" << "%rax, " << getStackLoc(result) << endl;
                        }
                    }
                } else if(op == "=str") {
                    asm_file << "\t" << setw(8) << "movq" << "$.LC" << arg1 << ", " << getStackLoc(result) << endl;
                } else if(op == "param") {
                    params.push(result);
                } else if(op == "call") {
                    // call function
                    int paramCount = stoi(arg2);
                    while (paramCount) {
                        storeParam(params.top(), paramCount);
                        params.pop();
                        paramCount--;
                    }
                    
                    asm_file << "\t" << setw(8) << "call" << arg1 << endl;
                    // check the size of result in the current table and apply the corresponding move from appropriate return register to result
                    int sz = currentST->lookup(result)->size;
                    if(sz == 1) {
                        asm_file << "\t" << setw(8) << "movb" << "%al, " << getStackLoc(result) << endl;
                    } else if(sz == 4) {
                        asm_file << "\t" << setw(8) << "movl" << "%eax, " << getStackLoc(result) << endl;
                    } else if(sz == 8) {
                        asm_file << "\t" << setw(8) << "movq" << "%rax, " << getStackLoc(result) << endl;
                    }
                } else if(op == "return") {
                    // return from function
                    if(!result.empty()) {
                        // check the size of result in the current table and apply the corresponding move from result to return register
                        int sz = currentST->lookup(result)->size;
                        if(sz == 1) {
                            asm_file << "\t" << setw(8) << "movb" << getStackLoc(result) << ", %al" << endl;
                        } else if(sz == 4) {
                            asm_file << "\t" << setw(8) << "movl" << getStackLoc(result) << ", %eax" << endl;
                        } else if(sz == 8) {
                            asm_file << "\t" << setw(8) << "movq" << getStackLoc(result) << ", %rax" << endl;
                        }
                    }
                    if(qArr[quadNum]->op != "labelend") // if the next quad is not a labelend, then we need to jump to the function end
                        asm_file << "\t" << setw(8) << "jmp" << functionEndLabel << endl;
                } else if(op == "goto") {
                    // unconditional jump
                    asm_file << "\t" << setw(8) << "jmp" << labelMap[stoi(result)] << endl;
                } else if(op == "==" or op == "!=" or op == "<" or op == "<=" or op == ">" or op == ">=") {
                    // check if arg1 == arg2
                    int sz = currentST->lookup(arg1)->size;
                    string movins, cmpins, movreg;
                    if(sz == 1) {
                        movins = "movb";
                        cmpins = "cmpb";
                        movreg = "%al";
                    } else if(sz == 4) {
                        movins = "movl";
                        cmpins = "cmpl";
                        movreg = "%eax";
                    } else if(sz == 8) {
                        movins = "movq";
                        cmpins = "cmpq";
                        movreg = "%rax";
                    }
                    asm_file << "\t" << setw(8) << movins << getStackLoc(arg2) << ", " << movreg << endl;
                    asm_file << "\t" << setw(8) << cmpins << movreg << ", " << getStackLoc(arg1) << endl;
                    if(op == "==") {
                        asm_file << "\t" << setw(8) << "je" << labelMap[stoi(result)] << endl;
                    } else if(op == "!=") {
                        asm_file << "\t" << setw(8) << "jne" << labelMap[stoi(result)] << endl;
                    } else if(op == "<") {
                        asm_file << "\t" << setw(8) << "jl" << labelMap[stoi(result)] << endl;
                    } else if(op == "<=") {
                        asm_file << "\t" << setw(8) << "jle" << labelMap[stoi(result)] << endl;
                    } else if(op == ">") {
                        asm_file << "\t" << setw(8) << "jg" << labelMap[stoi(result)] << endl;
                    } else if(op == ">=") {
                        asm_file << "\t" << setw(8) << "jge" << labelMap[stoi(result)] << endl;
                    }
                } else if(op == "+") {
                    // result = arg1 + arg2
                    if(result == arg1) {
                        // increment arg1
                        asm_file << "\t" << setw(8) << "incl" << getStackLoc(arg1) << endl;
                    } else {
                        asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "addl" << getStackLoc(arg2) << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << getStackLoc(result) << endl;
                    }
                } else if(op == "-") {
                    // result = arg1 - arg2
                    if(result == arg1) {
                        // decrement arg1
                        asm_file << "\t" << setw(8) << "decl" << getStackLoc(arg1) << endl;
                    }
                    else {
                        asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "subl" << getStackLoc(arg2) << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << getStackLoc(result) << endl;
                    }
                } else if(op == "*") {
                    // result = arg1 * arg2
                    asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                    if(isdigit(arg2[0])) {
                        asm_file << "\t" << setw(8) << "imull" << "$" + getStackLoc(arg2) << ", " << "%eax" << endl;
                    } else { 
                        asm_file << "\t" << setw(8) << "imull" << getStackLoc(arg2) << ", " << "%eax" << endl;
                    }
                    asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << getStackLoc(result) << endl;
                } else if(op == "/") {
                    // result = arg1  / arg2
                    asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                    asm_file << "\t" << setw(8) << "cdq" << endl;
                    asm_file << "\t" << setw(8) << "idivl" << getStackLoc(arg2) << endl;
                    asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << getStackLoc(result) << endl;
                } else if(op == "%") {
                    // result = arg1 % arg2
                    asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                    asm_file << "\t" << setw(8) << "cdq" << endl;
                    asm_file << "\t" << setw(8) << "idivl" << getStackLoc(arg2) << endl;
                    asm_file << "\t" << setw(8) << "movl" << "%edx" << ", " << getStackLoc(result) << endl;
                } else if(op == "=[]") {
                    // result = arg1[arg2]
                    Symbol *symbol = currentST->lookup(arg1);
                    if(symbol->category == Symbol::PARAM) {
                        asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg2) << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "cltq" << endl;
                        asm_file << "\t" << setw(8) << "addq" << getStackLoc(arg1) << ", " << "%rax" << endl;
                        asm_file << "\t" << setw(8) << "movl" << "(%rax)" << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << getStackLoc(result) << endl;
                    } else {
                        asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg2) << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "cltq" << endl;
                        asm_file << "\t" << setw(8) << "movl" << currentAR->displacement[arg1] << "(%rbp, %rax, 1)" << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << getStackLoc(result) << endl;
                    }
                } else if(op == "[]=") {
                    // result[arg1] = arg2
                    Symbol *symbol = currentST->lookup(result);
                    if(symbol->category == Symbol::PARAM) {
                        asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "cltq" << endl;
                        asm_file << "\t" << setw(8) << "addq" << getStackLoc(result) << ", " << "%rax" << endl;
                        asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg2) << ", " << "%ebx" << endl;
                        asm_file << "\t" << setw(8) << "movl" << "%ebx" << ", " << "(%rax)" << endl;
                    } else {
                        asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                        asm_file << "\t" << setw(8) << "cltq" << endl;
                        asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg2) << ", " << "%ebx" << endl;
                        asm_file << "\t" << setw(8) << "movl" << "%ebx" << ", " << currentAR->displacement[result] << "(%rbp, %rax, 1)" << endl;
                    }
                } else if(op == "=&") {
                    // result = &arg1
                    asm_file << "\t" << setw(8) << "leaq" << getStackLoc(arg1) << ", " << "%rax" << endl;
                    asm_file << "\t" << setw(8) << "movq" << "%rax" << ", " << getStackLoc(result) << endl;
                } else if(op == "=*") {
                    // result = *arg1
                    asm_file << "\t" << setw(8) << "movq" << getStackLoc(arg1) << ", " << "%rax" << endl;
                    asm_file << "\t" << setw(8) << "movl" << "(%rax)" << ", " << "%eax" << endl;
                    asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << getStackLoc(result) << endl;
                } else if(op == "=-") {
                    // result = -arg1
                    asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                    asm_file << "\t" << setw(8) << "negl" << "%eax" << endl;
                    asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << getStackLoc(result) << endl;
                } else if(op == "*=") {
                    // *result = arg1
                    asm_file << "\t" << setw(8) << "movl" << getStackLoc(arg1) << ", " << "%eax" << endl;
                    asm_file << "\t" << setw(8) << "movq" << getStackLoc(result) << ", " << "%rbx" << endl;
                    asm_file << "\t" << setw(8) << "movl" << "%eax" << ", " << "(%rbx)" << endl;
                }

            } else {
                // process the global assignments
                current_symbol = globalST->lookup((*it2)->res);

                // first store the assignment value, this removes the need of temporaries, sort of a peep hole optimisation
                if(current_symbol->category == Symbol::TEMP) {
                    if(current_symbol->type->type == INT) {
                        globalIntTemp = stoi((*it2)->arg1);
                    } else if(current_symbol->type->type == CHAR) {
                        globalCharTemp = getAsciiValue((*it2)->arg1);
                    } else if(current_symbol->type->type == POINTER) {
                        globalStringTemp = ".LC" + (*it2)->arg1;
                    }
                } else {
                    if(current_symbol->type->type == INT) {
                        
                        asm_file << "\t" << setw(8) << ".globl" << current_symbol->name << endl;
                        asm_file << "\t" << setw(8) << ".data" << endl;
                        asm_file << "\t" << setw(8) << ".align" << 4 << endl;
                        asm_file << "\t" << setw(8) << ".type" << current_symbol->name << ", @object" << endl;
                        asm_file << "\t" << setw(8) << ".size" << current_symbol->name << ", 4" << endl;
                        asm_file << current_symbol->name << ":" << endl;
                        asm_file << "\t" << setw(8) << ".long" << globalIntTemp << endl;

                    } else if(current_symbol->type->type == CHAR) {

                        asm_file << "\t" << setw(8) << ".globl" << current_symbol->name << endl;
                        asm_file << "\t" << setw(8) << ".data" << endl;
                        asm_file << "\t" << setw(8) << ".type" << current_symbol->name << ", @object" << endl;
                        asm_file << "\t" << setw(8) << ".size" << current_symbol->name << ", 1" << endl;
                        asm_file << current_symbol->name << ":" << endl;
                        asm_file << "\t" << setw(8) << ".byte" << globalCharTemp << endl;

                    } else if(current_symbol->type->type == POINTER) {

                        asm_file << "\t" << ".section	.data.rel.local" << endl;
                        asm_file << "\t" << setw(8) << ".align" << 8 << endl;
                        asm_file << "\t" << setw(8) << ".type" << current_symbol->name << ", @object" << endl;
                        asm_file << "\t" << setw(8) << ".size" << current_symbol->name << ", 8" << endl;
                        asm_file << current_symbol->name << ":" << endl;
                        asm_file << "\t" << setw(8) << ".quad" << globalStringTemp << endl;

                    }
                }
            }
        }

        quadNum++; it2++;
    }


    asm_file.close();
}


int main(int argc, char const *argv[]) {
    input_filename = string(argv[1]) + ".c";
    asm_filename = string(argv[1]) + ".s";

    block_count = 0; // initial block count is 0
    temp_count = 0; // initial temp count is 0
    
    globalST = new SymTable("global"); // create global ST and set it as current
    currentST = globalST;

    // cout << left; // left allign - check

    yyin = fopen(input_filename.c_str(), "r"); // define input file
    yyparse();

    globalST->update(); // update offsets
    globalST->print(); // print global ST (would include all nested STs too)

    final_backpatch(); // backpatch the goto statements

    printQuadArray(); // print quad array (TACs)

    translate(); // generate asm file

    return 0;
}
