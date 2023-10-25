#ifndef _TRANSLATOR_H
#define _TRANSLATOR_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iomanip> // remove this along with setw
#include <string.h>

extern int yyparse(); 

using namespace std;

// defining size of data types (can be changed as it is machine-dependent)
#define SIZE_OF_VOID 0
#define SIZE_OF_CHAR 1
#define SIZE_OF_INT 4
#define SIZE_OF_FLOAT 8
#define SIZE_OF_POINTER 4

class Symbol;       // symbol table entry
class SymType;      // type of a symbol
class SymTable;     // symbol table
class Quad;         // entry in quad array
class Expression;   // expression attributes (used while parsing)
class Array;        // array attributes (used while parsing)
class Statement;    // statement attributes (used while parsing)

// Enum for types used in SymType
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

class Symbol {
    public:
        string name;                    // name of the symbol
        int size;                       // size of the symbol
        int offset;                     // offset of the symbol
        SymType *type;                   // type of the symbol
        SymTable *nestedTable;          // pointer to parent symbol table if any
        string initialValue;            // initial value of the symbol

        // check this
        bool isFunction; // flag to indicate if the symbol represents a function or not
                         // if it does represent a function the return type will be given by the type attribute

        Symbol(string, TYPE = INT, string = "");  // constructor

        Symbol *update(SymType*);  // update the symbol with given type
        Symbol *convert(TYPE);  // convert the symbol to given type
};

class SymType {
    public:
        TYPE type;              // type of the symbol 
        int width;              // width of the symbol -> for arrays, 1 if not array
        SymType *arr_type;      // for arrays, NULL if not array

        SymType(TYPE type_, SymType *arr_type_ = NULL, int width_ = 1);  // constructor

        int getSize();  // to compute size of the symbol type

        string toString(); // returns the string representation of the type
};

class SymTable {
    public:
        string name;                // name of the symbol table
        list <Symbol> symbols;      // list of symbols in the ST
        SymTable *parent;            // pointer to parent ST, NULL for global ST
        
        SymTable(string = "NULL", SymTable * = NULL); // constructor

        Symbol *lookup(string); // lookup for a symbol in the symbol table, or add if not present - as mentioned in the assignment
        void print();  // print the symbol table - as mentioned in the assignment
        void update(); // update the symbol table - as mentioned in the assignment
};


class Quad {
    public:
        // result = arg1 op arg2
        string op;
        string arg1;
        string arg2; 
        string result; 

        // overloaded constructors - supporting different types of arg1
        Quad(string, string, string = "=", string = "");  
        Quad(string, int, string = "=", string = ""); 

        void print();  // print the quad
};


class Expression {
    public:
        Symbol *symbol;                             // symbol corresponding to the expression
        enum typeEnum {NONBOOLEAN, BOOLEAN} type;   // type of the expression 
        list<int> trueList;                         // truelist for the expression
        list<int> falseList;                        // falselist for the expression
        list<int> nextList;                         // nextlist for the expression

        void toInt();  // convert boolean expression to integer
        void toBool();  // convert integer expression to boolean
};


class Array {
    public:
        Symbol *loc;                                    // address of the array (for offset calculation)
        enum typeEnum {POINTER, ARRAY, NEITHER} type;    // type of the array (array or pointer, or neither is also possible initially)
        Symbol *symbol;                                 // symbol corresponding to the array
        SymType *subarr_type;                           // for multidimensional arrays -> type of the subarray
};


class Statement {
    public:
        list<int> nextList;     // nextlist for the statement
};

// Global variables
extern vector<Quad *> quadArray; // array of quads
extern SymTable *currentTable, *globalTable; // current and global symbol tables
extern Symbol *currentSymbol;  // current symbol
extern TYPE currentType;  // current type
extern int tableCount, temporaryCount; // counters for symbol table and temporary symbols

// overloaded functions for emit
void emit(string, string, string = "", string = "");  
void emit(string, string, int, string = "");  

// global functions, as mentioned in the assignment

list<int> makelist(int);  
list<int> merge(list<int>, list<int>); 
void backpatch(list<int>, int);  
bool typeCheck(Symbol *&, Symbol *&);  

// other function

int nextinstr();  // returns the next instruction number

Symbol *gentemp(TYPE, string = "");  // generates a new temporary symbol

void changeTable(SymTable *);  // changes the current symbol table to the given one

// Utility functions
string toString(int);  // returns the string representation of the given integer
string toString(float);  // returns the string representation of the given float
string toString(char);  // returns the string representation of the given character

#endif
