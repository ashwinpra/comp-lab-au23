#ifndef _TRANSLATOR_H
#define _TRANSLATOR_H


#include<iostream>
#include<string>
#include<map>
#include<list>
#include<vector>

using namespace std;


// defining size of data types (can be changed as it is machine-dependent)
#define SIZE_OF_CHAR 1
#define SIZE_OF_INT 4
#define SIZE_OF_FLOAT 8
#define SIZE_OF_POINTER 4


// Classes 
class Sym;          // symbol table entry
class SymType;      // type of a symbol
class SymTable;     // symbol table
class Quad;         // entry in quad array
class QuadArray;    // array of quads
class BasicType;    // basic type of a symbol

enum TYPE{
    TYPE_VOID,
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_POINTER,
    TYPE_FUNC,
    TYPE_ARRAY
};

// add enum for opcodes ?


class Sym {
    public: 
        string name;            // name of the symbol
        SymType* type;          // type of the symbol
        string init_val;        // initial value of the symbol
        int size;               // size of the symbol
        int offset;             // offset of the symbol
        SymTable* parent_table; // pointer to parent symbol table
 
        Sym (string name, SymType* type, string init_val, int size, int offset, SymTable* parent_table = NULL); // constructor

        Sym* update(SymType* type);  // update type

};

class SymType {
    public: 
        TYPE type;              // type of the symbol
        int width;              // for arrays, 1 if not array
        SymType* array_type;    // for arrays, NULL if not array -> check

        SymType(TYPE type, int width = 1, SymType* array_type = NULL); // constructor
};

// symbol table class definition
class Symtable {
    public:
        string name;            // name of the symbol table
        list<Sym> table;        // list of symbols
        int count;              // counter for temporary variables
        Symtable* parent;       // pointer to parent symbol table

        Symtable(string name = ""); // constructor

        Sym* lookup(string name);   // lookup for a symbol in the symbol table - as mentioned in the assignment
        void print();               // print the symbol table - as mentioned in the assignment
        void update();              // update the symbol table - as mentioned in the assignment
};

// quad -> of the form (op, arg1, arg2, res) for res = arg1 op arg2
class Quad {
    public:
        string op; 
        string arg1;
        string arg2;
        string res;

        Quad(string op, string arg1 = "", string arg2 = "", string res = ""); // constructor
        
        void print(); // print the quad

};

class QuadArray {
    public:
        vector<Quad> array; // vector of quads

        void print(); // print the quad array - as mentioned in the assignment
};

class BasicType {
    public:
        vector<TYPE> types; // vector of types
        vector<int> sizes;  // vector of sizes

        void addType(TYPE type, int size); // add a type to the vector of types
};

// check - structure for statement and array ?

struct Expression {
    Sym* entry;             // symbol table entry for the expression
    list<int> truelist;     // truelist for the expression
    list<int> falselist;    // falselist for the expression
    list<int> nextlist;     // nextlist for the expression
    TYPE type; // type of the expression
};

// global variables
extern Symtable* globalST; // global symbol table
extern Symtable* currentST;   // current symbol table
extern QuadArray qarr;        // quad array
extern BasicType bType;   // basic type
extern Sym* currentSymbol;   // current symbol
extern int next_instr;  // next instruction number

// global functions, as mentioned in the assignment
list<int> makelist(int);
list<int> merge(list<int>*, list<int>*);
void backpatch(list<int>*, int);
bool typecheck(Expression*, Expression*);
string convInt2String(int);
string convFloat2String(float);

// overloaded functions for emitting quads
void emit(string, string, string arg1="", string arg2="");
void emit(string, string, int, string arg2="");
void emit(string, string, float, string arg2="");

Sym* gentemp(SymType* type, string init_val = ""); // generate temporary variable and insert it to symbol table

// check - more functions?




#endif