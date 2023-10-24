#include "ass5_21CS10026_21CS30009_translator.h"
#include<iostream>
#include<string>
#include<list>
#include<vector>

using namespace std; 

// global variables 
SymTable* globalST;      // global symbol table
SymTable* currentST;     // current symbol table
QuadArray qarr;          // quad array
BasicType bType;         // basic type
Sym* currentSymbol;      // current symbol
int next_instr;          // next instruction number

// Sym class methods 

Sym::Sym(string name_, TYPE type_, SymType *arr_type_, int width_): name(name_), type(new SymType(type_, width_, arr_type_)), init_val(" "), offset(0), parent_table(NULL) {
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
void SymTable::print() {
    
}

