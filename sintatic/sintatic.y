%define parse.error verbose
%define lr.type canonical-lr
%defines

%precedence THEN
%precedence CMD_ELSE

%{
  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>

  extern int yylex(void);
  extern int yyerror(const char *s);

%}

%union
{
  char	*sval;

  struct Tree* no;
};

%type <no> program
%type <no> list_declaration
%type <no> main_declaration
%type <no> var_declaration
%type <no> func_declaration
%type <no> list_args
%type <no> blockStmt
%type <no> list_statements
%type <no> stmt
%type <no> input_output_expr
%type <no> iteration_expr
%type <no> condition_expr
%type <no> return_stmt
%type <no> expr_stmt
%type <no> expr
%type <no> func_expr
%type <no> func_in_expr
%type <no> op_or_expr
%type <no> op_and_expr
%type <no> logical_expr
%type <no> arithmetic_expr
%type <no> mult_expr
%type <no> first_term
%type <no> term
%type <no> logical_ops
%type <no> str_expr
%type <no> list_expr
%type <no> var
%type <no> num_tipos
%type <no> tipos


%token <sval> ID
%token MAIN EMPTY
%token TYPE_INT TYPE_FLOAT TYPE_ELEM  TYPE_SET   
%token ADD_OP MULT_OP
%token CMD_IF CMD_FOR CMD_FORALL
%token GT_OP LT_OP LTE_OP GTE_OP NEQ_OP EQUAL_OP
%token ADD_FUNC IS_SET_FUNC REMOVE_FUNC EXIST_FUNC IN_OP 
%token OP_OR OP_AND OP_NEG
%token ATRIBUTION CMD_WRITE CMD_WRITELN
%token CMD_READ CMD_RETURN INT FLOAT STRING CHARACTER SEMICOLON COMMA OPEN_PAREN CLS_PAREN OP_CUR_BRACKET CLS_CUR_BRACKET

%%

program: 
        list_declaration 
;

list_declaration: 
        list_declaration main_declaration
        | main_declaration
;

main_declaration: 
        func_declaration
        | var_declaration
        | error {}
;

var_declaration: 
        tipos var SEMICOLON 
;

func_declaration: 
        tipos var OPEN_PAREN list_args CLS_PAREN blockStmt
        /* | tipos var OPEN_PAREN CLS_PAREN blockStmt */
        | tipos MAIN OPEN_PAREN list_args CLS_PAREN blockStmt
;

list_args:
        tipos var COMMA list_args
        | tipos var
        | %empty {printf(" null args \n");}
;

blockStmt: 
        OP_CUR_BRACKET list_statements CLS_CUR_BRACKET {printf("{ }\n");}
        | error {}
;

list_statements: 
        stmt list_statements {printf("statements, statement\n");}
        | stmt
        /* | %empty {printf("empty statement\n");} */
;

stmt:   
        iteration_expr
        | condition_expr  
        | return_stmt
        | input_output_expr 
        | expr_stmt 
        /* | set_stmt  */
        | var_declaration 
        | assign SEMICOLON
;

input_output_expr: 
        CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON {printf("IO: write \n");}
        | CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON {printf("IO: write \n");}
        | CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON {printf("IO: writeln \n");}
        | CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON {printf("IO: writeln \n");}
        | CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON {printf("IO: read \n");}
;

iteration_expr:
        CMD_FOR OPEN_PAREN { printf(" for( "); } assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt
;

condition_expr: 
        CMD_IF OPEN_PAREN { printf(" if( "); } expr CLS_PAREN { printf(" ) "); } block_cond 
;

block_cond:
        simple_complex_block_stmt %prec THEN
        | simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt
        ;

simple_complex_block_stmt:
        stmt
        | blockStmt
;

return_stmt:
        CMD_RETURN SEMICOLON
        | CMD_RETURN expr SEMICOLON
;

expr_stmt:
        expr SEMICOLON
;

expr:
        op_or_expr 
        | func_expr
;

assign:
        var ATRIBUTION expr 
;

func_expr: 
        ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN {printf("add \n");}
        | REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN {printf("remove \n");}
        | EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN {printf("exist)\n");}
        /* | IS_SET_FUNC OPEN_PAREN term CLS_PAREN {printf("is_set(term) \n");} */
;

func_in_expr:
        op_or_expr IN_OP var 
        | op_or_expr IN_OP func_expr 
;

op_or_expr: 
        op_or_expr OP_OR op_and_expr
        | op_and_expr
        | func_in_expr
;

op_and_expr:
        op_and_expr OP_AND logical_expr
        | logical_expr 
;

logical_expr:
       logical_expr logical_ops arithmetic_expr  
       | arithmetic_expr
;

arithmetic_expr: 
        arithmetic_expr ADD_OP mult_expr 
        | mult_expr
;

mult_expr:
        mult_expr MULT_OP first_term
        | first_term
;

first_term: 
        term
        | OP_NEG term  
        | ADD_OP term
        | var OPEN_PAREN list_expr CLS_PAREN
        | var OPEN_PAREN CLS_PAREN
; 

term: 
        var {printf("var \n");}
        | num_tipos
        | OPEN_PAREN expr CLS_PAREN {printf("( operationalExp )\n");}
;

logical_ops: 
         LT_OP  { printf(" < \n");}
        |  LTE_OP  { printf(" <= \n");}  
        |  GT_OP  { printf(" > \n");}  
        |  GTE_OP  { printf(" >= \n");}
        |  NEQ_OP  { printf(" != \n");}
        |  EQUAL_OP  { printf(" == \n");}
;

str_expr:
        STRING
;

list_expr:
        expr COMMA list_expr
        | expr
;

var:
      ID[strg] { printf("%s", $strg);} 
;

num_tipos: 
        FLOAT {printf("float value\n");}
        | INT {printf("int value\n");}
        | EMPTY {printf("empty value\n");}
;

tipos: 
        TYPE_INT     { printf("INT ");}
        | TYPE_FLOAT { printf("FLOAT "); }
        | TYPE_SET   { printf("SET "); }
        | TYPE_ELEM  { printf("ELEM "); }
;