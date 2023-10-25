%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "ass5_19CS30031_19CS10070_translator.h"
    #include "y.tab.h"
    int lineCount = 1;
%}

%x multi_line_comment
%x single_line_comment

identifier [a-zA-Z_][a-zA-Z0-9_]*

digit_sequence [0-9]+
sign [+-]
exponent_part [eE]{sign}?{digit_sequence}
fractional_const ({digit_sequence})?\.{digit_sequence}|{digit_sequence}\. 

integer_constant [1-9][0-9]*|0

float_constant {fractional_const}{exponent_part}?|{digit_sequence}{exponent_part}

escape_sequence "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v" 

c_char [^\'\n\\']|{escape_sequence}
c_char_sequence {c_char}+

char_constant \'{c_char_sequence}\'

s_char [^\"\n\\']|{escape_sequence}
s_char_sequence {s_char}+

string_literal \"({s_char_sequence})?\"

whitespace [ \t\n]

%%

"extern"                    {return EXTERN;}
"static"                    {return STATIC;}
"auto"                      {return AUTO;}
"register"                  {return REGISTER;}
"void"                      {return VOID_TYPE;}
"char"                      {return CHAR_TYPE;}
"short"                     {return SHORT;}
"int"                       {return INT_TYPE;}
"long"                      {return LONG;}
"float"                     {return FLOAT_TYPE;}
"double"                    {return DOUBLE;}
"signed"                    {return SIGNED;}
"unsigned"                  {return UNSIGNED;}
"_Bool"                     {return BOOL;}
"_Complex"                  {return COMPLEX;}
"_Imaginary"                {return IMAGINARY;}

"const"                     {return CONST;}
"restrict"                  {return RESTRICT;}
"volatile"                  {return VOLATILE;}
"enum"                      {return ENUM;}
"inline"                    {return INLINE;}

"sizeof"                    {return SIZEOF;}
"struct"                    {return STRUCT;}
"typedef"                   {return TYPEDEF;}
"union"                     {return UNION;}

"if"                        {return IF;}
"else"                      {return ELSE;}
"switch"                    {return SWITCH;}
"case"                      {return CASE;}
"default"                   {return DEFAULT;}
"while"                     {return WHILE;}
"continue"                  {return CONTINUE;}
"do"                        {return DO;}
"goto"                      {return GOTO;}
"for"                       {return FOR;}
"return"                    {return RETURN;}
"break"                     {return BREAK;}

{identifier}                    { yylval.symbol = currentTable->lookup(yytext);; return IDENTIFIER; }
{integer_constant}              { yylval.intVal = atoi(yytext); return INTEGER_CONSTANT; }
{float_constant}                 { yylval.floatVal = strdup(yytext); return FLOATING_CONSTANT; }
{char_constant}                 { yylval.charVal = strdup(yytext); return CHARACTER_CONSTANT; }
{string_literal}                { yylval.stringVal = strdup(yytext); return STRING_LITERAL; }

"["                             { return LEFT_SQUARE_BRACKET; }
"++"                            { return INCREMENT; }
"/"                             { return SLASH; }
"?"                             { return QUESTION_MARK; }
"="                             { return ASSIGNMENT; }
","                             { return COMMA; }
"]"                             { return RIGHT_SQUARE_BRACKET; }
"("                             { return LEFT_PARENTHESES; }
"{"                             { return LEFT_CURLY_BRACKET; }
"}"                             { return RIGHT_CURLY_BRACKET; }
"."                             { return DOT; }
"->"                            { return ARROW; }
"*"                             { return ASTERISK; }
"+"                             { return PLUS; }
"-"                             { return MINUS; }
"~"                             { return TILDE; }
"!"                             { return EXCLAMATION; }
"%"                             { return MODULO; }
"<<"                            { return LEFT_SHIFT; }
">>"                            { return RIGHT_SHIFT; }
"<"                             { return LESS_THAN; }
">"                             { return GREATER_THAN; }
"<="                            { return LESS_EQUAL_THAN; }
">="                            { return GREATER_EQUAL_THAN; }
":"                             { return COLON; }
";"                             { return SEMI_COLON; }
"..."                           { return ELLIPSIS; }
"*="                            { return ASTERISK_ASSIGNMENT; }
"/="                            { return SLASH_ASSIGNMENT; }
"%="                            { return MODULO_ASSIGNMENT; }
"+="                            { return PLUS_ASSIGNMENT; }
"-="                            { return MINUS_ASSIGNMENT; }
"<<="                           { return LEFT_SHIFT_ASSIGNMENT; }
"#"                             { return HASH; }
"--"                            { return DECREMENT; }
")"                             { return RIGHT_PARENTHESES; }
"&"                             { return BITWISE_AND; }
"=="                            { return EQUALS; }
"^"                             { return BITWISE_XOR; }
"|"                             { return BITWISE_OR; }
"&&"                            { return LOGICAL_AND; }
"||"                            { return LOGICAL_OR; }
">>="                           { return RIGHT_SHIFT_ASSIGNMENT; }
"!="                            { return NOT_EQUALS; }
"&="                            { return BITWISE_AND_ASSIGNMENT; }
"|="                            { return BITWISE_OR_ASSIGNMENT; }
"^="                            { return BITWISE_XOR_ASSIGNMENT; }

"/*"                            { BEGIN(multi_line_comment); }
<multi_line_comment>"*/"        { BEGIN(INITIAL); }
<multi_line_comment>.           { }
<multi_line_comment>"\n"        { yylineno++; }

"//"                            { BEGIN(single_line_comment); }
<single_line_comment>"\n"       { BEGIN(INITIAL); }
<single_line_comment>.          { }

{whitespace}                    { }
"\n"                            { yylineno++; }
.                               { return INVALID_TOKEN; }

%%

int yywrap() { return 1; }