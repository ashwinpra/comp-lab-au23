/*
    Compilers Lab Assignment 3 
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    Flex Specification for tinyC
*/

%{
#include "defs.h"
%}

%x multi_line_comment
%x single_line_comment

keyword "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"

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
{keyword}                   {return KEYWORD;}

{identifier}                {return IDENTIFIER;}

{integer_constant}          {return INTEGER_CONST;}

{float_constant}            {return FLOAT_CONST;}

{char_constant}             {return CHAR_CONST;}

{string_literal}            {return STRING_LITERAL;}

{punctuator}                {return PUNCTUATOR;}

"/*"                        {BEGIN(multi_line_comment); return MULTI_LINE_COMMENT;}
<multi_line_comment>"*/"    {BEGIN(INITIAL);}
<multi_line_comment>.       { }
<multi_line_comment>"\n"    {yylineno++;}

"//"                        {BEGIN(single_line_comment); return SINGLE_LINE_COMMENT;}
<single_line_comment>"\n"   {BEGIN(INITIAL); yylineno++;}
<single_line_comment>.      { }

\n                          {yylineno++;}

{whitespace}                { }

.                           {return UNEXPECTED_TOKEN;} // if no matches, return unexpected token

%%

int yywrap() { return 1; }