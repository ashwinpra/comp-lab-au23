/*
    Compilers Lab Assignment 3 
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    C file with main() function to test the lexer of tinyC
*/

#include <stdio.h>
#include "defs.h"

extern int yylex();
extern char* yytext;
extern int yylineno;
extern FILE* yyin;

// test file is defined
#define TEST_FILE "ass3_21CS10026_21CS30009_test.c" 

int main() {
    int next_token;

    // to get input from test file
    yyin = fopen(TEST_FILE, "r");
    printf("Input file: %s\n\n", TEST_FILE);

    // get next token usign yylex() function
    next_token = yylex();

    while(next_token) {
        // display approppriate token and line number
        switch (next_token)
        {
        case KEYWORD:
            printf("< KEYWORD, %s > at line %d\n", yytext, yylineno);
            break;
        
        case IDENTIFIER:
            printf("< IDENTIFIER, %s > at line %d\n", yytext, yylineno);
            break;

        case INTEGER_CONST:
            printf("< INTEGER_CONST, %s > at line %d\n", yytext, yylineno);
            break;
        
        case FLOAT_CONST:
            printf("< FLOAT_CONST, %s > at line %d\n", yytext, yylineno);
            break;

        case CHAR_CONST:
            printf("< CHAR_CONST, %s > at line %d\n", yytext, yylineno);
            break;

        case STRING_LITERAL:
            printf("< STRING_LITERAL, %s > at line %d\n", yytext, yylineno);
            break;

        case PUNCTUATOR:
            printf("< PUNCTUATOR, %s > at line %d\n", yytext, yylineno);
            break;

        case SINGLE_LINE_COMMENT:
            printf("< SINGLE_LINE_COMMENT > at line %d\n", yylineno);
            break;

        case MULTI_LINE_COMMENT:
            printf("< MULTI_LINE_COMMENT > starting at line %d\n", yylineno);
            break;

        // default case - unexpected token
        default:
            printf("< UNEXPECTED_TOKEN: %s > at line %d\n", yytext, yylineno);
            break;
        }

        // iterate to next token
        next_token = yylex();
    } 
    return 0;
}