%{
    #include <stdio.h>
    #include "defs.h"
    void yyerror(const char*); 
    extern int yylex();   
%}

%union {
        int ival;
        float fval;
        char cval;
        char *sval;
} 

%token INC_OP DEC_OP PTR_OP EQ
%token CURLY_BRACE_OPEN CURLY_BRACE_CLOSE SQR_BRACE_OPEN SQR_BRACE_CLOSE
%token COLON SEMI_COLON ELLIPSIS QUESTION_MARK
%token SIZEOF
%token LEFT_OP RIGHT_OP EQ_OP NE_OP LTE_OP GTE_OP
%token AND_OP OR_OP 
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN RIGHT_ASSIGN LEFT_ASSIGN OR_ASSIGN AND_ASSIGN XOR_ASSIGN
%token LESS_THAN GREATER_THAN DOT BITWISEAND BITWISEOR BITWISEXOR STAR PLUS MINUS NOT EXCLAMATION DIVIDE PERCENTAGE COMMA HASH

%token EXTERN STATIC AUTO REGISTER
%token VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token CONST ENUM INLINE RESTRICT VOLATILE
%token IF ELSE SWITCH  CASE DEFAULT WHILE CONTINUE DO GOTO FOR RETURN BREAK
%token STRUCT TYPEDEF UNION

%token <sval> IDENTIFIER
%token <ival> INTEGER_CONSTANT
%token <fval> FLOATING_CONSTANT
%token <cval> CHARACTER_CONSTANT
%token <sval> STRING_LITERAL

%token INVALID_TOKEN

%nonassoc THEN
%nonassoc ELSE

%start translation_unit

%%

// 1. Expressions
primary_expression:
    IDENTIFIER
        { yyinfo("primary-expression: identifier"); }

    | CONSTANT
        { yyinfo("primary-expression: constant"); }

    | STRING_LITERAL
        { yyinfo("primary-expression: string-literal"); }

    | '(' expression ')'
        { yyinfo("primary-expression: ( expression )"); }
    ;

postfix_expression:
    primary_expression
    { yyinfo("postfix_expression -> primary_expression\n"); }

    | postfix_expression '[' expression ']'
    { yyinfo("postfix_expression -> postfix_expression [ expression ]\n"); }

    | postfix_expression '(' argument_expression_list_opt ')'
    { yyinfo("postfix_expression -> postfix_expression ( ]argument_expression_list_opt )\n"); }

    | postfix_expression '.' IDENTIFIER
    { yyinfo("postfix_expression -> postfix_expression . identifier\n"); }

    | postfix_expression PTR_OP IDENTIFIER
    { yyinfo("postfix_expression -> postfix_expression -> identifier\n"); }

    | postfix_expression INC_OP
    { yyinfo("postfix_expression -> postfix_expression ++\n"); }

    | postfix_expression DEC_OP
    { yyinfo("postfix_expression -> postfix_expression --\n"); }

    | '(' type_name ')' '{' initializer_list '}'
    { yyinfo("postfix_expression -> ( type_name ) { initializer_list }\n"); }

    | '(' type_name ')' '{' initializer_list ',' '}'     
    { yyinfo("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
    ;  


argument_expression_list_opt:
    argument_expression_list
    | /* empty */
    ;

argument_expression_list:
    assignment_expression
    { yyinfo("argument_expression_list -> assignment_expression\n"); }

    | argument_expression_list ',' assignment_expression
    { yyinfo("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
    ;

unary_expression:
    postfix_expression
    { yyinfo("unary_expression -> postfix_expression\n"); }

    | INC_OP unary_expression
    { yyinfo("unary_expression -> ++ unary_expression\n"); }

    | DEC_OP unary_expression
    { yyinfo("unary_expression -> -- unary_expression\n"); }

    | unary_operator cast_expression
    { yyinfo("unary_expression -> unary_operator cast_expression\n"); }

    | SIZEOF unary_expression
    { yyinfo("unary_expression -> sizeof unary_expression\n"); }

    | SIZEOF '(' type_name ')'
    { yyinfo("unary_expression -> sizeof ( type_name )\n"); }
    ;

unary_operator:
    BITWISEAND
    { yyinfo("unary_operator -> &\n"); }

    | STAR
    { yyinfo("unary_operator -> *\n"); }

    | PLUS
    { yyinfo("unary_operator -> +\n"); }

    | MINUS
    { yyinfo("unary_operator -> -\n"); }

    | NOT
    { yyinfo("unary_operator -> ~\n"); }

    | EXCLAMATION
    { yyinfo("unary_operator -> !\n"); }
    ;

cast_expression:
    unary_expression
    { yyinfo("cast_expression -> unary_expression\n"); }

    | '(' type_name ')' cast_expression
    { yyinfo("cast_expression -> ( type_name ) cast_expression\n"); }
    ;

multiplicative_expression:
    cast_expression
    { yyinfo("multiplicative_expression -> cast_expression\n"); }

    | multiplicative_expression STAR cast_expression
    { yyinfo("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }

    | multiplicative_expression DIVIDE cast_expression
    { yyinfo("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }

    | multiplicative_expression PERCENTAGE cast_expression
    { yyinfo("multiplicative_expression -> multiplicative_expression % cast_expression\n"); }
    ;

additive_expression:
    multiplicative_expression
    { yyinfo("additive_expression -> multiplicative_expression\n"); }

    | additive_expression PLUS multiplicative_expression
    { yyinfo("additive_expression -> additive_expression + multiplicative_expression\n"); }

    | additive_expression MINUS multiplicative_expression
    { yyinfo("additive_expression -> additive_expression - multiplicative_expression\n"); }
    ;

shift_expression:
    additive_expression
    { yyinfo("shift_expression -> additive_expression\n"); }

    | shift_expression LEFT_OP additive_expression
    { yyinfo("shift_expression -> shift_expression << additive_expression\n"); }

    | shift_expression RIGHT_OP additive_expression
    { yyinfo("shift_expression -> shift_expression >> additive_expression\n"); }
    ;

relational_expression:
    shift_expression
    { yyinfo("relational_expression -> shift_expression\n"); }

    | relational_expression LESS_THAN shift_expression
    { yyinfo("relational_expression -> relational_expression < shift_expression\n"); }

    | relational_expression GREATER_THAN shift_expression
    { yyinfo("relational_expression -> relational_expression > shift_expression\n"); }

    | relational_expression LTE_OP shift_expression
    { yyinfo("relational_expression -> relational_expression <= shift_expression\n"); }

    | relational_expression GTE_OP shift_expression
    { yyinfo("relational_expression -> relational_expression >= shift_expression\n"); }
    ;

equality_expression:
    relational_expression
    { yyinfo("equality_expression -> relational_expression\n"); }

    | equality_expression EQ_OP relational_expression
    { yyinfo("equality_expression -> equality_expression == relational_expression\n"); }

    | equality_expression NE_OP relational_expression
    { yyinfo("equality_expression -> equality_expression != relational_expression\n"); }
    ;

and_expression:
    equality_expression
    { yyinfo("and_expression -> equality_expression\n"); }

    | and_expression AND_OP equality_expression
    { yyinfo("and_expression -> and_expression & equality_expression\n"); }
    ;

exclusive_or_expression:
    and_expression
    { yyinfo("exclusive_or_expression -> and_expression\n"); }

    | exclusive_or_expression BITWISEXOR and_expression
    { yyinfo("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); }
    ;

inclusive_or_expression:
    exclusive_or_expression
    { yyinfo("inclusive_or_expression -> exclusive_or_expression\n"); }

    | inclusive_or_expression BITWISEOR exclusive_or_expression
    { yyinfo("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); }
    ;

logical_and_expression:
    inclusive_or_expression
    { yyinfo("logical_and_expression -> inclusive_or_expression\n"); }

    | logical_and_expression AND_OP inclusive_or_expression
    { yyinfo("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); }
    ;

logical_or_expression:
    logical_and_expression
    { yyinfo("logical_or_expression -> logical_and_expression\n"); }

    | logical_or_expression OR_OP logical_and_expression
    { yyinfo("logical_or_expression -> logical_or_expression || logical_and_expression\n"); }
    ;

conditional_expression:
    logical_or_expression
    { yyinfo("conditional_expression -> logical_or_expression\n"); }

    | logical_or_expression '?' expression ':' conditional_expression
    { yyinfo("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); }
    ;

assignment_expression:
    conditional_expression
    { yyinfo("assignment_expression -> conditional_expression\n"); }

    | unary_expression assignment_operator assignment_expression
    { yyinfo("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
    ;

assignment_operator:
    EQ
    { yyinfo("assignment_operator -> =\n"); }

    | MUL_ASSIGN
    { yyinfo("assignment_operator -> *=\n"); }

    | DIV_ASSIGN
    { yyinfo("assignment_operator -> /=\n"); }

    | MOD_ASSIGN
    { yyinfo("assignment_operator -> %=\n"); }

    | ADD_ASSIGN
    { yyinfo("assignment_operator -> +=\n"); }

    | SUB_ASSIGN
    { yyinfo("assignment_operator -> -=\n"); }

    | LEFT_ASSIGN
    { yyinfo("assignment_operator -> <<=\n"); }

    | RIGHT_ASSIGN
    { yyinfo("assignment_operator -> >>=\n"); }

    | AND_ASSIGN
    { yyinfo("assignment_operator -> &=\n"); }

    | XOR_ASSIGN
    { yyinfo("assignment_operator -> ^=\n"); }

    | OR_ASSIGN
    { yyinfo("assignment_operator -> |=\n"); }
    ;

expression:
    assignment_expression
    { yyinfo("expression -> assignment_expression\n"); }

    | expression ',' assignment_expression
    { yyinfo("expression -> expression , assignment_expression\n"); }
    ;

constant_expression:
    conditional_expression
    { yyinfo("constant_expression -> conditional_expression\n"); }
    ;

// 2. Declarations
declaration: 
    declaration_specifiers init_declarator_list_opt SEMI_COLON
    { yyinfo("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
    ;

declaration_specifiers:
    storage_class_specifier declaration_specifiers_opt
    { yyinfo("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }

    | type_specifier declaration_specifiers_opt
    { yyinfo("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }

    | type_qualifier declaration_specifiers_opt
    { yyinfo("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }

    | function_specifier declaration_specifiers_opt
    { yyinfo("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }

    | alignment_specifier declaration_specifiers_opt
    { yyinfo("declaration_specifiers -> alignment_specifier declaration_specifiers_opt\n"); }
    ;

init_declarator_list_opt:
    init_declarator_list
    { yyinfo("init_declarator_list_opt -> init_declarator_list\n"); }

    | /* empty */
    ;

init_declarator_list:
    init_declarator
    { yyinfo("init_declarator_list -> init_declarator\n"); }

    | init_declarator_list ',' init_declarator
    { yyinfo("init_declarator_list -> init_declarator_list , init_declarator\n"); }
    ;

init_declarator:
    declarator
    { yyinfo("init_declarator -> declarator\n"); }

    | declarator EQ initializer
    { yyinfo("init_declarator -> declarator = initializer\n"); }
    ;

storage_class_specifier:
    EXTERN
    { yyinfo("storage_class_specifier -> extern\n"); }

    | STATIC
    { yyinfo("storage_class_specifier -> static\n"); }

    | AUTO
    { yyinfo("storage_class_specifier -> auto\n"); }

    | REGISTER
    { yyinfo("storage_class_specifier -> register\n"); }
    ;

type_specifier:
    VOID
    { yyinfo("type_specifier -> void\n"); }

    | CHAR
    { yyinfo("type_specifier -> char\n"); }

    | SHORT
    { yyinfo("type_specifier -> short\n"); }

    | INT
    { yyinfo("type_specifier -> int\n"); }

    | LONG
    { yyinfo("type_specifier -> long\n"); }

    | FLOAT
    { yyinfo("type_specifier -> float\n"); }

    | DOUBLE
    { yyinfo("type_specifier -> double\n"); }

    | SIGNED
    { yyinfo("type_specifier -> signed\n"); }

    | UNSIGNED
    { yyinfo("type_specifier -> unsigned\n"); }

    | BOOL
    { yyinfo("type_specifier -> _Bool\n"); }

    | COMPLEX
    { yyinfo("type_specifier -> _Complex\n"); }

    | IMAGINARY
    { yyinfo("type_specifier -> _Imaginary\n"); }

    | enum_specifier
    { yyinfo("type_specifier -> enum_specifier\n"); }
    ; 

specifier_qualifier_list_opt: 
    specifier_qualifier_list
    | /* empty */
    ;

specifier_qualifier_list: 
    type_specifier specifier_qualifier_list_opt
    { yyinfo("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }

    | type_qualifier specifier_qualifier_list_opt
    { yyinfo("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
    ;

identifier_opt:
    IDENTIFIER
    | /* empty */
    ;

enum_specifier: 
    ENUM identifier_opt '{' enumerator_list '}'
    { yyinfo("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }

    | ENUM identifier_opt '{' enumerator_list ',' '}'
    { yyinfo("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); }

    | ENUM IDENTIFIER
    { yyinfo("enum_specifier -> enum identifier\n"); }

enumerator_list: 
    enumerator
    { yyinfo("enumerator_list -> enumerator\n"); }

    | enumerator_list ',' enumerator
    { yyinfo("enumerator_list -> enumerator_list , enumerator\n"); }
    ;

enumerator:
    IDENTIFIER
    { yyinfo("enumerator -> enumeration_constant\n"); }

    | IDENTIFIER EQ constant_expression
    { yyinfo("enumerator -> enumeration_constant = constant_expression\n"); }
    ;

type_qualifier: 
    CONST
    { yyinfo("type_qualifier -> const\n"); }

    | RESTRICT
    { yyinfo("type_qualifier -> restrict\n"); }

    | VOLATILE
    { yyinfo("type_qualifier -> volatile\n"); }
    ;

function_specifier:
    INLINE
    { yyinfo("function_specifier -> inline\n"); }
    ;

declarator:
    pointer_opt direct_declarator
    { yyinfo("declarator -> pointer_opt direct_declarator\n"); }
    ;

assignment_expression_opt:
    assignment_expression
    | /* empty */
    ;

direct_declarator:
    IDENTIFIER
    { yyinfo("direct_declarator -> identifier\n"); }

    | '(' declarator ')'
    { yyinfo("direct_declarator -> ( declarator )\n"); }

    | direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'
    { yyinfo("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }

    | direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']'
    { yyinfo("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }

    | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
    { yyinfo("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expression ]\n"); }

    | direct_declarator '[' type_qualifier_list_opt '*' ']'
    { yyinfo("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }

    | direct_declarator '(' parameter_type_list ')'
    { yyinfo("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }

    | direct_declarator '(' identifier_list_opt ')'
    { yyinfo("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
    ;

pointer_opt:
    pointer
    | /* empty */
    ;

pointer: 
    STAR type_qualifier_list_opt
    { yyinfo("pointer -> * type_qualifier_list_opt\n"); }

    | STAR type_qualifier_list_opt pointer
    { yyinfo("pointer -> * type_qualifier_list_opt pointer\n"); }
    ;

type_qualifier_list_opt:
    type_qualifier_list
    | /* empty */
    ;

type_qualifier_list:
    type_qualifier
    { yyinfo("type_qualifier_list -> type_qualifier\n"); }

    | type_qualifier_list type_qualifier
    { yyinfo("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
    ;

parameter_type_list:
    parameter_list
    { yyinfo("parameter_type_list -> parameter_list\n"); }

    | parameter_list ',' ELLIPSIS
    { yyinfo("parameter_type_list -> parameter_list , ...\n"); }
    ;

parameter_list:
    parameter_declaration
    { yyinfo("parameter_list -> parameter_declaration\n"); }

    | parameter_list ',' parameter_declaration
    { yyinfo("parameter_list -> parameter_list , parameter_declaration\n"); }
    ;

parameter_declaration:
    declaration_specifiers declarator
    { yyinfo("parameter_declaration -> declaration_specifiers declarator\n"); }

    | declaration_specifiers 
    { yyinfo("parameter_declaration -> declaration_specifiers\n"); }
    ;

identifier_list_opt:
    identifier_list
    | /* empty */
    ;

identifier_list:
    IDENTIFIER
    { yyinfo("identifier_list -> identifier\n"); }

    | identifier_list ',' IDENTIFIER
    { yyinfo("identifier_list -> identifier_list , identifier\n"); }
    ;

type_name:
    specifier_qualifier_list 
    { yyinfo("type_name -> specifier_qualifier_list\n"); }
    ;

initializer: 
    assignment_expression
    { yyinfo("initializer -> assignment_expression\n"); }

    | '{' initializer_list '}'
    { yyinfo("initializer -> { initializer_list }\n"); }

    | '{' initializer_list ',' '}'
    { yyinfo("initializer -> { initializer_list , }\n"); }
    ;

initializer_list:
    designation_opt initializer
    { yyinfo("initializer_list -> designation_opt initializer\n"); }

    | initializer_list ',' designation_opt initializer
    { yyinfo("initializer_list -> initializer_list , designation_opt initializer\n"); }
    ;

designation_opt:
    designation
    | /* empty */
    ;

designation:
    designator_list '='
    { yyinfo("designation -> designator_list =\n"); }
    ;

designator_list:
    designator
    { yyinfo("designator_list -> designator\n"); }

    | designator_list designator
    { yyinfo("designator_list -> designator_list designator\n"); }
    ;

designator:
    '[' constant_expression ']'
    { yyinfo("designator -> [ constant_expression ]\n"); }

    | '.' IDENTIFIER
    { yyinfo("designator -> . identifier\n"); }
    ;

// 3. Statements
statement: 
    labeled_statement
    { yyinfo("statement -> labeled_statement\n"); }

    | compound_statement
    { yyinfo("statement -> compound_statement\n"); }

    | expression_statement
    { yyinfo("statement -> expression_statement\n"); }

    | selection_statement
    { yyinfo("statement -> selection_statement\n"); }

    | iteration_statement
    { yyinfo("statement -> iteration_statement\n"); }

    | jump_statement
    { yyinfo("statement -> jump_statement\n"); }
    ;

labeled_statement:
    IDENTIFIER ':' statement
    { yyinfo("labeled_statement -> identifier : statement\n"); }

    | CASE constant_expression ':' statement
    { yyinfo("labeled_statement -> case constant_expression : statement\n"); }

    | DEFAULT ':' statement
    { yyinfo("labeled_statement -> default : statement\n"); }
    ;

compound_statement:
    '{' block_item_list_opt'}'
    { yyinfo("compound_statement -> { block_item_list_opt }\n"); }
    ;

block_item_list_opt:
    block_item_list
    | /* empty */
    ;

block_item_list:
    block_item
    { yyinfo("block_item_list -> block_item\n"); }

    | block_item_list block_item
    { yyinfo("block_item_list -> block_item_list block_item\n"); }
    ;

block_item:
    declaration
    { yyinfo("block_item -> declaration\n"); }

    | statement
    { yyinfo("block_item -> statement\n"); }
    ;

expression_statement:
    expression_opt SEMI_COLON
    { yyinfo("expression_opt -> expression ;\n"); }
    ;

expression_opt:
    expression
    | /* empty */
    ;

selection_statement:
    IF '(' expression ')' statement ELSE statement
    { yyinfo("selection_statement -> if ( expression ) statement else statement\n"); }

    | IF '(' expression ')' statement
    { yyinfo("selection_statement -> if ( expression ) statement\n"); }

    | SWITCH '(' expression ')' statement
    { yyinfo("selection_statement -> switch ( expression ) statement\n"); }
    ;

iteration_statement:
    WHILE '(' expression ')' statement
    { yyinfo("iteration_statement -> while ( expression ) statement\n"); }

    | DO statement WHILE '(' expression ')' SEMI_COLON
    { yyinfo("iteration_statement -> do statement while ( expression ) ;\n"); }

    | FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement
    { yyinfo("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }

    | FOR '(' declaration expression_opt ';' expression_opt ')' statement
    { yyinfo("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
    ;

jump_statement:
    GOTO IDENTIFIER SEMI_COLON
    { yyinfo("jump_statement -> goto identifier ;\n"); }

    | CONTINUE SEMI_COLON
    { yyinfo("jump_statement -> continue ;\n"); }

    | BREAK SEMI_COLON
    { yyinfo("jump_statement -> break ;\n"); }

    | RETURN expression_opt SEMI_COLON
    { yyinfo("jump_statement -> return expression_opt ;\n"); }
    ;

// 4. External definitions
translation_unit:
    external_declaration
    { yyinfo("translation_unit -> external_declaration\n"); }

    | translation_unit external_declaration
    { yyinfo("translation_unit -> translation_unit external_declaration\n"); }
    ;

external_declaration:
    function_definition
    { yyinfo("external_declaration -> function_definition\n"); }

    | declaration
    { yyinfo("external_declaration -> declaration\n"); }
    ;

function_definition:
    declaration_specifiers declarator declaration_list_opt compound_statement
    { yyinfo("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }

    | declarator declaration_list_opt compound_statement
    { yyinfo("function_definition -> declarator declaration_list_opt compound_statement\n"); }
    ;

declaration_list_opt:
    declaration_list
    | /* empty */
    ;

declaration_list:
    declaration
    { yyinfo("declaration_list -> declaration\n"); }

    | declaration_list declaration
    { yyinfo("declaration_list -> declaration_list declaration\n"); }
    ;

