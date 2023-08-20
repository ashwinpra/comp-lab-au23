#include <stdio.h>
#include "defs.h"

// extern lex variables and functions
extern int yylex();
extern char* yytext;
extern int yylineno;
extern int yylen;
extern FILE* yyin;
extern FILE* yyout;

#define TEST_FILE "ass3_21CS10026_21CS30009_test.c"

int main() {
    int next_token;

    // to get input from test file
    yyin = fopen(TEST_FILE, "r");

    // get next token usign yylex() function
    next_token = yylex();

    while(next_token) {
        switch (next_token)
        {
        case KEYWORD:
            printf("<KEYWORD, %s>\n", yytext);
            break;
        
        case IDENTIFIER:
            printf("<IDENTIFIER, %s>\n", yytext);
            break;

        case INTEGER_CONST:
            printf("<INTEGER_CONST, %s>\n", yytext);
            break;
        
        case FLOAT_CONST:
            printf("<FLOAT_CONST, %s>\n", yytext);
            break;

        case CHAR_CONST:
            printf("<CHAR_CONST, %s>\n", yytext);
            break;

        case STRING_LITERAL:
            printf("<STRING_LITERAL, %s>\n", yytext);
            break;

        case PUNCTUATOR:
            printf("<PUNCTUATOR, %s>\n", yytext);
            break;

        case SINGLE_LINE_COMMENT:
            printf("<SINGLE_LINE_COMMENT at line %d>\n", yylineno-1);
            break;

        case MULTI_LINE_COMMENT:
            printf("<MULTI_LINE_COMMENT at line %d>\n", yylineno-1);
            break;

        // default case - unexpected token
        default:
            printf("<UNEXPECTED TOKEN at line %d, %s>\n", yylineno-1, yytext);
            break;
        }

        // iterate to next token
        next_token = yylex();
    } 
    return 0;
}