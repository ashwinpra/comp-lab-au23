/*
    Compilers Lab Assignment 5
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    Flex Specification for tinyC
*/

%{
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

whitespace [ \t\n]

%%

// short, long, double, _Bool, _Complex, _Imaginary removed
// extern, static, auto, register removed (storage-class-specifiers)
"void"                      {return VOID;}
"char"                      {return CHAR;}
"int"                       {return INT;}
"float"                     {return FLOAT;}
"signed"                    {return SIGNED;}
"unsigned"                  {return UNSIGNED;}

// enum removed (enum-specifier)
// const, restrict, volatile, inline removed (type-qualifiers and function-specifier)

"struct"                    {return STRUCT;}
"typedef"                   {return TYPEDEF;}
"union"                     {return UNION;}

// case and default removed (labeled-statements)
// swtich removed (in selection-statement)
// goto, continue, break removed (jump-statements)
"if"                        {return IF;}
"else"                      {return ELSE;}
"while"                     {return WHILE;}
"do"                        {return DO;}
"for"                       {return FOR;}
"return"                    {return RETURN;}



{identifier}                {
                                // check
                                return IDENTIFIER;
                            }

{integer_constant}          {
                                yylval.ival = atoi(yytext);
                                return INTEGER_CONST;
                            }

{float_constant}            {
                                yylval.fval = atof(yytext); // check
                                return FLOAT_CONST;
                            }

{char_constant}             {
                                yylval.cval = yytext;
                                return CHAR_CONST;
                            }

{string_literal}            {
                                yylval.sval = yytext;
                                return STRING_LITERAL;
                            } 

"("                         {return PARENTHESIS_OPEN;}
")"                         {return PARENTHESIS_CLOSE;}
"{"                         {return CURLY_BRACE_OPEN;}
"}"                         {return CURLY_BRACE_CLOSE;}
"["                         {return SQR_BRACE_OPEN;}
"]"                         {return SQR_BRACE_CLOSE;}

"++"                        {return INC_OP;}
"--"                        {return DEC_OP;}
"<<"                        {return LEFT_OP;}
">>"                        {return RIGHT_OP;}
"=="                        {return EQ_OP;}
"!="                        {return NE_OP;}
"<="                        {return LTE_OP;}
">="                        {return GTE_OP;}
"&&"                        {return AND_OP;}
"||"                        {return OR_OP;}
"->"                        {return PTR_OP;}
"<"                         {return LT_OP;}
">"                         {return GT_OP;}
"="                         {return EQ;}
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

":"                         {return COLON;}
";"                         {return SEMI_COLON;}
"..."                       {return ELLIPSIS;}
"?"                         {return QUESTION_MARK;}
","                         {return COMMA;}
"#"                         {return HASH;}

"/*"                        {BEGIN(multi_line_comment);}
<multi_line_comment>"*/"    {BEGIN(INITIAL);}
<multi_line_comment>.       { }
<multi_line_comment>"\n"    {yylineno++;}

"//"                        {BEGIN(single_line_comment);}
<single_line_comment>"\n"   {BEGIN(INITIAL); yylineno++;}
<single_line_comment>.      { }

\n                          {yylineno++;}

{whitespace}                { }

.                           {return UNEXPECTED_TOKEN;} // if no matches, return unexpected token

%%

int yywrap() { return 1; }