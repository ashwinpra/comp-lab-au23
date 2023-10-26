#include "ass5_19CS30031_19CS10070_translator.h"

// Global Variables
vector<Quad *> quadArray;  // Quad Array
SymTable *currentTable, *globalTable, *parentTable;  // Symbol Tables
Symbol *currentSymbol;  // Current Symbol
TYPE currentType;  // Current Type
int tableCount, temporaryCount;  // Counts of number of tables and number of temps generated


// SymType class methods

SymType::SymType(TYPE type_, SymType *arr_type_, int width_) : type(type_), width(width_), arr_type(arr_type_) {}

// to get size (machine-dependent)
int SymType::getSize() {
    if (type == CHAR)
        return SIZE_OF_CHAR;
    else if (type == INT)
        return SIZE_OF_INT;
    else if (type == FLOAT)
        return SIZE_OF_FLOAT;
    else if (type == POINTER)
        return SIZE_OF_POINTER;
    else if (type == ARRAY)
        return width * (arr_type->getSize());
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
}


// SymTable class methods

SymTable::SymTable(string name_, SymTable *parent_) : name(name_), parent(parent_) {}

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
        if (it->nestedTable) {
            nested_tables.push_back(it->nestedTable);
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
        <<it->initialValue<<"\t\t\t\t"
        <<it->size<<"\t\t"
        <<it->offset<<"\t\t\t"
        <<(it->nestedTable == NULL ? "NULL" : it->nestedTable->name)<<endl;

        // parent tables are also printed recursively
        if(it->nestedTable != NULL)
            nested_tables.push_back(it->nestedTable);

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

Symbol::Symbol(string name_, TYPE type_, string init_val_) : name(name_), type(new SymType(type_)), offset(0), nestedTable(NULL), initialValue(init_val_), isFunction(false) {
    size = this->type->getSize();
}

// update type to given type
Symbol *Symbol::update(SymType *type) {
    this->type = type;
    size = this->type->getSize();
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

Quad::Quad(string result, string arg1, string op, string arg2) : result(result), op(op), arg1(arg1), arg2(arg2) {}
Quad::Quad(string result, int arg1, string op, string arg2) : result(result), op(op), arg1(to_string(arg1)), arg2(arg2) {}

// print the quad 
void Quad::print() {

    // result = arg1 op arg2
    if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "|" || op == "^" || op == "&" || op == "<<" || op == ">>")
        cout<<this->result<<" = "<<this->arg1<<" "<<this->op<<" "<<this->arg2<<endl;

    // if arg1 op arg2 goto result
    else if (op == "==" || op == "!=" || op == "<=" || op == ">=" || op == "<" || op == ">")
        cout<<"if "<<this->arg1<<" "<<this->op<<" "<<this->arg2<<" goto "<<this->result<<endl;

    // unary operators (result = op arg1)
    else if (op == "=")
        cout<<this->result<<" = "<<this->arg1<<endl;

    else if (op == "=&")
        cout<<this->result<<" = &"<<this->arg1<<endl;
    
    else if (op == "=*")
        cout<<this->result<<" = *"<<this->arg1<<endl;

    else if (op == "=-")
        cout<<this->result<<" = -"<<this->arg1<<endl;

    else if (op == "!")
        cout<<this->result<<" = !"<<this->arg1<<endl;

    else if (op == "~")
        cout<<this->result<<" = ~"<<this->arg1<<endl;
    
    else if (op == "*=")
        cout<<"*"<<this->result<<" = "<<this->arg1<<endl;

    else if (op == "=[]")
        cout<<this->result<<" = "<<this->arg1<<"["<<this->arg2<<"]"<<endl;

    else if (op == "[]=")
        cout<<this->result<<"["<<this->arg1<<"]"<<" = "<<this->arg2<<endl;


    // goto result
    else if (op == "goto")
        cout<<"goto "<<this->result<<endl;

    // return result
    else if (op == "return")
        cout<<"return "<<this->result<<endl;

    // param result
    else if (op == "param")
        cout<<"param "<<this->result<<endl;

    // result = call arg1, arg2
    else if (op == "call")
        cout<<this->result<<" = call "<<this->arg1<<", "<<this->arg2<<endl;

    // label
    else if (op == "label")
        cout<<this->result<<":"<<endl;
}

// Expression class methods

void Expression::toInt() {
    if (this->type == Expression::typeEnum::BOOLEAN)
    {
        // generate symbol of new type and do backpatching and other required operations
        this->symbol = gentemp(INT);
        backpatch(this->trueList, nextinstr()); // update the true list
        emit("=", this->symbol->name, "true");                        // emit the quad
        emit("goto", toString(nextinstr() + 1));  // emit the goto quad
        backpatch(this->falseList, nextinstr());  // update the false list
        emit("=", this->symbol->name, "false");
    }
}

void Expression::toBool() {
    if (this->type == Expression::typeEnum::NONBOOLEAN)
    {
        // generate symbol of new type and do backpatching and other required operations
        this->falseList = makelist(nextinstr()); // update the falselist
        emit("==", "", this->symbol->name, "0");                        // emit general goto statements
        this->trueList = makelist(nextinstr());  // update the truelist
        emit("goto", "");
    }
}

// global functions

void emit(string op, string result, string arg1, string arg2) {
    Quad *q = new Quad(result, arg1, op, arg2);
    quadArray.push_back(q);
}

void emit(string op, string result, int arg1, string arg2) {
    Quad *q = new Quad(result, arg1, op, arg2);
    quadArray.push_back(q);
}


list<int> makelist(int i) {
    // returns list with base as the only value
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
        quadArray[*it - 1]->result = to_string(addr);
        it++;
    }
}


// Implementation of other helper functions
int nextinstr()
{
    // returns the next instruction number
    return quadArray.size() + 1;
}

// generates temporary of given type with given value s
Symbol *gentemp(TYPE type, string s)
{
    Symbol *temp = new Symbol("t" + toString(temporaryCount++), type, s);
    currentTable->symbols.push_back(*temp);
    return temp;
}
// change current table to specified table
void changeTable(SymTable *table)
{
    currentTable = table;
}

// lambda function to check if a and b are of the same type 
bool type_comp(SymType *first, SymType *second) 
{
    if (!first and !second)
        return true;
    else if (!first or !second or first->type != second->type)
        return false;
    else
        return type_comp(first->arr_type, second->arr_type);
};

// code to check if a and b are of the same type, promotes to the higher type if feasible and if that makes the type of both the same
bool typeCheck(Symbol *&a, Symbol *&b)
{
    
    // if the types are same return true
    if(type_comp(a->type, b->type))
        return true;
    // if the types are not same but can be cast safely according the rules, then cast and return
    else if(a->type->type == FLOAT or b->type->type == FLOAT) {
        a = a->convert(FLOAT);
        b = b->convert(FLOAT);
        return true;
    }
    else if(a->type->type == INT or b->type->type == INT) {
        a = a->convert(INT);
        b = b->convert(INT);
        return true;
    }
    // return false if not possible to cast safelt to same type
    else {
        return false;
    }
}
// Implementation of utility functions
// overloaded toString function to maintain semantic consistency 
// convert int to string
string toString(int i)
{
    return to_string(i);
}
// converts float to string
string toString(float f)
{
    return to_string(f);
}
// converts char to string
string toString(char c)
{
    return string(1, c);
}

int main() {
    // initialization of global variables
    tableCount = 0;
    temporaryCount = 0;
    globalTable = new SymTable("global");
    currentTable = globalTable;
    cout << left; // left allign
    yyparse();
    globalTable->update();
    globalTable->print();
    int ins = 1;
    for(auto it : quadArray) {
        cout<<setw(4)<<ins++<<": "; it->print();
    }
    return 0;
}