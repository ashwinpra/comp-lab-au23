#include "ass5_19CS30031_19CS10070_translator.h"

// Global Variables
vector<Quad *> quadArray;  // Quad Array
SymTable *currentTable, *globalTable, *parentTable;  // Symbol Tables
Symbol *currentSymbol;  // Current Symbol
TYPE currentType;  // Current Type
int tableCount, temporaryCount;  // Counts of number of tables and number of temps generated

// Implementation of symbol type class
SymType::SymType(TYPE type, SymType *arr_type, int width) : type(type), width(width), arr_type(arr_type) {}

// Implementation of sizes for symbol types
int SymType::getSize()
{
    if (type == CHAR)
        return 1;
    else if (type == INT || type == POINTER)
        return 4;
    else if (type == FLOAT)
        return 8;
    else if (type == ARRAY)
        return width * (arr_type->getSize());
    else
        return 0;
}

// Function to print symbol type
string SymType::toString()
{
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
        return "function";
    else if(this->type == ARRAY)
        return "array(" + to_string(this->width) + ", " + this->arr_type->toString() + ")";
    else if(this->type ==  BLOCK)
        return "block";
}

// Implementation of symbol table class
SymTable::SymTable(string name, SymTable *parent) : name(name), parent(parent) {}

Symbol *SymTable::lookup(string name)
{
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

// Update the symbol table and its children with offsets
void SymTable::update()
{
    vector<SymTable *> visited; // vector to keep track of children tables to visit
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
            visited.push_back(it->nestedTable);
        }
        it++;
    }

    vector<SymTable*>::iterator it2 = visited.begin();
    while(it2 != visited.end()) {
        (*it2)->update();
        it2++;
    }
}

// Function to print the symbol table and its children
void SymTable::print()
{

    // pretty print 
    cout << string(140, '=') << endl;
    cout << "Table Name: " << this->name <<"\t\t Parent Name: "<< ((this->parent)?this->parent->name:"None") << endl;
    cout << string(140, '=') << endl;
    cout << setw(20) << "Name" << setw(40) << "Type" << setw(20) << "Initial Value" << setw(20) << "Offset" << setw(20) << "Size" << setw(20) << "Child" << "\n" << endl;
    // cout<<"Name\t Type\t InitialValue\t Offset\t Size\n";
    vector<SymTable *> tovisit;

    // print all the symbols in the table
    for (auto &map_entry : (this)->symbols)
    {
        cout << setw(20) << map_entry.name;
        cout << setw(40) << (map_entry.isFunction ? "function" : map_entry.type->toString());
        cout << setw(20) << map_entry.initialValue << setw(20) << map_entry.offset << setw(20) << map_entry.size;
        cout << setw(20) << (map_entry.nestedTable ? map_entry.nestedTable->name : "NULL") << endl;
        // remember to print nested tables later
        if (map_entry.nestedTable)
        {
            tovisit.push_back(map_entry.nestedTable);
        }
    }
    cout << string(140, '-') << endl;
    cout << "\n" << endl;
    // print nested tables
    for (auto &table : tovisit)
    {
        table->print();
    }
}

// Implementation of symbol class
Symbol::Symbol(string name, TYPE type, string init) : name(name), type(new SymType(type)), offset(0), nestedTable(NULL), initialValue(init), isFunction(false)
{
    size = this->type->getSize();
}
// update type of the symbol
Symbol *Symbol::update(SymType *type)
{
    this->type = type;
    size = this->type->getSize();
    return this;
}
// convert the present symbol to different type, return old symbol if conversion not possible 
Symbol *Symbol::convert(TYPE type_)
{

    // if the current type is float
    if ((this->type)->type == FLOAT)
    {
        // if the target type is inst
        if (type_ == INT)
        {
            // generate symbol of new type
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "Float_TO_Int(" + this->name + ")");
            return fin_;
        }
        // if the target type is char 
        else if (type_ == CHAR)
        {
            // generate symbol of new type
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "Float_TO_Char(" + this->name + ")");
            return fin_;
        }
        // reutrn orignal symbol if the final type is not int or char 
        return this;
    }
    // if current type is int
    else if ((this->type)->type == INT)
    {
        // if the target type is float
        if (type_ == FLOAT)
        {
            // generate symbol of new type
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "INT_TO_Float(" + this->name + ")");
            return fin_;
        }
        // if the target type is char
        else if (type_ == CHAR)
        {
            // generate symbol of new type
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "INT_TO_Char(" + this->name + ")");
            return fin_;
        }
        // reutrn orignal symbol if the final type is not float or char
        return this;
    }
    // if the current type si char
    else if ((this->type)->type == CHAR)
    {
        // if the target type is int
        if (type_ == FLOAT)
        {
            // generate symbol of new type
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "Char_TO_Int(" + this->name + ")");
            return fin_;
        }
        // if the target type is float
        else if (type_ == FLOAT)
        {
            // generate symbol of new type
            Symbol *fin_ = gentemp(type_);
            emit("=", fin_->name, "Char_TO_Float(" + this->name + ")");
            return fin_;
        }
        // reutrn orignal symbol if the final type is not int or float
        return this;
    }
    return this;
}

// Implementation of quad class
Quad::Quad(string result, string arg1, string op, string arg2) : result(result), op(op), arg1(arg1), arg2(arg2) {}
Quad::Quad(string result, int arg1, string op, string arg2) : result(result), op(op), arg1(toString(arg1)), arg2(arg2) {}

// print the quad 
void Quad::print()
{
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

// Implementation of emit funtions
void emit(string op, string result, string arg1, string arg2)
{
    Quad *q = new Quad(result, arg1, op, arg2);
    quadArray.push_back(q);
}
void emit(string op, string result, int arg1, string arg2)
{
    Quad *q = new Quad(result, arg1, op, arg2);
    quadArray.push_back(q);
}

// Implementation of backpatching functions
void backpatch(list<int> list_, int addr)
{
    // for all the addresses in the list, add the target address 
    for (auto &i : list_)
    {
        quadArray[i-1]->result = toString(addr);
    }
}
list<int> makelist(int base)
{
    // returns list with the base address as its only value
    return list<int>(1, base);
}

list<int> merge(list<int> first, list<int> second)
{
    // merge two lists
    list<int> ret = first;
    ret.merge(second);
    return ret;
}
// Implementation of Expression class functions

void Expression::toInt()
{
    // if the expression type is boolean
    if (this->type == Expression::typeEnum::BOOLEAN)
    {
        // generate symbol of new type and do backpatching and other required operations
        this->symbol = gentemp(INT);
        backpatch(this->trueList, static_cast<int>(quadArray.size()+1)); // update the true list
        emit("=", this->symbol->name, "true");                        // emit the quad
        emit("goto", toString(static_cast<int>(quadArray.size() + 2)));  // emit the goto quad
        backpatch(this->falseList, static_cast<int>(quadArray.size()+1));  // update the false list
        emit("=", this->symbol->name, "false");
    }
}

void Expression::toBool()
{
    // if the expression type is non boolean
    if (this->type == Expression::typeEnum::NONBOOLEAN)
    {
        // generate symbol of new type and do backpatching and other required operations
        this->falseList = makelist(static_cast<int>(quadArray.size()+1)); // update the falselist
        emit("==", "", this->symbol->name, "0");                        // emit general goto statements
        this->trueList = makelist(static_cast<int>(quadArray.size()+1));  // update the truelist
        emit("goto", "");
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