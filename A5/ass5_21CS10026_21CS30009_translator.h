#ifndef _TRANSLATOR_H
#define _TRANSLATOR_H

#include<iostream>
#include<string>
#include<list>
#include<vector>

using namespace std;

extern int yyparse();


// defining size of data types (can be changed as it is machine-dependent)
#define SIZE_OF_VOID 0
#define SIZE_OF_CHAR 1
#define SIZE_OF_INT 4
#define SIZE_OF_FLOAT 8
#define SIZE_OF_POINTER 4


// Classes 
class Sym;          // symbol table entry
class SymType;      // type of a symbol
class SymTable;     // symbol table
class Quad;         // entry in quad array


enum TYPE{
    TYPE_VOID,
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_POINTER,
    TYPE_FUNC,
    TYPE_ARRAY
};


class Sym {
    public: 
        string name;            // name of the symbol
        SymType* type;          // type of the symbol
        string init_val;        // initial value of the symbol
        int size;               // size of the symbol
        int offset;             // offset of the symbol
        SymTable* parent_table; // pointer to parent symbol table

        // size will be obtained from type
        Sym(string name_, TYPE type_, SymType* arr_type_, int width_, string init_val_ = "-"); // constructor

        Sym* update(SymType* type);  // update type

};

class SymType {
    public: 
        TYPE type;              // type of the symbol
        int width;              // for arrays, 1 if not array
        SymType* arr_type;      // for arrays, NULL if not array -> check

        SymType(TYPE type_, int width_ = 1, SymType* arr_type_ = NULL); // constructor
};

// symbol table class definition
class SymTable {
    public:
        string name;            // name of the symbol table
        list<Sym> table;        // list of symbols
        int count;              // counter for temporary variables
        SymTable* parent;       // pointer to parent symbol table

        SymTable(string name_ = " "); // constructor

        Sym* lookup(string name);   // lookup for a symbol in the symbol table, or add if not present - as mentioned in the assignment
        void print();               // print the symbol table - as mentioned in the assignment
        void update();              // update offset of existing entries - as mentioned in the assignment
};

// quad -> of the form (op, res, arg1, arg2) for res = arg1 op arg2
class Quad {
    public:
        string op; 
        string res;
        string arg1;
        string arg2;

        // overloaded constructors
        Quad(string op_, string res_, string arg1_, string arg2_); 
        Quad(string op_, string res_, int arg1_, string arg2_); 
        Quad(string op_, string res_, float arg1_, string arg2_);
        
        void print(); // print the quad

};

typedef struct _Statement {
    list<int> nextlist; // nextlist for the statement
} Statement;

typedef struct _Array {
    TYPE arr_type;      // type of the array (array or pointer)
    Sym* entry;         // symbol table entry for the array
    Sym* addr;          // pointer to symbol table entry for the array
    SymType* type;      // for multidimensional arrays -> type of the subarray
} Array;

typedef struct _Expression {
    Sym* entry;             // symbol table entry for the expression
    list<int> truelist;     // truelist for the expression
    list<int> falselist;    // falselist for the expression
    list<int> nextlist;     // nextlist for the expression
    enum TYPE { TYPE_NBOOL, TYPE_BOOL } type;                 // type of the expression
} Expression;

// global variables
extern SymTable* globalST;      // global symbol table
extern SymTable* currentST;     // current symbol table
extern vector<Quad*> qArr;      // quad array
extern Sym* currentSymbol;      // current symbol
extern TYPE currentType;        // current type
extern int next_instr;          // next instruction number

// global functions, as mentioned in the assignment
list<int> makelist(int);
list<int> merge(list<int>&, list<int>&);
void backpatch(list<int>&, int);
bool typecheck(Sym*, Sym*);
bool typecheck(SymType*, SymType*);
Sym* convertType(Sym*, TYPE); // this is the replacement for conv<type1>2<type2> - it handles all combinations
Expression* convBool2Int(Expression*); // check
Expression* convInt2Bool(Expression*); // check

int nextinstr(); // return the next instruction number

int computeSize(SymType*); // compute size of a symbol type

void printQuadArray(); // print the quad array

void changeTable(SymTable*); // change the current symbol table

string getType(TYPE); // helper function in printing symbol table

// overloaded functions for emitting quads
void emit(string, string, string arg1=" ", string arg2=" ");
void emit(string, string, int, string arg2=" ");
void emit(string, string, float, string arg2=" ");

Sym* gentemp(TYPE, string init_val = "-"); // generate temporary variable and insert it to symbol table




#endif