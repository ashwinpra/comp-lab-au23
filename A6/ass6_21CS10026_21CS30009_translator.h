#ifndef _TRANSLATOR_H
#define _TRANSLATOR_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <fstream>
#include <stack>
#include <iomanip>
#include <string.h>

extern int yyparse(); 
extern FILE* yyin;

using namespace std;

// defining size of data types (can be changed as it is machine-dependent)
#define SIZE_OF_VOID 0
#define SIZE_OF_CHAR 1
#define SIZE_OF_INT 4
#define SIZE_OF_FLOAT 8
#define SIZE_OF_POINTER 8 // check 

// Classes
class SymType;          // type of a symbol
class SymTable;         // symbol table
class Symbol;           // symbol table entry
class Quad;             // entry in quad array
class Expression;       // expression attributes (used while parsing)
class Array;            // array attributes (used while parsing)
class Statement;        // statement attributes (used while parsing)
class ActivationRecord; // activation record (used in code generation)

enum TYPE {
    VOID,
    CHAR, 
    INT, 
    FLOAT, 
    POINTER, 
    FUNCTION, 
    ARRAY, 
    BLOCK
};

class SymType {
    public:
        TYPE type;              // type of the symbol 
        int width;              // width of the symbol -> for arrays, 1 if not array
        SymType *arr_type;      // for arrays, NULL if not array

        SymType(TYPE type_, SymType *arr_type_ = NULL, int width_ = 1);  // constructor

        int computeSize();  // to compute size of the symbol type

        string toString(); // returns the string representation of the type
};


class SymTable {
    public:
        string name;                // name of the symbol table
        list <Symbol> symbols;      // list of symbols in the ST
        SymTable *parent;           // pointer to parent ST, NULL for global ST
        int count;                  // number of entries in the ST
        ActivationRecord *AR;       // activation record for the ST
        vector<string> params;      // ordered list of parameters of the function (if any) 
        
        SymTable(string = "NULL", SymTable * = NULL); // constructor

        Symbol* lookup(string); // lookup for a symbol in the symbol table, or add if not present - as mentioned in the assignment

        void print();  // print the symbol table - as mentioned in assignment 5

        void update(); // update the symbol table - as mentioned in assignment 5, also creates activation record
};

class Symbol {
    public:
        string name;            // name of the symbol 
        int size;               // size of the symbol
        int offset;             // offset of the symbol
        SymType *type;          // type of the symbol
        SymTable *nestedST;     // pointer to parent symbol table if any
        string init_val;        // initial value of the symbol
        enum Category {LOCAL, GLOBAL, PARAM, TEMP, FUNCTION} category;  // category of the symbol

        Symbol(string, TYPE = INT, string = "-");  // constructor

        Symbol* update(SymType*);  // update the symbol with given type

        Symbol* convert(TYPE);  // convert the symbol to given type - it covers all type conversions conv<type1>2<type2> in the assignment
};


class Quad {
    public:
        // res = arg1 op arg2
        string op;
        string arg1;
        string arg2; 
        string res; 

        // overloaded constructors - supporting different types of arg1
        Quad(string, string, string = "", string = "");  
        Quad(string, int, string = "", string = ""); 

        void print();  // print the quad
};

class QuadArray {
    public:
        vector<Quad*> array;  // vector of quads

        void print();  // print the quad array
};


class Expression {
    public:
        Symbol *symbol;                             // symbol corresponding to the expression
        enum typeEnum {NONBOOLEAN, BOOLEAN} type;   // type of the expression 
        list<int> truelist;                         // truelist for the expression
        list<int> falselist;                        // falselist for the expression
        list<int> nextlist;                         // nextlist for the expression

        void conv2Int();  // convert boolean expression to integer

        void conv2Bool();  // convert integer expression to boolean
};


class Array {
    public:
        Symbol *loc;                                    // address of the array (for offset calculation)
        enum typeEnum {NEITHER, POINTER, ARRAY} type;   // type of the array (array or pointer, or neither is also possible initially)
        Symbol *symbol;                                 // symbol corresponding to the array
        SymType *subarr_type;                           // for multidimensional arrays -> type of the subarray
};


class Statement {
    public:
        list<int> nextlist;     // nextlist for the statement
};

class ActivationRecord {
    public: 
        map <string, int> displacement; 
        int total_displacement;

        ActivationRecord();
};

// Global variables
extern vector<string> stringList;       // list of strings (to save in DATA SEGMENT)
extern vector<Quad *> qArr;             // array of quads (implemented as a simple vector for convenience)
extern SymTable* currentST;             // current symbol table being used
extern SymTable* globalST;              // global symbol table (parent of all symbol tables)
extern int block_count;                 // block count which is used while generating names for new symbol tables
extern int temp_count;
extern Symbol* current_symbol;          // current symbol - for changing ST if required
extern TYPE current_type;               // current type - for type casting if required



// overloaded emit functions corresponding to quad constructors
void emit(string, string, string = "", string = "");  
void emit(string, string, int, string = "");  

// global functions, as mentioned in the assignment (other ones have been defined as class methods)
list<int> makelist(int);  
list<int> merge(list<int>, list<int>); 
void backpatch(list<int>, int);
void final_backpatch(); // check 
bool typecheck(Symbol *&, Symbol *&);  
bool typecheck(SymType*, SymType*); // overloaded instance for symtype checking within typecheck for symbol

// Other functions

int nextinstr();  // return next instruction number
Symbol *gentemp(TYPE, string = "-");  // generate temporary variable and insert it to symbol table
void changeTable(SymTable *); // change the current symbol table
void printQuadArray();  // print the quad array

#endif