#include "ass5_21CS10026_21CS30009_translator.h"

using namespace std; 

// global variables 
SymTable* globalST;      // global symbol table
SymTable* currentST;     // current symbol table
vector<Quad*> qArr;          // quad array
Sym* currentSymbol;      // current symbol
TYPE currentType;        // current type

// Sym class methods 

Sym::Sym(string name_, TYPE type_, SymType* arr_type_, int width_, string init_val_): name(name_), type(new SymType(type_, width_, arr_type_)), init_val(init_val_), offset(0), parent_table(NULL) {
    this->size = computeSize(this->type);
}

Sym* Sym::update(SymType* type){
    this->type = type;
    this->size = computeSize(type);
    return this;
}

// SymType class methods

SymType::SymType(TYPE type_, int width_, SymType* arr_type_): type(type_), width(width_), arr_type(arr_type_)  {}

// SymTable class methods

SymTable::SymTable(string name_): name(name_), count(0), parent(NULL) {}

// lookup for a symbol in the symbol table, or add if not present - as mentioned in the assignment
Sym* SymTable::lookup(string name){

    list<Sym>::iterator it = (this->table).begin();

    while(it != (this->table).end()){
        if(it->name == name)
            return &(*it);
        it++;
    }

    // if it doesnt exist, add it to the table and return it
    Sym* sym = new Sym(name,TYPE_INT,NULL,0);
    (this->table).push_back(*sym);

    return &(this->table).back();
}

// update offset of existing entries - as mentioned in the assignment
void SymTable::update() {

    int offs = 0;
    list<SymTable*> parent_tables;
    list<Sym>::iterator it = (this->table).begin();

    while(it != (this->table).end()){
        it->size = computeSize(it->type);
        if(it == (this->table).begin()) {
            // initially, offset is 0; thereafter, it is calculated based on size and pre-existing offset
            it->offset = 0;
            offs = it->size;
        }
        else{
            it->offset = offs; 
            offs = it->offset + it->size;
        }

        // if it has any parent tables, those are also updated
        if(it->parent_table != NULL)
            parent_tables.push_back(it->parent_table);

        it++;
    }

    // update parent tables
    list<SymTable*>::iterator it2 = parent_tables.begin();
    while(it2 != parent_tables.end()){
        (*it2)->update();
        it2++;
    }

}

// print the symbol table - as mentioned in the assignment

/* Format: 

    ------------------------------------------------------------------------------
    Symbol Table : <name>                                   Parent: <parent_name>
    ------------------------------------------------------------------------------
    Name        Type            Initial Value   Size    Offset      Parent Table
    ------------------------------------------------------------------------------
    <name>      <type>          <init_val>      <size>  <offset>    <parent_table>
    ...

*/

void SymTable::print() {
    list<SymTable*> parent_tables;

    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"Symbol Table : "<<this->name<<"\t\t\t\t\t\tParent: "<<(this->parent == NULL ? "NULL" : this->parent->name)<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"Name\t\t\tType\t\tInitial Value\tSize\tOffset\t\tParent Table"<<endl;

    list<Sym>::iterator it = (this->table).begin();
    while(it != (this->table).end()){
        cout<<it->name<<"\t\t\t\t"
        <<getType(it->type->type)<<"\t\t\t"
        <<it->init_val<<"\t\t\t\t"
        <<it->size<<"\t\t"
        <<it->offset<<"\t\t\t"
        <<(it->parent_table == NULL ? "NULL" : it->parent_table->name)<<endl;

        // parent tables are also printed recursively
        if(it->parent_table != NULL)
            parent_tables.push_back(it->parent_table);


        // check - print anything else?
        it++;
    }
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;

    // print parent tables
    list<SymTable*>::iterator it2 = parent_tables.begin();
    while(it2 != parent_tables.end()){
        (*it2)->print();
        it2++;
    }
}

// helper function to get type as string
string getType(TYPE type){
    switch(type){
        case TYPE_VOID: return "void"; break;
        case TYPE_CHAR: return "char"; break;
        case TYPE_INT: return "int"; break;
        case TYPE_FLOAT: return "float"; break;
        case TYPE_POINTER: return "pointer"; break;
        case TYPE_FUNC: return "function"; break;
        case TYPE_ARRAY: return "array"; break;
        default: return "unknown"; break;
    }
}


// Quad class methods

Quad::Quad(string op_, string res_, string arg1_, string arg2_): op(op_), arg1(arg1_), arg2(arg2_), res(res_) {
    cout<<"Quad made with (op, res, arg1, arg2) = ("<<op<<", "<<res<<", "<<arg1<<", "<<arg2<<")"<<endl;
}
Quad::Quad(string op_, string res_, int arg1_, string arg2_): op(op_), arg1(to_string(arg1_)), arg2(arg2_), res(res_) {
    cout<<"Quad made with (op, res, arg1, arg2) = ("<<op<<", "<<res<<", "<<arg1<<", "<<arg2<<")"<<endl;
}
Quad::Quad(string op_, string res_,  float arg1_, string arg2_): op(op_), arg1(to_string(arg1_)), arg2(arg2_), res(res_) {
    cout<<"Quad made with (op, res, arg1, arg2) = ("<<op<<", "<<res<<", "<<arg1<<", "<<arg2<<")"<<endl;
}

void Quad::print() {

    // res = arg1 op arg2
    if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "|" || op == "^" || op == "&" || op == "<<" || op == ">>")
        cout<<this->res<<" = "<<this->arg1<<" "<<this->op<<" "<<this->arg2<<endl;

    // if arg1 op arg2 goto res
    else if (op == "==" || op == "!=" || op == "<=" || op == ">=" || op == "<" || op == ">")
        cout<<"if "<<this->arg1<<" "<<this->op<<" "<<this->arg2<<" goto "<<this->res<<endl;

    // unary operators (res = op arg1)
    else if (op == "=")
        cout<<this->res<<" = "<<this->arg1<<endl;

    else if (op == "=&")
        cout<<this->res<<" = &"<<this->arg1<<endl;
    
    else if (op == "=*")
        cout<<this->res<<" = *"<<this->arg1<<endl;

    else if (op == "=-")
        cout<<this->res<<" = -"<<this->arg1<<endl;

    else if (op == "!")
        cout<<this->res<<" = !"<<this->arg1<<endl;

    else if (op == "~")
        cout<<this->res<<" = ~"<<this->arg1<<endl;
    
    else if (op == "*=")
        cout<<"*"<<this->res<<" = "<<this->arg1<<endl;

    else if (op == "=[]")
        cout<<this->res<<" = "<<this->arg1<<"["<<this->arg2<<"]"<<endl;

    else if (op == "[]=")
        cout<<this->res<<"["<<this->arg1<<"]"<<" = "<<this->arg2<<endl;


    // goto res
    else if (op == "goto")
        cout<<"goto "<<this->res<<endl;

    // return res
    else if (op == "return")
        cout<<"return "<<this->res<<endl;

    // param res
    else if (op == "param")
        cout<<"param "<<this->res<<endl;

    // res = call arg1, arg2
    else if (op == "call")
        cout<<this->res<<" = call "<<this->arg1<<", "<<this->arg2<<endl;

    // label
    else if (op == "label")
        cout<<this->res<<":"<<endl;

}

// global functions

list<int> makelist(int i){
    list<int> l(1,i);
    return l;
}

list<int> merge(list<int> &a, list<int> &b){
    a.merge(b);
    return a;
}

void backpatch(list<int> &a, int i){
    list<int>::iterator it = a.begin();
    while(it != a.end()){
        qArr[*it]->res = to_string(i);
        it++;
    }
}

bool typecheck(Sym* s1, Sym* s2){
    if(typecheck(s1->type, s2->type))
        return true;
    else {
        // see if one can be converted to the other
        if (s1->type->type == TYPE_INT || s2->type->type == TYPE_INT) {
            s1 = convertType(s1, TYPE_INT);
            s2 = convertType(s2, TYPE_INT);
            return true;
        }
        else if (s1->type->type == TYPE_FLOAT || s2->type->type == TYPE_FLOAT) {
            s1 = convertType(s1, TYPE_FLOAT);
            s2 = convertType(s2, TYPE_FLOAT);
            return true;
     
        }
    }
    return false;
}

bool typecheck(SymType* t1, SymType* t2){
    // check recursively if symbol types are same 

    // if both of them reach NULL together
    if (t1 == NULL && t2 == NULL)
        return true; 
    
    // if one of them reaches NULL before the other, or there is a type mismatch
    else if (t1 == NULL || t2 == NULL || t1->type != t2->type)
        return false;

    else return typecheck(t1->arr_type, t2->arr_type);
}

// converts to "ret_type" if possible, else returns the same symbol
Sym* convertType(Sym* sym, TYPE ret_type){

    if(sym->type->type == TYPE_INT){
        if(ret_type == TYPE_FLOAT){
            Sym* temp = gentemp(TYPE_FLOAT);
            emit("=", "int2float(" + sym->name + ")", " ", temp->name); // check
            return temp;
        }
        else if(ret_type == TYPE_CHAR){
            Sym* temp = gentemp(TYPE_CHAR);
            emit("=", "int2char(" + sym->name + ")", "", temp->name); // check
            return temp;
        }
        return sym;
    }

    else if (sym->type->type == TYPE_FLOAT) {
        if(ret_type == TYPE_INT){
            Sym* temp = gentemp(TYPE_INT);
            emit("=", "float2int(" + sym->name + ")", "", temp->name); // check
            return temp;
        }
        else if(ret_type == TYPE_CHAR){
            Sym* temp = gentemp(TYPE_CHAR);
            emit("=", "float2char(" + sym->name + ")", "", temp->name); // check
            return temp;
        }
        return sym;
    }

    else if (sym->type->type == TYPE_CHAR) {
        if(ret_type == TYPE_INT){
            Sym* temp = gentemp(TYPE_INT);
            emit("=", "char2int(" + sym->name + ")", "", temp->name); // check
            return temp;
        }
        else if(ret_type == TYPE_FLOAT){
            Sym* temp = gentemp(TYPE_FLOAT);
            emit("=", "char2float(" + sym->name + ")", "", temp->name); // check
            return temp;
        }
        return sym;
    }

    return sym;
}


Expression* convInt2Bool(Expression* e){
    e->falselist = makelist(nextinstr());
    emit("==", "", e->entry->name, "0");
    e->truelist = makelist(nextinstr());
    emit("goto", "");
}

Expression* convBool2Int(Expression* e){
    cout<<"gentemp called by convBool2Int"<<endl;
    e->entry = gentemp(TYPE_INT);
    backpatch(e->truelist, nextinstr());
    emit("=", "true", "", e->entry->name); // check
    emit("goto", to_string(nextinstr()+1));
    backpatch(e->falselist, nextinstr());
    emit("=", "false", "", e->entry->name); // check
}


int nextinstr(){
    return qArr.size();
}

int computeSize(SymType* st){
    if(st->type == TYPE_VOID)
        return SIZE_OF_VOID;
    else if(st->type == TYPE_CHAR)
        return SIZE_OF_CHAR;
    else if(st->type == TYPE_INT)
        return SIZE_OF_INT; 
    else if(st->type == TYPE_FLOAT)
        return SIZE_OF_FLOAT;
    else if(st->type == TYPE_POINTER)
        return SIZE_OF_POINTER;
    else if(st->type == TYPE_FUNC)
        return 0;
    else if(st->type == TYPE_ARRAY)
        return st->width * computeSize(st->arr_type);
    else
        return -1;
}

// check -> might need to modify
void printQuadArray(){
    cout<<"Three Address Codes: "<<endl;
    for(int i=0; i<qArr.size(); i++){
        cout<<i<<": ";
        qArr[i]->print();
    }
}

void changeTable(SymTable* st){
    currentST = st;
}

void emit(string op, string res, string arg1, string arg2){
    Quad* q = new Quad(op, res, arg1, arg2);
    qArr.push_back(q);
}

void emit(string op, string res, int arg1, string arg2){
    Quad* q = new Quad(op, res, arg1, arg2);
    qArr.push_back(q);
}

void emit(string op, string res, float arg1, string arg2){
    Quad* q = new Quad(op, res, arg1, arg2);
    qArr.push_back(q);
}

Sym* gentemp(TYPE type, string init_val){
    cout<<"generating temp with init_val = "<<init_val<<" currentST->count = "<<to_string(currentST->count)<<endl;
    string name = "t" + to_string(currentST->count++);
    Sym* s = new Sym(name, type, NULL, 0, init_val);
    currentST->table.push_back(*s);
    return &currentST->table.back();
}


int main(){
    globalST = new SymTable("Global");
    currentST = globalST;
    
    yyparse(); 
    globalST->update();
    globalST->print();
    printQuadArray();
}