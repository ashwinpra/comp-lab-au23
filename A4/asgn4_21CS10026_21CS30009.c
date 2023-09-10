#include<stdio.h>
extern int yyparse();
extern int yylex();

int main()
{
    yyparse();
    return 0;
}