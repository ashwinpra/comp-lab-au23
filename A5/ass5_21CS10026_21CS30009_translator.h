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
class Sym;      // symbol table entry
class SymType;  // type of a symbol
class SymTable; // symbol table
class Quad;     // entry in quad array
class QuadArray;    // array of quads

enum types{
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
    string name; // name of the symbol
    SymType* type; // type of the symbol
    string init_val; // initial value of the symbol
    int size; // size of the symbol
    int offset; // offset of the symbol
    SymTable* parent_table; // pointer to parent symbol table
 
    Sym (string name, SymType* type, string init_val, int size, int offset, SymTable* parent_table = NULL); // constructor
    Sym* update(SymType* type);  // update type

};

// symbol table class definition
class Symtable {
    string name; // name of the symbol table
    list<Sym*> table; // list of symbols
    int count; // counter for temporary variables
    Symtable* parent; // pointer to parent symbol table

    Symtable(string name = ""); // constructor
    Sym* lookup(string name); // lookup for a symbol in the symbol table - as mentioned in the assignment
    void print(); // print the symbol table - as mentioned in the assignment
    void update(); // update the symbol table - as mentioned in the assignment
};



#endif