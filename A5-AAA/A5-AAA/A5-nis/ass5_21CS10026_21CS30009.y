%{
    #include "ass5_21CS10026_21CS30009_translator.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    void yyerror(const char*);
%}

%union {
    int ival;
    char *fval;
    char *cval;
    char *sval;
    char *unary_op;
    int instr_num;
    int num_params;
    Expression *expr;
    Statement *stmt;
    Array *array;
    SymType *sym_type;
    Symbol *symbol;
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
%token EXTERN STATIC AUTO REGISTER
%token VOID_TYPE CHAR_TYPE SHORT INT_TYPE LONG FLOAT_TYPE DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token CONST RESTRICT VOLATILE ENUM INLINE
%token SIZEOF STRUCT TYPEDEF UNION
%token IF ELSE CASE DEFAULT WHILE CONTINUE DO GOTO FOR RETURN BREAK SWITCH

// default case - unexpected token
%token UNEXPECTED_TOKEN


%token<symbol> IDENTIFIER
%token<ival> INTEGER_CONST
%token<fval> FLOAT_CONST
%token<cval> CHAR_CONST
%token<sval> STRING_LITERAL

%start translation_unit

%right THEN ELSE

// unary-operator
%type<unary_op> unary_operator

// number of parameters, in case of function call
%type<num_params> argument_expression_list argument_expression_list_opt

// expressions
%type<expr> constant expression expression_opt expression_statement primary_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression

// arrays
%type<array> postfix_expression unary_expression cast_expression

// statements
%type <stmt>  statement compound_statement selection_statement iteration_statement labeled_statement  jump_statement block_item block_item_list block_item_list_opt

// symbol type
%type<sym_type> pointer

// symbol
%type<symbol> initializer direct_declarator init_declarator declarator

// non-terminals used for backpatching
%type <instr_num> M; 
%type <stmt> N; 

%%

// production rule of auxillary non-terminals 
M:  
    {
        $$ = nextinstr();
    }   
;

N: 
    {
        $$ = new Statement();
        $$->nextList = makelist(nextinstr());
        emit("goto", "");
    }
;

// to change symbol table, in case of functions
CT:
    {
        if(currentSymbol->nestedTable == NULL) {
            changeTable(new SymTable(""));
        }
        else {
            changeTable(currentSymbol->nestedTable);
            emit("label", currentTable->name);
        }
    }
;

// to change symbol table, in case of blocks
CB: 
    {
        string name = currentTable->name + "_" + toString(tableCount++); // name for new ST
        Symbol *s = currentTable->lookup(name); 
        s->nestedTable = new SymTable(name, currentTable);
        s->type = new SymType(BLOCK);
        currentSymbol = s;
    } 
;



// ----------1. Declarations----------


primary_expression: 
    IDENTIFIER 
        { 
            $$ = new Expression(); // making a new expression and storing the symbol
            $$->symbol = $1;
            $$->type = Expression::NONBOOLEAN; 
        }
    | constant 
        {
            $$ = $1; // depends on which type of constant
        }

    | STRING_LITERAL 
        { 
            $$ = new Expression();
            $$->symbol = gentemp(POINTER, $1);
            $$->symbol->type->arr_type = new SymType(CHAR);
        }

    | PARENTHESIS_OPEN expression PARENTHESIS_CLOSE
        { 
            $$ = $2; // simply equate to expression
        }
    ;

// depending on type of constant, generate temporary and store the value in it
constant: 
    INTEGER_CONST 
        { 
            $$ = new Expression();
            $$->symbol = gentemp(INT, to_string($1));
            emit("=", $$->symbol->name, $1);
        }

    | FLOAT_CONST 
        { 
            $$ = new Expression();
            $$->symbol = gentemp(FLOAT, $1);
            emit("=", $$->symbol->name, $1);
        }

    | CHAR_CONST 
        { 
            $$ = new Expression();
            $$->symbol = gentemp(CHAR, $1);
            emit("=", $$->symbol->name, $1);
        }
    ;

postfix_expression:
    primary_expression
        { 
            // create a new array and append location of primary_expression
            $$ = new Array();
            $$->symbol = $1->symbol;
            $$->loc = $$->symbol;
            $$->subarr_type = $1->symbol->type;
        }

    | postfix_expression SQR_BRACE_OPEN expression SQR_BRACE_CLOSE
        { 
            $$ = new Array();
            $$->symbol = $1->symbol;    
            $$->subarr_type = $1->subarr_type->arr_type; // indexing - going one level deeper
            $$->loc = gentemp(INT); 
            $$->type = Array::ARRAY;

            // checking if array is 1D or multi-dimensional
            if($1->type == Array::ARRAY) {
                // multi-dimensional array - so need to multiply size and add offset
                Symbol *sym = gentemp(INT);
                int size = $$->subarr_type->getSize();
                emit("*", sym->name, $3->symbol->name, to_string(size));
                emit("+", $$->loc->name, $1->loc->name, sym->name);
            } else {
                // 1D array - just calculate size
                int size = $$->subarr_type->getSize();
                emit("*", $$->loc->name, $3->symbol->name, to_string(size));
            }

        }

    | postfix_expression PARENTHESIS_OPEN argument_expression_list_opt PARENTHESIS_CLOSE
        { 
            // function call
            $$ = new Array();
            $$->symbol = gentemp($1->symbol->type->type);
            emit("call", $$->symbol->name, $1->symbol->name, to_string($3));
        }

    /* below 2 rules are struct-related -> ignored */
    | postfix_expression DOT IDENTIFIER
        { }

    | postfix_expression PTR_OP IDENTIFIER
        { }

    | postfix_expression INC_OP
        { 
            $$ = new Array();
            // temp with old value, then add 1
            $$->symbol = gentemp($1->symbol->type->type);
            emit("=", $$->symbol->name, $1->symbol->name);
            emit("+", $1->symbol->name, $1->symbol->name, "1"); 
        }
    | postfix_expression DEC_OP
        { 
            $$ = new Array();
            // temp with old value, then subtract 1
            $$->symbol = gentemp($1->symbol->type->type);
            emit("=", $$->symbol->name, $1->symbol->name);
            emit("-", $1->symbol->name, $1->symbol->name, "1");
        }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
        { }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE
        { }
    ;


// number of arguments/parameters is computed here
argument_expression_list_opt:
    argument_expression_list
        { 
            $$ = $1; // depends on argument expression list
        }

    | /* empty */
        { 
            $$ = 0; // no arguments
        }
    ;

argument_expression_list:
    assignment_expression
        { 
            $$ = 1; // 1 argument
            emit("param", $1->symbol->name);
        }

    | argument_expression_list COMMA assignment_expression
        { 
            $$ = $1 + 1; // one more argument added
            emit("param", $3->symbol->name);
        }
    ;

unary_expression:
    postfix_expression
        { 
            $$ = $1; // depends on postfix expression
        }
    | INC_OP unary_expression
        { 
            $$ = $2;
            // this is pre increment, so 1 is added directly
            emit("+", $2->symbol->name, $2->symbol->name, "1");
        }

    | DEC_OP unary_expression
        { 
            $$ = $2;
            // similar to pre increment
            emit("-", $2->symbol->name, $2->symbol->name, "1");
        }

    | unary_operator cast_expression
        { 
            // operation depends on unary operator

            $$ = new Array();

            if(strcmp($1, "&") == 0) {
                // address of -> generate new pointer type
                $$->symbol = gentemp(POINTER);
                $$->symbol->type->arr_type = $2->symbol->type;
                emit("=&", $$->symbol->name, $2->symbol->name);
            } 
            
            else if(strcmp($1, "*") == 0) {
                // dereferencing
                $$->symbol = $2->symbol;
                $$->loc = gentemp($2->loc->type->arr_type->type);
                $$->loc->type->arr_type = $2->loc->type->arr_type->arr_type;
                $$->type = Array::POINTER;
                emit("=*", $$->loc->name, $2->loc->name);
            } 

            else if(strcmp($1, "+") == 0) {
                // unary plus
                $$ = $2;
            } 
            else { 
                // for unary minus, bitwise not and logical not
                $$ = new Array();
                $$->symbol = gentemp($2->symbol->type->type);
                
                if (strcmp($1,"-")==0)
                    emit("=-", $$->symbol->name, "0", $2->symbol->name); // to differentiate between unary and binary minus
                else
                    emit($1, $$->symbol->name, $2->symbol->name);
            }
        }

    /* below 2 rules involve SIZEOF -> ignored */
    | SIZEOF unary_expression
        { }

    | SIZEOF PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE
        { }
    ;


unary_operator:
    BITWISEAND
        { 
            $$ = strdup("&"); 
        }
    | STAR
        { 
            $$ = strdup("*"); 
        }
    | PLUS
        { 
            $$ = strdup("+"); 
        }
    | MINUS
        { 
            $$ = strdup("=-"); 
        }
    | NOT
        { 
            $$ = strdup("~"); 
        }
    | EXCLAMATION
        { 
            $$ = strdup("!"); 
        }
    ;

cast_expression:
    unary_expression
        { 
            $$ = $1; // depends on unary expression
        }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_expression 
        { 
            $$ = new Array();
            $$->symbol = $4->symbol->convert(currentType); // convert to required type
        }
    ;


multiplicative_expression:
    cast_expression
        { 
            $$ = new Expression();

            // we have to obtain base type of the expression
            SymType *bType = $1->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            if($1->type == Array::ARRAY) {
                $$->symbol = gentemp(bType->type);
                emit("=[]", $$->symbol->name, $1->symbol->name, $1->loc->name);
            } 
            
            else if($1->type == Array::POINTER)
                $$->symbol = $1->loc;

            else
                $$->symbol = $1->symbol;

        }
    | multiplicative_expression STAR cast_expression
        { 
            // similar to above, we obtain base type and create temp symbol
            SymType *bType = $1->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if($3->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
            } 
            else if($3->type == Array::POINTER)
                temp = $3->loc;
            else
                temp = $3->symbol;

            // now we execute the required operation (here, multiplication)
            if(typeCheck($1->symbol, temp)) {
                $$ = new Expression();
                $$->symbol = gentemp($1->symbol->type->type);
                emit("*", $$->symbol->name, $1->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }

    | multiplicative_expression DIVIDE cast_expression
        { 
            // similar to above agains
            SymType *bType = $1->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if($3->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
            } 
            else if($3->type == Array::POINTER)
                temp = $3->loc;
            else
                temp = $3->symbol;

            if(typeCheck($1->symbol, temp)) {
                $$ = new Expression();
                $$->symbol = gentemp($1->symbol->type->type);
                emit("/", $$->symbol->name, $1->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }

    | multiplicative_expression PERCENTAGE cast_expression
        { 
            // similar to above agains
            SymType *bType = $1->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if($3->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
            } 
            else if($3->type == Array::POINTER)
                temp = $3->loc;
            else
                temp = $3->symbol;

            if(typeCheck($1->symbol, temp)) {
                $$ = new Expression();
                $$->symbol = gentemp($1->symbol->type->type);
                emit("%", $$->symbol->name, $1->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    ;

additive_expression:
    multiplicative_expression
        { 
            $$ = $1; // depends on multiplicative expression
        }

    | additive_expression PLUS multiplicative_expression
        {   
            // addition operation
            if(typeCheck($1->symbol, $3->symbol)) {
                $$ = new Expression();
                $$->symbol = gentemp($1->symbol->type->type);
                emit("+", $$->symbol->name, $1->symbol->name, $3->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }

    | additive_expression MINUS multiplicative_expression
        { 
            // subtraction operation
            if(typeCheck($1->symbol, $3->symbol)) {
                $$ = new Expression();
                $$->symbol = gentemp($1->symbol->type->type);
                emit("-", $$->symbol->name, $1->symbol->name, $3->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    ;

shift_expression:
    additive_expression
        { 
            $$ = $1; // depends on additive expression
        }
        
    | shift_expression LEFT_OP additive_expression
        { 
            // left shift operation
            if($3->symbol->type->type == INT) {
                $$ = new Expression();
                $$->symbol = gentemp(INT);
                emit("<<", $$->symbol->name, $1->symbol->name, $3->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }

    | shift_expression RIGHT_OP additive_expression
        { 
            // right shift operation
            if($3->symbol->type->type == INT) {
                $$ = new Expression();
                $$->symbol = gentemp(INT);
                emit(">>", $$->symbol->name, $1->symbol->name, $3->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    ;

// boolean expressions -> truelist and falselist is made as discussed in class, then backpatching will be done later on

relational_expression:
    shift_expression
        { 
            $$ = $1; // depends on shift expression
        }
    | relational_expression LT_OP shift_expression
        {   
            if(typeCheck($1->symbol, $3->symbol)) {
                $$ = new Expression();
                $$->type = Expression::BOOLEAN;
                $$->trueList = makelist(nextinstr());
                $$->falseList = makelist(nextinstr() + 1);
                emit("<", "", $1->symbol->name, $3->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }

    | relational_expression GT_OP shift_expression
        { 
            if(typeCheck($1->symbol, $3->symbol)) {
                $$ = new Expression();
                $$->type = Expression::BOOLEAN;
                $$->trueList = makelist(nextinstr());
                $$->falseList = makelist(nextinstr() + 1);
                emit(">", "", $1->symbol->name, $3->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }

    | relational_expression LTE_OP shift_expression
        { 
            if(typeCheck($1->symbol, $3->symbol)) {
                $$ = new Expression();
                $$->type = Expression::BOOLEAN;
                $$->trueList = makelist(nextinstr());
                $$->falseList = makelist(nextinstr() + 1);
                emit("<=", "", $1->symbol->name, $3->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }

    | relational_expression GTE_OP shift_expression
        { 
            if(typeCheck($1->symbol, $3->symbol)) {
                $$ = new Expression();
                $$->type = Expression::BOOLEAN;
                $$->trueList = makelist(nextinstr());
                $$->falseList = makelist(nextinstr() + 1);
                emit(">=", "", $1->symbol->name, $3->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    ;

equality_expression:
    relational_expression
        { 
            $$ = $1; // depends on relational expression
        }

    | equality_expression EQ_OP relational_expression
        { 
            if(typeCheck($1->symbol, $3->symbol)) {
                $1->toInt();
                $3->toInt();

                $$ = new Expression();
                $$->type = Expression::BOOLEAN;
                $$->trueList = makelist(nextinstr());
                $$->falseList = makelist(nextinstr() + 1);

                emit("==", "", $1->symbol->name, $3->symbol->name);
                emit("goto", "");

            } 
            else {
                yyerror("Type mismatch!");
            }
        }

    | equality_expression NE_OP relational_expression
        { 
            if(typeCheck($1->symbol, $3->symbol)) {
                $1->toInt();
                $3->toInt();

                $$ = new Expression();
                $$->type = Expression::BOOLEAN;
                $$->trueList = makelist(nextinstr());
                $$->falseList = makelist(nextinstr() + 1);

                emit("!=", "", $1->symbol->name, $3->symbol->name);
                emit("goto", "");

            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    ;

// check - add comments

AND_expression:
    equality_expression
        { 
            $$ = $1; // depends on equality expression
        }

    | AND_expression BITWISEAND equality_expression
        { 
            $1->toInt();
            $3->toInt();

            $$ = new Expression();
            $$->type = Expression::NONBOOLEAN;
            $$->symbol = gentemp(INT);

            emit("&", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    ;

exclusive_OR_expression:
    AND_expression
        { 
            $$ = $1; // depends on AND expression
        }
    | exclusive_OR_expression BITWISEXOR AND_expression
        { 
            $1->toInt();
            $3->toInt();

            $$ = new Expression();
            $$->type = Expression::NONBOOLEAN;
            $$->symbol = gentemp(INT);

            emit("^", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    ;

inclusive_OR_expression:
    exclusive_OR_expression
        { 
            $$ = $1; // depends on exclusive OR expression
        }
    | inclusive_OR_expression BITWISEOR exclusive_OR_expression
        {  
            $1->toInt();
            $3->toInt();

            $$ = new Expression();
            $$->type = Expression::NONBOOLEAN;
            $$->symbol = gentemp(INT);

            emit("|", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    ;

// in these cases, backpatching needs to be done (as discussed in class), so M and N are used 

logical_AND_expression:
    inclusive_OR_expression
        { 
            $$ = $1; // depends on inclusive OR expression
        }

    | logical_AND_expression AND_OP M inclusive_OR_expression
        { 
            $1->toBool();
            $4->toBool();

            $$ = new Expression();
            $$->type = Expression::BOOLEAN;

            backpatch($1->trueList, $3); // backpatching
            $$->trueList = $4->trueList; // B.truelist = B2.truelist
            $$->falseList = merge($1->falseList, $4->falseList); // B.falselist = merge(B1.falselist, B2.falselist)
        }
    ;

// similarly, done for the rest too
logical_OR_expression:
    logical_AND_expression
        { 
            $$ = $1; // depends on logical AND expression
        }

    | logical_OR_expression OR_OP M logical_AND_expression
        {  
            $1->toBool();
            $4->toBool();

            $$ = new Expression();
            $$->type = Expression::BOOLEAN;

            backpatch($1->falseList, $3); // backpatching
            $$->trueList = merge($1->trueList, $4->trueList); // B.truelist = merge(B1.truelist, B2.truelist)
            $$->falseList = $4->falseList; // B.falselist = B2.falselist
        }
    ;

conditional_expression:
    logical_OR_expression
        { 
            $$ = $1; // depends on logical OR expression
        }

    // this is like "if (logical_or_expression) { expression } else { conditional_expression }", so similar addition of M and N is done
    | logical_OR_expression N QUESTION_MARK M expression N COLON M conditional_expression
        { 
            $$->symbol = gentemp($5->symbol->type->type);
            emit("=", $$->symbol->name, $9->symbol->name);

            list<int> l = makelist(nextinstr());
            emit("goto", "");

            backpatch($6->nextList, nextinstr());
            emit("=", $$->symbol->name, $5->symbol->name);

            l = merge(l, makelist(nextinstr()));
            emit("goto", "");

            backpatch($2->nextList, nextinstr());

            $1->toBool();

            backpatch($1->trueList, $4);
            backpatch($1->falseList, $8);

            backpatch(l, nextinstr());
        }
    ;

assignment_expression:
    conditional_expression
        { 
            $$ = $1; // depends on conditional expression
        }

    // assignment in case of array or pointer or normal variable
    | unary_expression assignment_operator assignment_expression
        { 
            if($1->type == Array::ARRAY) {
                $3->symbol = $3->symbol->convert($1->subarr_type->type);
                emit("[]=", $1->symbol->name, $1->loc->name, $3->symbol->name);
            } 
            else if ($1->type == Array::POINTER) {
                $3->symbol = $3->symbol->convert($1->loc->type->type);
                emit("*=", $1->loc->name, $3->symbol->name);
            } 
            else {
                $3->symbol = $3->symbol->convert($1->symbol->type->type);
                emit("=", $1->symbol->name, $3->symbol->name);
            }

            $$ = $3;
        }
    ;

assignment_operator:
    EQ
        { }

    /* all below rules -> ignored */
    | MUL_ASSIGN
        { }
    | DIV_ASSIGN
        { }
    | MOD_ASSIGN
        { }
    | ADD_ASSIGN
        { }
    | SUB_ASSIGN
        { }
    | LEFT_ASSIGN
        { }
    | RIGHT_ASSIGN
        { }
    | AND_ASSIGN
        { }
    | XOR_ASSIGN
        { }
    | OR_ASSIGN
        { }
    ;

expression:
    assignment_expression
        { 
            $$ = $1; // depends on assignment expression
        }
    
    /* expression involving comma operator -> involved */
    | expression COMMA assignment_expression
        { }
    ;

constant_expression:
    conditional_expression
        { }
    ;

// ----------2. Declarations----------


declaration:
    declaration_specifiers init_declarator_list_opt SEMI_COLON
        { }
    ;

/* rules involving storage_class_specifier, enum_specifier, type_qualifier, function_specifier  -> ignored */
declaration_specifiers:
    storage_class_specifier declaration_specifiers_opt
        { }

    | type_specifier declaration_specifiers_opt
        { }

    | type_qualifier declaration_specifiers_opt
        { }

    | function_specifier declaration_specifiers_opt
        { }
    ;

declaration_specifiers_opt:
    declaration_specifiers
        { }

    | /* empty */
        { }
    ;

init_declarator_list:
    init_declarator
        { }

    | init_declarator_list COMMA init_declarator
        { }
    ;

init_declarator_list_opt:
    init_declarator_list
        { }

    | /* empty */
        { }
    ;

init_declarator:
    declarator
        { 
            $$ = $1; // depends on declarator
        }
    | declarator EQ initializer
        { 
            if($3->initialValue != "") $1->initialValue = $3->initialValue;
            emit("=", $1->name, $3->name);
        }
    ;

/* storage_class_specifier -> ignored */
storage_class_specifier:
    EXTERN
        { }

    | STATIC
        { }

    | AUTO
        { }

    | REGISTER
        { }
    ;

/* only void, char, int, float considered */
/* their token names were changed to avoid overlap with enum names */
type_specifier:
    VOID_TYPE
        { 
            currentType = VOID;
        }

    | CHAR_TYPE
        { 
            currentType = CHAR;
        }

    | SHORT
        { }

    | INT_TYPE
        { 
            currentType = INT;
        }

    | LONG
        { }

    | FLOAT_TYPE
        { 
            currentType = FLOAT;
        }

    | DOUBLE
        { }

    | SIGNED
        { }

    | UNSIGNED
        { }

    | BOOL
        { }

    | COMPLEX
        { }

    | IMAGINARY
        { }

    | enum_specifier 
        { }
    ;

/* rules involving type_qualifier -> ignored */
specifier_qualifier_list:
    type_specifier specifier_qualifier_list_opt
        { }
    | type_qualifier specifier_qualifier_list_opt
        { }
    ;


specifier_qualifier_list_opt:
    specifier_qualifier_list
        { }

    | /* empty */
        { }
    ;

identifier_opt:
    IDENTIFIER 
        { }

    | /* empty */
        { }
    ;

/* enum_specifier, enumerator_list, enumerator, type_qualifier, function_specifier -> all ignored */
enum_specifier:
    ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list CURLY_BRACE_CLOSE 
        { }
    
    | ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list COMMA CURLY_BRACE_CLOSE
        { }

    | ENUM IDENTIFIER
        { }
    ;



enumerator_list:
    enumerator 
        { }

    | enumerator_list COMMA enumerator
        { }
    ;

enumerator:
    IDENTIFIER 
        { }
        
    | IDENTIFIER EQ constant_expression
        { }
    ;

type_qualifier:
    CONST
        { }

    | RESTRICT
        { }

    | VOLATILE
        { }
    ;

function_specifier:
    INLINE
        { }
    ;

declarator:
    pointer direct_declarator
        { 
            // for multi-dimensional arrays -> moving deeper until base type is obtained
            SymType *temp = $1;
            while(temp->arr_type != NULL) 
                temp = temp->arr_type;

            temp->arr_type = $2->type;
            $$ = $2->update($1);
        }

    | direct_declarator
        { }
    ;

/*

Declarations

*/

/* rules involving type_qualifier ignored */
/* rules involving static ignored */
/* type_qualifier_list_opt replaced with type_qualifier_list and epsilon */
/* assignment_expression_opt replaced with assignment_expression and epsilon */
/* identifier_list_opt replaced  with identifier_list and epsilon */
direct_declarator:
    IDENTIFIER 
        { 
            $$ = $1->update(new SymType(currentType)); 
            currentSymbol = $$;
        }

    | PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE
        { 
            $$ = $2; // depends on declarator
        }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list assignment_expression SQR_BRACE_CLOSE
        { }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list SQR_BRACE_CLOSE
        { }

    | direct_declarator SQR_BRACE_OPEN assignment_expression SQR_BRACE_CLOSE
        { 
            
            // to check whether array is 1D or multi-dimensional
            SymType *temp = $1->type, *prev = NULL;
            while(temp->type == ARRAY) { 
                prev = temp;
                temp = temp->arr_type;
            }

            if(prev != NULL) { 
                // case of multi-dimensional array
                prev->arr_type =  new SymType(ARRAY, temp, atoi($3->symbol->initialValue.c_str()));	
                $$ = $1->update($1->type);
            }
            else { 
                // just 1D array
                SymType* new_type = new SymType(ARRAY, $1->type, atoi($3->symbol->initialValue.c_str()));
                $$ = $1->update(new_type);
            }
        }

    | direct_declarator SQR_BRACE_OPEN SQR_BRACE_CLOSE
        { 
            // similar to previous one, but initial value is kept as 0 
            SymType *temp = $1->type, *prev = NULL;
            while(temp->type == ARRAY) { 
                prev = temp;
                temp = temp->arr_type;
            }

            if(prev != NULL) { 
                // case of multi-dimensional array
                prev->arr_type =  new SymType(ARRAY, temp, 0);	
                $$ = $1->update($1->type);
            }
            else { 
                // just 1D array
                SymType* new_type = new SymType(ARRAY, $1->type, 0);
                $$ = $1->update(new_type);
            }
        }

    | direct_declarator SQR_BRACE_OPEN STATIC type_qualifier_list assignment_expression SQR_BRACE_CLOSE
        { }

    | direct_declarator SQR_BRACE_OPEN STATIC assignment_expression SQR_BRACE_CLOSE
        { }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list STATIC assignment_expression SQR_BRACE_CLOSE
        { }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list STAR SQR_BRACE_CLOSE
        { }

    | direct_declarator SQR_BRACE_OPEN STAR SQR_BRACE_CLOSE
        { }
    
    /* additional non-terminal used to trigger changing of symbol table in case of function  */
    | direct_declarator PARENTHESIS_OPEN CT parameter_type_list PARENTHESIS_CLOSE
        { 
            // function declaration
            currentTable->name = $1->name;

            if($1->type->type != VOID) {
                Symbol* s = currentTable->lookup("return");
                s->update($1->type);
            }

            // set nested table for function
            $1->nestedTable = currentTable;
            currentTable->parent = globalTable;

            changeTable(globalTable); // change to global table
            currentSymbol = $$;
        }

    | direct_declarator PARENTHESIS_OPEN identifier_list PARENTHESIS_CLOSE
        { }

    | direct_declarator PARENTHESIS_OPEN CT PARENTHESIS_CLOSE
        { 
            // same as previous one
            currentTable->name = $1->name;

            if($1->type->type != VOID) {
                Symbol* s = currentTable->lookup("return");
                s->update($1->type);
            }

            // set nested table for function
            $1->nestedTable = currentTable;
            currentTable->parent = globalTable;

            changeTable(globalTable); // change to global table
            currentSymbol = $$;
        }
    ;



pointer:
    STAR type_qualifier_list_opt
        { 
            $$ = new SymType(POINTER); // new pointer
        }

    | STAR type_qualifier_list_opt pointer
        { 
            $$ = new SymType(POINTER, $3); // nested pointer
        }
    ;

type_qualifier_list:
    type_qualifier
        { }

    | type_qualifier_list type_qualifier
        { }
    ;

type_qualifier_list_opt:
    type_qualifier_list
        { }

    | /* empty */
        { }
    ;

parameter_type_list:
    parameter_list
        { }

    | parameter_list COMMA ELLIPSIS
        { }
    ;

parameter_list:
    parameter_declaration
        { }

    | parameter_list COMMA parameter_declaration
        { }
    ;

parameter_declaration:
    declaration_specifiers declarator
        { }

    | declaration_specifiers
        { }
    ;

identifier_list:
    IDENTIFIER 
        { }

    | identifier_list COMMA IDENTIFIER
        { }
    ;

type_name:
    specifier_qualifier_list
        { }
    ;

initializer:
    assignment_expression
        { 
            $$ = $1->symbol; // depends on assignment expression
        }

    | CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
        { }  

    | CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE
        { }
    ;

initializer_list:
    designation_opt initializer
        { }

    | initializer_list COMMA designation_opt initializer
        { }
    ;

designation:
    designator_list EQ
        { }
    ;

designation_opt:
    designation
        { }

    | /* empty */
        { }
    ;

designator_list:
    designator
        { }

    | designator_list designator
        { }
    ;

designator:
    SQR_BRACE_OPEN constant_expression SQR_BRACE_CLOSE
        { }

    | DOT IDENTIFIER
        { }   
    ;


// ----------3. Statements----------

/* labeled_statement -> ignored */
statement:
    labeled_statement
        { }

    | compound_statement
        { 
            $$ = $1; 
        }

    | expression_statement
        { 
            $$ = new Statement();
            $$->nextList = $1->nextList;
        }

    | selection_statement
        { 
            $$ = $1;
        }

    | iteration_statement
        { 
            $$ = $1;
        }

    | jump_statement
        { 
            $$ = $1;
        }
    ;

/* labeled_statement -> ignored */
labeled_statement:
    IDENTIFIER COLON statement
        { }

    | CASE constant_expression COLON statement
        { }    

    | DEFAULT COLON statement
        { }
    ;



compound_statement:
    CURLY_BRACE_OPEN CB CT block_item_list_opt CURLY_BRACE_CLOSE
        { 
            $$ = $4;
            changeTable(currentTable->parent); // return to parent ST
        }
    ;

block_item_list:
    block_item
        {
            $$ = $1;
        }

    | block_item_list M block_item
        { 
            $$ = $3;
            backpatch($1->nextList,$2);
        }
    ;

block_item_list_opt:
    block_item_list
        { 
            $$ = $1;
        }

    | /* empty */
        { 
            $$ = new Statement();
        }
    ;


block_item:
    declaration
        { 
            $$ = new Statement();
        }
    | statement
        { 
            $$ = $1;
        }
    ;

expression_statement:
    expression_opt SEMI_COLON
        { 
            $$ = $1;
        }
    ;

expression_opt:
    expression
        { 
            $$ = $1;
        }
    | /* empty */
        { 
            $$ = new Expression();
        }
    ;

/* switch ignored */
/* for with declaration inside ignored */

/* in IF, WHILE, DO and FOR: backpatching needs to be done (as discussed in class) */
selection_statement:
    IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE M statement N ELSE M statement
        { 
            $$ = new Statement();

            $3->toBool();

            backpatch($3->trueList, $5); // if true, go to M1 (if-statement)
            backpatch($3->falseList, $9); // if false, go to M2 (else-statement)

            $$->nextList = merge($10->nextList, merge($6->nextList, $7->nextList)); // to go out of if-else after it's done
        }
    
    /* %prec THEN added to remove translation conflicts */
    | IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE M statement N %prec THEN
        { 
            $$ = new Statement();

            $3->toBool();

            backpatch($3->trueList, $5); // // if true, go to M1 (if-statement)

            $$->nextList = merge($3->falseList, merge($6->nextList, $7->nextList)); // to go out of if when expression is false
        }
    
    | SWITCH PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement
        { }
    ;

iteration_statement:

    // while M1 (expression) M2 statement
    WHILE M PARENTHESIS_OPEN expression PARENTHESIS_CLOSE M statement
        { 
            $$ = new Statement();

            $4->toBool();

            backpatch($7->nextList, $2); // M1 -> to go back to start of loop
            backpatch($4->trueList, $6); // if true, go to M2 (statement)

            $$->nextList = $4->falseList; // to go out of while when expression is false

            emit("goto", to_string($2));
        }

    // similar to while ...
    // do M1 statement M2 while (expression) ;
    | DO M statement M WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMI_COLON
        { 
            $$ = new Statement();

            $7->toBool();

            backpatch($7->trueList, $2); // if true, go to M1 (statement)
            backpatch($3->nextList, $4); // M2 -> to go to check expression once statement is executed

            $$->nextList = $7->falseList; // to go out of do-while when expression is false
        }

    // again similar to while ... 
    | FOR PARENTHESIS_OPEN expression_opt SEMI_COLON M expression_opt SEMI_COLON M expression_opt N PARENTHESIS_CLOSE M statement
        { 
            $$ = new Statement();

            $6->toBool();

            backpatch($6->trueList, $12); // if true, go to M3 (statement)
            backpatch($10->nextList, $5); // go to M1 after N1 (for checking condition)
            backpatch($13->nextList, $8); // go to M2 (3rd part of for loop), after statement is executed

            emit("goto", toString($8));

            $$->nextList = $6->falseList; // to go out of for when expression is false
        }

    | FOR PARENTHESIS_OPEN declaration expression_opt SEMI_COLON expression_opt PARENTHESIS_CLOSE statement
        { }
    ;

/* only return is considered */
jump_statement:
    GOTO IDENTIFIER SEMI_COLON
        { }    

    | CONTINUE SEMI_COLON
        { }

    | BREAK SEMI_COLON
        { }

    | RETURN expression_opt SEMI_COLON
        { 
            $$ = new Statement();
            emit("return",($2->symbol == NULL) ? "" : $2->symbol->name);
        }
    ;

/* External definitions */

/* external_declaration and translation_unit -> ignored */
translation_unit:
    external_declaration
        { }

    | translation_unit external_declaration
        { }
    ;

external_declaration:
    function_definition
        { }

    | declaration
        { }
    ;

// compound_statement at the end is expanded - to avoid block change in function definition
function_definition: 
    declaration_specifiers declarator declaration_list_opt CT CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE
        { 
            tableCount = 0;
            $2->isFunction = true;
            changeTable(globalTable); // return to global ST
        }
    ;

declaration_list:
    declaration
        { }

    | declaration_list declaration
        { }
    ;

declaration_list_opt:
    declaration_list
        { }

    |
        { }
    ;

%%

void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}   