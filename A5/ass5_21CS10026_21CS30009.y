/*
    Compilers Lab Assignment 4
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    Parser specification for tinyC
*/

%{
    #include <stdio.h>
    #include "ass5_21CS10026_21CS30009_translator.h"
    void yyerror(const char*); 
    extern int yylex();   
    extern int yylineno;
    extern char* yytext;
%}

%union {
    int ival;
    float fval;
    char cval;
    char *sval;
    char unary_op;
    int instr_num;
    int num_params;
    Statement *stmt; 
    Array *arr; 
    Expression *expr;
    SymType *sym_type;
    Sym *sym;
} 

// parenthesis
%token PARENTHESIS_OPEN PARENTHESIS_CLOSE CURLY_BRACE_OPEN CURLY_BRACE_CLOSE SQR_BRACE_OPEN SQR_BRACE_CLOSE 

// operators
%token INC_OP DEC_OP LEFT_OP RIGHT_OP EQ_OP NE_OP LTE_OP GTE_OP AND_OP OR_OP PTR_OP LT_OP GT_OP EQ DOT BITWISEAND BITWISEOR BITWISEXOR STAR PLUS MINUS NOT EXCLAMATION DIVIDE PERCENTAGE

// assignment operators
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN OR_ASSIGN AND_ASSIGN XOR_ASSIGN

// other tokens
%token COLON SEMI_COLON ELLIPSIS QUESTION_MARK COMMA HASH

// keywords
%token VOID CHAR INT FLOAT SIGNED UNSIGNED
%token CONST RESTRICT VOLATILE ENUM INLINE
%token STRUCT TYPEDEF UNION
%token IF ELSE CASE DEFAULT WHILE CONTINUE DO GOTO FOR RETURN BREAK

// default case - unexpected token
%token UNEXPECTED_TOKEN

%token <sym> IDENTIFIER
%token <ival> INTEGER_CONST
%token <fval> FLOAT_CONST
%token <cval> CHAR_CONST
%token <sval> STRING_LITERAL

%start translation_unit

%type <unary_op> unary_operator // unary operators
%type <num_params> argument_expression_list_opt argument_expression_list // number of parameters, in case of function call

// check
%type <expr> primary_expression constant multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator expression constant_expression

// check
%type <stmt> statement compound_statement expression_statement selection_statement iteration_statement jump_statement block_item block_item_list block_item_list_opt

%type <sym_type> pointer 

%type <sym> initializer declarator direct_declarator init_declarator

%type <arr> postfix_expression cast_expression unary_expression

// non-terminals used for backpatching
%type <instr_num> M; 
%type <stmt> N; 

%%

M: 
    { $$ = nextinstr(); }
    ;

N: 
    { 
        $$ = new Statement();
        $$->nextlist = makelist(nextinstr());
        emit("goto", " ");
    }
    ;


// ----------1. Expressions----------

primary_expression:
    IDENTIFIER
        { 
            $$ = new Expression(); // making a new expression and storing pointer to symbol table entry 
            $$->entry = $1; 
            $$->type = "NBOOL";

            // printf("primary_expression -> identifier\n"); 
        }

    | constant
        { 
            $$ = $1; // depends on which type of constant

            // printf("primary_expression -> constant\n"); 
        
        }

    | STRING_LITERAL
        { 
            $$ = new Expression();
            $$->entry = gentemp(new SymType(TYPE_POINTER), $1);
            $$->entry->type->arr_type = new SymType(TYPE_CHAR);
            
            // printf("primary_expression -> string_literal\n"); 
        }

    | PARENTHESIS_OPEN expression PARENTHESIS_CLOSE
        { 
            $$ = $2; // depends on expression

            // printf("primary_expression -> ( expression )\n"); 
        }
    ;

constant:
    INTEGER_CONST 
    { 
        $$ = new Expression(); 
        string n = convInt2String($1);
        $$->entry = gentemp(new SymType(TYPE_INT), n);
        emit("=", $$->entry->name, n);

        // printf("constant -> integer_constant\n"); 
    }

    | FLOAT_CONST
    {   
        $$ = new Expression();
        string n = convFloat2String($1);
        $$->entry = gentemp(new SymType(TYPE_FLOAT), n);
        emit("=", $$->entry->name, n);

        // printf("constant -> float_constant\n"); 
    }

    | CHAR_CONST
    {   
        $$ = new Expression();
        $$->entry = gentemp(new SymType(TYPE_CHAR), $1);
        emit("=", $$->entry->name, $1);

        // printf("constant -> char_constant\n"); 
    }
    ;

// struct-related rules removed
postfix_expression:
    primary_expression
    { 
        // create new array and append location of primary expression
        $$ = new Array();
        $$->addr = $1->entry;
        $$->type = $1->entry->type;
        $$->entry = $$->addr;

        // printf("postfix_expression -> primary_expression\n"); 
    }

    | postfix_expression SQR_BRACE_OPEN expression SQR_BRACE_CLOSE
    { 
        $$ = new Array();
        $$->type = $1->type->arr_type;
        $$->addr = $1->addr;
        $$->entry = gentemp(new SymType(TYPE_INT));
        $$->arr_type = TYPE_ARRAY;

        // checking if array is 1D or multi-dimensional
        if($1->arr_type = TYPE_ARRAY) {
            // multi-dimensional array
            Sym* temp = gentemp(new SymType(TYPE_INT));
            int size = computeSize($$->type);
            string s = convInt2String(size);
            emit("*", temp->name, $$->entry->name, s);
            emit("+", $$->entry->name, $1->entry->name, temp->name);

        }
        else {
            // 1D array, just calculate size
            int size = computeSize($$->type);
            string s = convInt2String(size);
            emit("*", $$->entry->name, $1->entry->name, s);
        }

        // printf("postfix_expression -> postfix_expression [ expression ]\n"); 
    }

    | postfix_expression PARENTHESIS_OPEN argument_expression_list_opt PARENTHESIS_CLOSE
    {
        // function call
        $$ = new Array();
        $$->addr = gentemp($1->type);
        string s = convInt2String($3);
        emit("call", $$->addr->name, $1->addr->name, s);

        // printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); 
    }

    | postfix_expression INC_OP 
    {
        $$ = new Array();
        $$->addr = gentemp($1->addr->type);
        emit("=", $$->addr->name, $1->addr->name);
        emit("+", $1->addr->name, $1->addr->name, "1");

        // printf("postfix_expression -> postfix_expression ++\n"); 
    }

    | postfix_expression DEC_OP
    { 
        $$ = new Array();
        $$->addr = gentemp($1->addr->type);
        emit("=", $$->addr->name, $1->addr->name);
        emit("-", $1->addr->name, $1->addr->name, "1");

        // printf("postfix_expression -> postfix_expression --\n"); 
    }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
    { 
        // printf("postfix_expression -> ( type_name ) { initializer_list }\n"); 
    }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE     
    { 
        // printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); 
    }
    ;  

argument_expression_list:
    assignment_expression
    { 
        $$ = 1; // 1 argument
        emit("param", $1->entry->name);

        // printf("argument_expression_list -> assignment_expression\n"); 
    }

    | argument_expression_list COMMA assignment_expression
    {   
        $$ = $1 + 1; // one more argument added
        emit("param", $3->entry->name);

        // printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); 
    }
    ;

argument_expression_list_opt:
    argument_expression_list
    {
        $$ = $1; // depends on argument expression list 
        // printf("argument_expression_list_opt -> argument_expression_list\n"); 
    }
    | /* empty */
    { 
        $$ = 0; // no arguments
        // printf("argument_expression_list_opt -> epsilon\n");
    }
    ;

/* expressions involving sizeof removed */
unary_expression:
    postfix_expression
    { 
        $$ = $1; // depends on postfix expression
        // printf("unary_expression -> postfix_expression\n"); 
    }

    | INC_OP unary_expression
    { 
        emit("+", $2->addr->name, $2->addr->name, "1");
        $$ = $2; // depends on unary expression

        // printf("unary_expression -> ++ unary_expression\n"); 
    }

    | DEC_OP unary_expression
    { 
        emit("-", $2->addr->name, $2->addr->name, "1");
        $$ = $2; // depends on unary expression

        // printf("unary_expression -> -- unary_expression\n"); 
    }

    | unary_operator cast_expression
    { 
        $$ = new Array();

        // operation depends on unary operator
        switch($1) {
            case '+':
                // unary plus
                $$=$2;
                break;
            
            case '-':
                // unary minus - negation of cast expression
                $$->addr = gentemp($2->type->type);
                emit("U-", $$->addr->name, $2->addr->name); // check
                break;

            case '~':
                // bitwise not
                $$->addr = gentemp($2->type->type);
                emit("~", $$->addr->name, $2->addr->name);
                break;

            case '!':
                // logical not
                $$->addr = gentemp($2->type->type);
                emit("!", $$->addr->name, $2->addr->name);
                break;

            case '&':
                // address of -> generate new pointer type
                $$->addr = gentemp(new SymType(TYPE_POINTER));
                $$->addr->type->arr_type = $2->addr->type;
                emit("=&", $$->addr->name, $2->addr->name);
                break;

            case '*':
                // dereference 
                $$->arr_type = TYPE_POINTER;
                $$->addr = gentemp($2->addr->type->arr_type);
                $$->addr = $2->addr;
                emit("*", $$->addr->name, $2->addr->name);
                break;
        }

        // printf("unary_expression -> unary_operator cast_expression\n"); 
    }
    ;

unary_operator:
    BITWISEAND
    { 
        $$ = '&';
        // printf("unary_operator -> &\n"); 
    }

    | STAR
    { 
        $$ = '*';
        // printf("unary_operator -> *\n"); 
    }

    | PLUS
    { 
        $$ = '+';
        // printf("unary_operator -> +\n"); 
    }

    | MINUS
    { 
        $$ = '-';
        // printf("unary_operator -> -\n"); 
    }

    | NOT
    { 
        $$ = '~';
        // printf("unary_operator -> ~\n"); 
    }

    | EXCLAMATION
    { 
        $$ = '!';
        // printf("unary_operator -> !\n"); 
    }
    ;

cast_expression:
    unary_expression
    { 
        $$ = $1; // depends on unary expression
        // printf("cast_expression -> unary_expression\n"); 
    }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_expression
    { 
        $$ = new Array();
        $$->addr = convertType($4->addr, var_type); // convert type of cast expression to type name -> check
        // printf("cast_expression -> ( type_name ) cast_expression\n"); 
    }
    ;

multiplicative_expression:
    cast_expression
    { 
        $$ = new Expression();

        // check - add comments
        if ($1->arr_type == TYPE_ARRAY) {
            $$->entry = gentemp($1->entry->type);
            emit("=[]",$$->entry->name, $1->addr->name, $1->entry->name);
        }

        else if ($1->arr_type == TYPE_POINTER) {
            $$->entry = $1->entry;
        }
        else {
            $$->entry = $1->addr;
        }

        // printf("multiplicative_expression -> cast_expression\n"); 
    }

    | multiplicative_expression STAR cast_expression
    {   
        if(!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->entry = gentemp(new SymType($1->entry->type->type)); // check
            emit("*", $$->entry->name, $1->entry->name, $3->addr->name);
        }

        // printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); 
    }

    | multiplicative_expression DIVIDE cast_expression
    { 
        if(!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->entry = gentemp(new SymType($1->entry->type->type)); // check
            emit("/", $$->entry->name, $1->entry->name, $3->addr->name);
        }

        // printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); 
    }

    | multiplicative_expression PERCENTAGE cast_expression
    { 
        if(!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->entry = gentemp(new SymType($1->entry->type->type)); // check
            emit("%", $$->entry->name, $1->entry->name, $3->addr->name);
        }

        // printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); 
    }
    ;

additive_expression:
    multiplicative_expression
    { 
        $$ = $1; // depends on multiplicative expression
        // printf("additive_expression -> multiplicative_expression\n"); 
    }

    | additive_expression PLUS multiplicative_expression
    {   
        if(!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->entry = gentemp(new SymType($1->entry->type->type)); // check
            emit("+", $$->entry->name, $1->entry->name, $3->addr->name);
        }

        // printf("additive_expression -> additive_expression + multiplicative_expression\n"); 
    }

    | additive_expression MINUS multiplicative_expression
    { 
        if(!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->entry = gentemp(new SymType($1->entry->type->type)); // check
            emit("-", $$->entry->name, $1->entry->name, $3->addr->name);
        }

        // printf("additive_expression -> additive_expression - multiplicative_expression\n"); 
    }
    ;

shift_expression:
    additive_expression
    {   
        $$ = $1; // depends on additive expression
        // printf("shift_expression -> additive_expression\n"); 
    }

    | shift_expression LEFT_OP additive_expression
    { 
        if($1->entry->type->type != TYPE_INT) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->entry = gentemp(new SymType(TYPE_INT)); // check
            emit("<<", $$->entry->name, $1->entry->name, $3->addr->name);
        }

        // printf("shift_expression -> shift_expression << additive_expression\n"); 
    }

    | shift_expression RIGHT_OP additive_expression
    { 
        if($1->entry->type->type != TYPE_INT) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->entry = gentemp(new SymType(TYPE_INT)); // check
            emit(">>", $$->entry->name, $1->entry->name, $3->addr->name);
        }

        // printf("shift_expression -> shift_expression >> additive_expression\n"); 
    }
    ;

relational_expression:
    shift_expression
    { 
        $$ = $1; // depends on shift expression
        // printf("relational_expression -> shift_expression\n"); 
    }

    | relational_expression LT_OP shift_expression
    { 
        if (!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        // check - add comments
        else {
            $$ = new Expression();
            $$->type = "BOOL";
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);
            emit("<", "", $1->entry->name, $3->entry->name);
            emit("goto", "");
        }

        // printf("relational_expression -> relational_expression < shift_expression\n"); 
    }

    | relational_expression GT_OP shift_expression
    { 
        if (!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = "BOOL";
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);
            emit(">", "", $1->entry->name, $3->entry->name);
            emit("goto", "");
        }

        // printf("relational_expression -> relational_expression > shift_expression\n"); 
    }

    | relational_expression LTE_OP shift_expression
    { 
        if (!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = "BOOL";
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);
            emit("<=", "", $1->entry->name, $3->entry->name);
            emit("goto", "");
        }
        // printf("relational_expression -> relational_expression <= shift_expression\n"); 
    }

    | relational_expression GTE_OP shift_expression
    { 
        if (!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = "BOOL";
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);
            emit(">=", "", $1->entry->name, $3->entry->name);
            emit("goto", "");
        }
        // printf("relational_expression -> relational_expression >= shift_expression\n"); 
    }
    ;

equality_expression:
    relational_expression
    { 
        $$ = $1; // depends on relational expression
        // printf("equality_expression -> relational_expression\n"); 
    }

    | equality_expression EQ_OP relational_expression
    { 
        if (!compareSymbolType($1->entry, $3->entry)) {
            yyerror("Type mismatch!");
        }
        else {
            // resume from here!
        }
        // printf("equality_expression -> equality_expression == relational_expression\n"); 
    }

    | equality_expression NE_OP relational_expression
    { 

        // printf("equality_expression -> equality_expression != relational_expression\n"); 
    }
    ;

and_expression:
    equality_expression
    { 

        // printf("and_expression -> equality_expression\n"); 
    }

    | and_expression BITWISEAND equality_expression
    { 

        // printf("and_expression -> and_expression & equality_expression\n"); 
    }
    ;

exclusive_or_expression:
    and_expression
    { 

        // printf("exclusive_or_expression -> and_expression\n"); 
    }

    | exclusive_or_expression BITWISEXOR and_expression
    { 

        // printf("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); 
    }
    ;

inclusive_or_expression:
    exclusive_or_expression
    { 

        // printf("inclusive_or_expression -> exclusive_or_expression\n"); 
    }

    | inclusive_or_expression BITWISEOR exclusive_or_expression
    { 

        // printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); 
    }
    ;

logical_and_expression:
    inclusive_or_expression
    { 

        // printf("logical_and_expression -> inclusive_or_expression\n"); 
    }

    | logical_and_expression AND_OP inclusive_or_expression
    { 

        // printf("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); 
    }
    ;

logical_or_expression:
    logical_and_expression
    { 

        // printf("logical_or_expression -> logical_and_expression\n"); 
    }

    | logical_or_expression OR_OP logical_and_expression
    { 

        // printf("logical_or_expression -> logical_or_expression || logical_and_expression\n"); 
    }
    ;

conditional_expression:
    logical_or_expression
    { 

        // printf("conditional_expression -> logical_or_expression\n"); 
    }

    | logical_or_expression QUESTION_MARK expression COLON conditional_expression
    { 

        // printf("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); 
    }
    ;

assignment_expression:
    conditional_expression
    { 

        // printf("assignment_expression -> conditional_expression\n"); 
    }

    | unary_expression assignment_operator assignment_expression
    { 

        // printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); 
    }
    ;

/* *=, /=, %=, +=, -=, <<=, >>=, &=, ^=, |= removed */
assignment_operator:
    EQ
    { 
        // printf("assignment_operator -> =\n"); 
    }
    ;

/* expression with comma removed */
expression:
    assignment_expression
    {
        $$ = $1; // depends on assignment expression 
        // printf("expression -> assignment_expression\n"); 
    }
    ;

constant_expression:
    conditional_expression
    { 
        // printf("constant_expression -> conditional_expression\n"); 
    }
    ;



// ----------2. Declarations----------
declaration: 
    declaration_specifiers init_declarator_list_opt SEMI_COLON
    { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
    ;

// storage_class_specifier, enum_specifier, type_qualifier, function_specifier removed
declaration_specifiers:
    | type_specifier declaration_specifiers_opt
    { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }

declaration_specifiers_opt:
    declaration_specifiers
    { printf("declaration_specifiers_opt -> declaration_specifiers\n");}
    | /* empty */
    { printf("declaration_specifiers_opt -> epsilon\n"); }
    ;

init_declarator_list:
    init_declarator
    { printf("init_declarator_list -> init_declarator\n"); }

    | init_declarator_list COMMA init_declarator
    { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
    ;

init_declarator_list_opt:
    init_declarator_list
    { printf("init_declarator_list_opt -> init_declarator_list\n");}
    | /* empty */
    { printf("init_declarator_list_opt -> epsilon\n"); }
    ;

init_declarator:
    declarator
    { printf("init_declarator -> declarator\n"); }

    | declarator EQ initializer
    { printf("init_declarator -> declarator = initializer\n"); }
    ;

/* storage_class_specifier removed */

/* only void, char, int, float kept (not sure about signed, unsigned) */
type_specifier:
    VOID
    { printf("type_specifier -> void\n"); }

    | CHAR
    { printf("type_specifier -> char\n"); }

    | INT
    { printf("type_specifier -> int\n"); }

    | FLOAT
    { printf("type_specifier -> float\n"); }

    | SIGNED
    { printf("type_specifier -> signed\n"); }

    | UNSIGNED
    { printf("type_specifier -> unsigned\n"); }
    ; 

/* rules involving type_qualifier removed */
specifier_qualifier_list: 
    type_specifier specifier_qualifier_list_opt
    { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
    ;

specifier_qualifier_list_opt: 
    specifier_qualifier_list
    { printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); }
    | /* empty */
    { printf("specifier_qualifier_list_opt -> epsilon\n");}
    ;

identifier_opt:
    IDENTIFIER
    { printf("identifier_opt -> identifier\n"); }
    | /* empty */
    { printf("identifier_opt -> epsilon\n");}
    ;

/* enum_specifier removed */

enumerator_list: 
    enumerator
    { printf("enumerator_list -> enumerator\n"); }

    | enumerator_list COMMA enumerator
    { printf("enumerator_list -> enumerator_list , enumerator\n"); }
    ;

enumerator:
    IDENTIFIER
    { printf("enumerator -> enumeration_constant\n"); }

    | IDENTIFIER EQ constant_expression
    { printf("enumerator -> enumeration_constant = constant_expression\n"); }
    ;

/* type qualifier removed */

/* function specifier removed */

declarator:
    pointer_opt direct_declarator
    { printf("declarator -> pointer_opt direct_declarator\n"); }
    ;

assignment_expression_opt:
    assignment_expression
    { printf("assignment_expression_opt -> assignment_expression\n"); }
    | /* empty */
    { printf("assignment_expression_opt -> epsilon\n");}
    ;

/* rules involving type_qualifier removed */
/* rules involving static removed */
/* type_qualifier_list_opt replaced with epsilon */
direct_declarator:
    IDENTIFIER
    { printf("direct_declarator -> identifier\n"); }

    | PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE
    { printf("direct_declarator -> ( declarator )\n"); }

    | direct_declarator SQR_BRACE_OPEN assignment_expression_opt SQR_BRACE_CLOSE
    { printf("direct_declarator -> direct_declarator [ assignment_expression_opt ]\n"); }

    | direct_declarator SQR_BRACE_OPEN STAR SQR_BRACE_CLOSE
    { printf("direct_declarator -> direct_declarator [ * ]\n"); }

    | direct_declarator PARENTHESIS_OPEN parameter_type_list PARENTHESIS_CLOSE
    { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }

    | direct_declarator PARENTHESIS_OPEN identifier_list_opt PARENTHESIS_CLOSE
    { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
    ;

/* type_qualiifier_list_opt replaced with epsilon */
pointer: 
    STAR 
    { printf("pointer -> *\n"); }

    | STAR pointer
    { printf("pointer -> * pointer\n"); }
    ;

pointer_opt:
    pointer
    { printf("pointer_opt -> pointer\n");}
    | /* empty */
    { printf("pointer_opt -> epsilon\n"); }
    ;

/* type_qualifier_list and type_qualifier_list_opt removed */

parameter_type_list:
    parameter_list
    { printf("parameter_type_list -> parameter_list\n"); }

    | parameter_list COMMA ELLIPSIS
    { printf("parameter_type_list -> parameter_list , ...\n"); }
    ;

parameter_list:
    parameter_declaration
    { printf("parameter_list -> parameter_declaration\n"); }

    | parameter_list COMMA parameter_declaration
    { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
    ;

parameter_declaration:
    declaration_specifiers declarator
    { printf("parameter_declaration -> declaration_specifiers declarator\n"); }

    | declaration_specifiers 
    { printf("parameter_declaration -> declaration_specifiers\n"); }
    ;


identifier_list:
    IDENTIFIER
    { printf("identifier_list -> identifier\n"); }

    | identifier_list COMMA IDENTIFIER
    { printf("identifier_list -> identifier_list , identifier\n"); }
    ;

identifier_list_opt:
    identifier_list
    { printf("identifier_list_opt -> identifier_list\n"); }
    | /* empty */
    { printf("identifier_list_opt -> epsilon\n");}
    ;

type_name:
    specifier_qualifier_list 
    { printf("type_name -> specifier_qualifier_list\n"); }
    ;

initializer: 
    assignment_expression
    { printf("initializer -> assignment_expression\n"); }

    | CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
    { printf("initializer -> { initializer_list }\n"); }

    | CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE
    { printf("initializer -> { initializer_list , }\n"); }
    ;

initializer_list:
    designation_opt initializer
    { printf("initializer_list -> designation_opt initializer\n"); }

    | initializer_list COMMA designation_opt initializer
    { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
    ;

designation:
    designator_list EQ
    { printf("designation -> designator_list =\n"); }
    ;

designation_opt:
    designation
    { printf("designation_opt -> designation\n");}
    | /* empty */
    { printf("designation_opt -> epsilon\n");}
    ;

designator_list:
    designator
    { printf("designator_list -> designator\n"); }

    | designator_list designator
    { printf("designator_list -> designator_list designator\n"); }
    ;

designator:
    SQR_BRACE_OPEN constant_expression SQR_BRACE_CLOSE
    { printf("designator -> [ constant_expression ]\n"); }

    | DOT IDENTIFIER
    { printf("designator -> . identifier\n"); }
    ;

// ----------3. Statements----------

/* labeled_statement removed */
statement: 
    compound_statement
    { printf("statement -> compound_statement\n"); }

    | expression_statement
    { printf("statement -> expression_statement\n"); }

    | selection_statement
    { printf("statement -> selection_statement\n"); }

    | iteration_statement
    { printf("statement -> iteration_statement\n"); }

    | jump_statement
    { printf("statement -> jump_statement\n"); }
    ;

/* labeled_statement removed */

compound_statement:
    CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE
    { printf("compound_statement -> { block_item_list_opt }\n"); }
    ;

block_item_list:
    block_item
    { printf("block_item_list -> block_item\n"); }

    | block_item_list block_item
    { printf("block_item_list -> block_item_list block_item\n"); }
    ;

block_item_list_opt:
    block_item_list
    { printf("block_item_list_opt -> block_item_list\n"); }
    | /* empty */
    { printf("block_item_list_opt -> epsilon\n"); }
    ;

block_item:
    declaration
    { printf("block_item -> declaration\n"); }

    | statement
    { printf("block_item -> statement\n"); }
    ;

expression_statement:
    expression_opt SEMI_COLON
    { printf("expression_opt -> expression ;\n"); }
    ;

expression_opt:
    expression
    { printf("expression_opt -> expression\n"); }
    | /* empty */
    { printf("expression_opt -> epsilon\n"); }
    ;

/* SWITCH removed */
selection_statement:
    IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement ELSE statement
    { printf("selection_statement -> if ( expression ) statement else statement\n"); }

    | IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement
    { printf("selection_statement -> if ( expression ) statement\n"); }
    ;

iteration_statement:
    WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement
    { printf("iteration_statement -> while ( expression ) statement\n"); }

    | DO statement WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMI_COLON
    { printf("iteration_statement -> do statement while ( expression ) ;\n"); }

    | FOR PARENTHESIS_OPEN expression_opt SEMI_COLON expression_opt SEMI_COLON expression_opt PARENTHESIS_CLOSE statement
    { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }

    | FOR PARENTHESIS_OPEN declaration expression_opt SEMI_COLON expression_opt PARENTHESIS_CLOSE statement
    { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
    ;


/* only return is kept */
jump_statement:
    RETURN expression_opt SEMI_COLON
    { printf("jump_statement -> return expression_opt ;\n"); }
    ;

// ----------4. External definitions----------

/* translation_unit removed  (as it used external_declaration) */

/* external_declaration removed */

function_definition:
    declaration_specifiers declarator declaration_list_opt compound_statement
    { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }

    | declarator declaration_list_opt compound_statement
    { printf("function_definition -> declarator declaration_list_opt compound_statement\n"); }
    ;

declaration_list:
    declaration
    { printf("declaration_list -> declaration\n"); }

    | declaration_list declaration
    { printf("declaration_list -> declaration_list declaration\n"); }
    ;

declaration_list_opt:
    declaration_list
    { printf("declaration_list_opt -> declaration_list\n"); }
    | /* empty */
    { printf("declaration_list_opt -> epsilon\n"); }
    ;


%%

void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}   