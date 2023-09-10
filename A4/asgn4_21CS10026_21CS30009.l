/*
    Compilers Lab Assignment 4
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    Flex Specification for tinyC
*/

%{
// #include "defs.h"
#include "y.tab.h"
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

punctuator "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|">>"|"<<"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"

whitespace [ \t\n]

%%
"auto"                      {return AUTO;}
"break"                     {return BREAK;}
"case"                      {return CASE;}
"char"                      {return CHAR;}
"const"                     {return CONST;}
"continue"                  {return CONTINUE;}
"default"                   {return DEFAULT;}
"do"                        {return DO;}
"double"                    {return DOUBLE;}
"else"                      {return ELSE;}
"enum"                      {return ENUM;}
"extern"                    {return EXTERN;}
"float"                     {return FLOAT;}
"for"                       {return FOR;}
"goto"                      {return GOTO;}
"if"                        {return IF;}
"inline"                    {return INLINE;}
"int"                       {return INT;}
"long"                      {return LONG;}
"register"                  {return REGISTER;}
"restrict"                  {return RESTRICT;}
"return"                    {return RETURN;}
"short"                     {return SHORT;}
"signed"                    {return SIGNED;}
"sizeof"                    {return SIZEOF;}
"static"                    {return STATIC;}
"struct"                    {return STRUCT;}
"switch"                    {return SWITCH;}
"typedef"                   {return TYPEDEF;}
"union"                     {return UNION;}
"unsigned"                  {return UNSIGNED;}
"void"                      {return VOID;}
"volatile"                  {return VOLATILE;}
"while"                     {return WHILE;}
"_Bool"                     {return BOOL;}
"_Complex"                  {return COMPLEX;}
"_Imaginary"                {return IMAGINARY;}

{identifier}                {return IDENTIFIER;}

{integer_constant}          {return INTEGER_CONST;}

{float_constant}            {return FLOAT_CONST;}

{char_constant}             {return CHAR_CONST;}

{string_literal}            {return STRING_LITERAL;}

"="                         {return EQ;}
":"                         {return COLON;}
";"                         {return SEMI_COLON;}
"?"                         {return QUESTION_MARK;}
"++"                        {return INC_OP;}
"->"                        {return PTR_OP;}
"<<"                        {return LEFT_OP;}
">>"                        {return RIGHT_OP;}
"<"                         {return LESS_THAN;}
">"                         {return GREATER_THAN;}
"<="                        {return LTE_OP;}
">="                        {return GTE_OP;}
"..."                       {return ELLIPSIS;}
"*="                        {return MUL_ASSIGN;}
"/="                        {return DIV_ASSIGN;}
"%="                        {return MOD_ASSIGN;}
"+="                        {return ADD_ASSIGN;}
"-="                        {return SUB_ASSIGN;}
"<<="                       {return LEFT_ASSIGN;}
"--"                        {return DEC_OP;}
"=="                        {return EQ_OP;}
"&&"                        {return AND_OP;}
"||"                        {return OR_OP;}
">>="                       {return RIGHT_ASSIGN;}
"!="                        {return NE_OP;}
"&="                        {return AND_ASSIGN;}
"|="                        {return OR_ASSIGN;}
"^="                        {return XOR_ASSIGN;}
"("                         {return PARENTHESIS_OPEN;}
")"                         {return PARENTHESIS_CLOSE;}
"{"                         {return CURLY_BRACE_OPEN;}
"}"                         {return CURLY_BRACE_CLOSE;}
"["                         {return SQR_BRACE_OPEN;}
"]"                         {return SQR_BRACE_CLOSE;}
"."                         {return DOT;}
"&"                         {return BITWISEAND;}
"|"                         {return BITWISEOR;}
"^"                         {return BITWISEXOR;}
"*"                         {return STAR;}
"+"                         {return PLUS;}
"-"                         {return MINUS;}
"~"                         {return NOT;}
"!"                         {return EXCLAMATION;}
"/"                         {return DIVIDE;}
"%"                         {return PERCENTAGE;}
","                         {return COMMA;}
"#"                         {printf("hash found\n"); return HASH;}

"/*"                        {BEGIN(multi_line_comment);}
<multi_line_comment>"*/"    {BEGIN(INITIAL);}
<multi_line_comment>.       { }
<multi_line_comment>"\n"    {yylineno++; printf("\n----------LINE: %d----------\n", yylineno);}

"//"                        {BEGIN(single_line_comment);}
<single_line_comment>"\n"   {BEGIN(INITIAL); yylineno++; printf("\n----------LINE: %d----------\n", yylineno);}
<single_line_comment>.      { }

\n                          {yylineno++; printf("\n----------LINE: %d----------\n", yylineno);}

{whitespace}                { }

.                           {return UNEXPECTED_TOKEN;} // if no matches, return unexpected token

%%

int yywrap() { return 1; }