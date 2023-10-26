#include "ass5_19CS30031_19CS10070_translator.h"

// Global Variables
vector<Quad *> quadArray;  // Quad Array
SymTable *currentST, *globalST, *parentTable;  // Symbol Tables
Symbol *currentSymbol;  // Current Symbol
TYPE currentType;  // Current Type
int tableCount;  // Counts of number of tables and number of temps generated


// SymType class methods

SymType::SymType(TYPE type_, SymType *arr_type_, int width_) : type(type_), width(width_), arr_type(arr_type_) {}

// to get size (machine-dependent)
int SymType::computeSize() {
    if (type == CHAR)
        return SIZE_OF_CHAR;
    else if (type == INT)
        return SIZE_OF_INT;
    else if (type == FLOAT)
        return SIZE_OF_FLOAT;
    else if (type == POINTER)
        return SIZE_OF_POINTER;
    else if (type == ARRAY)
        return width * (arr_type->computeSize());
    else
        return -1;
}

// to convert the enum to string, for printing
string SymType::toString() {
    if(this->type == VOID)
        return "void";
    else if(this->type == CHAR)
        return "char";
    else if(this->type == INT)
        return "int";
    else if(this->type == FLOAT)
        return "float";
    else if(this->type == POINTER)
        return "ptr(" + this->arr_type->toString() + ")";
    else if(this->type == FUNCTION)
        return "funct";
    else if(this->type == ARRAY)
        return "array(" + to_string(this->width) + ", " + this->arr_type->toString() + ")";
    else if(this->type ==  BLOCK)
        return "block";
    else
        return "NULL";
}


// SymTable class methods

SymTable::SymTable(string name_, SymTable *parent_) : name(name_), parent(parent_), count(0) {}

Symbol *SymTable::lookup(string name) {
    list<Symbol>::iterator it = (this->symbols).begin();

    while(it != (this->symbols).end()){
        if(it->name == name)
            return &(*it);
        it++;
    }

    // if it doesnt exist, add it to the table and return it
    Symbol* sym = new Symbol(name);
    (this->symbols).push_back(*sym);

    return &(this->symbols).back();
}


// to update offsets
void SymTable::update() {
    vector<SymTable *> nested_tables; 
    int offset;

    list<Symbol>::iterator it = (this->symbols).begin();

    while(it != (this->symbols).end()) {
        if (it == (this->symbols).begin()) {
            it->offset = 0;
            offset = it->size;
        }
        else {
            it->offset = offset;
            offset += it->size;
        }
        if (it->nestedST) {
            nested_tables.push_back(it->nestedST);
        }
        it++;
    }

    vector<SymTable*>::iterator it2 = nested_tables.begin();
    while(it2 != nested_tables.end()) {
        (*it2)->update();
        it2++;
    }
}

// to print symbol name and children
void SymTable::print() {

    // header for the table
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"Symbol Table : "<<this->name<<"\t\t\t\t\t\tParent: "<<(this->parent == NULL ? "NULL" : this->parent->name)<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"Name\t\t\tType\t\tInitial Value\tSize\tOffset\t\tNested Table"<<endl;

    vector<SymTable *> nested_tables;

    list<Symbol>::iterator it = (this->symbols).begin();
    while(it != (this->symbols).end()){
        cout<<it->name<<"\t\t\t\t"
        <<((it->isFunction) ? "funct" : it->type->toString())<<"\t\t\t"
        <<it->init_val<<"\t\t\t\t"
        <<it->size<<"\t\t"
        <<it->offset<<"\t\t\t"
        <<(it->nestedST == NULL ? "NULL" : it->nestedST->name)<<endl;

        // nested tables stored to print them later on, recursively
        if(it->nestedST != NULL)
            nested_tables.push_back(it->nestedST);

        it++;
    }

    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;

    // print nested tables
    vector<SymTable*>::iterator it2 = nested_tables.begin();
    while(it2 != nested_tables.end()) {
        (*it2)->print();
        it2++;
    }
}


// Symbol class methods

Symbol::Symbol(string name_, TYPE type_, string init_val_) : name(name_), type(new SymType(type_)), offset(0), nestedST(NULL), init_val(init_val_), isFunction(false) {
    size = this->type->computeSize();
}

// update type to given type
Symbol *Symbol::update(SymType *type) {
    this->type = type;
    size = this->type->computeSize();
    return this;
}

// convert type to given type IF POSSIBLE, else return same symbol
Symbol *Symbol::convert(TYPE ret_type) {

    if ((this->type)->type == INT)
    {
        
        if (ret_type == FLOAT)
        {
            // int to float conversion
            Symbol* temp = gentemp(ret_type);
            emit("=", temp->name, "int2float(" + this->name + ")");
            return temp;
        }

        else if (ret_type == CHAR)
        {
            // int to char conversion
            Symbol* temp = gentemp(ret_type);
            emit("=", temp->name, "int2char(" + this->name + ")");
            return temp;
        }

        // no conversion possible, return original symbol
        return this;
    }


    else if ((this->type)->type == FLOAT)
    {
        if (ret_type == INT)
        {
            // float to int conversion
            Symbol* temp = gentemp(ret_type);
            emit("=", temp->name, "float2int(" + this->name + ")");
            return temp;
        }
        // if the target type is char 
        else if (ret_type == CHAR)
        {
            // float to char conversion
            Symbol* temp = gentemp(ret_type);
            emit("=", temp->name, "float2char(" + this->name + ")");
            return temp;
        }

        // no conversion possible, return original symbol
        return this;
    }

   
    else if ((this->type)->type == CHAR)
    {

        if (ret_type == INT)
        {
            // char to int conversion
            Symbol* temp = gentemp(ret_type);
            emit("=", temp->name, "char2int(" + this->name + ")");
            return temp;
        }
        // if the target type is float
        else if (ret_type == FLOAT)
        {
            // char to float conversion
            Symbol* temp = gentemp(ret_type);
            emit("=", temp->name, "char2float(" + this->name + ")");
            return temp;
        }

        // no conversion possible, return original symbol
        return this;
    }

    // no conversion possible, return original symbol
    return this;

}

// Quad class methods 

Quad::Quad(string res, string arg1, string op, string arg2) : res(res), op(op), arg1(arg1), arg2(arg2) {}
Quad::Quad(string res, int arg1, string op, string arg2) : res(res), op(op), arg1(to_string(arg1)), arg2(arg2) {}

// print the quad 
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

// Expression class methods

void Expression::toInt() {
    if (this->type == Expression::BOOLEAN)
    {
        this->symbol = gentemp(INT);

        backpatch(this->truelist, nextinstr()); // truelist updation
        emit("=", this->symbol->name, "true");  // corresponding quad is emitted

        emit("goto", to_string(nextinstr() + 1));  

        backpatch(this->falselist, nextinstr());  // falselist updation
        emit("=", this->symbol->name, "false");
    }
}

void Expression::toBool() {
    if (this->type == Expression::NONBOOLEAN)
    {
        this->falselist = makelist(nextinstr()); // falselist updation

        emit("==", "", this->symbol->name, "0");

        this->truelist = makelist(nextinstr());  // truelist updation

        emit("goto", "");
    }
}


// global functions

void emit(string op, string res, string arg1, string arg2) {
    Quad *q = new Quad(res, arg1, op, arg2);
    quadArray.push_back(q);
}

void emit(string op, string res, int arg1, string arg2) {
    Quad *q = new Quad(res, arg1, op, arg2);
    quadArray.push_back(q);
}


list<int> makelist(int i) {
    return list<int>(1, i);
}

list<int> merge(list<int> l1, list<int> l2) {
    list<int> res = l1;
    res.merge(l2);
    return res;
}

void backpatch(list<int> li, int addr) {
    list<int>::iterator it = li.begin();
    while (it != li.end())
    {
        quadArray[*it - 1]->res = to_string(addr);
        it++;
    }
}

// other functions

int nextinstr() {
    return quadArray.size() + 1;
}

Symbol *gentemp(TYPE type, string val) {
    Symbol *temp = new Symbol("t" + to_string(currentST->count++), type, val);
    (currentST->symbols).push_back(*temp);
    return temp;
}

void changeTable(SymTable *ST) {
    currentST = ST;
}


// checks if both are of same type, or if type conversion can be done
bool typecheck(Symbol *&a, Symbol *&b)
{
    
    // if types are same, then no need for converison
    if(typecheck(a->type, b->type))
        return true;


    else if(a->type->type == INT or b->type->type == INT) {
        // convert both to int
        a = a->convert(INT);
        b = b->convert(INT);
        return true;
    }

    else if(a->type->type == FLOAT or b->type->type == FLOAT) {
        // convert both to float
        a = a->convert(FLOAT);
        b = b->convert(FLOAT);
        return true;
    }

    // no conversion possible
    else return false;
}

bool typecheck(SymType *st1, SymType *st2) {
    // recursively checks base type
    if (!st1 and !st2)
        return true;
    else if (!st1 or !st2 or st1->type != st2->type)
        return false;
    else
        // recursive call
        return typecheck(st1->arr_type, st2->arr_type);
}

void printQuadArray() {
    cout<<"Three Address Codes:"<<endl;
    for(int i = 0; i < quadArray.size(); i++) {
        cout<<i+1<<": ";
        quadArray[i]->print();
    }
}

int main() {
    tableCount = 0;
    globalST = new SymTable("global");
    currentST = globalST;

    yyparse();

    globalST->update();
    globalST->print();
    
    printQuadArray();

    return 0;
}