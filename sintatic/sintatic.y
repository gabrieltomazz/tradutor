%define parse.error verbose
%define lr.type canonical-lr
%defines

%precedence THEN
%precedence CMD_ELSE

%{
  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>

  #include "tree.h"
  #include "symbol_table.h"

  extern int yylex();
  extern int yylex_destroy();
  extern int yyerror(const char *);

  extern FILE *yyin;
  int line = 1;
  int column = 0;
  
  TreeNodes* origin;
  Scope* activeScope;
%}

%union
{
  struct Token {
    char *body;
  } token;
  char	*sval;

  struct TreeNodes* typeNode;
};

%type <typeNode> program
%type <typeNode> list_declaration
%type <typeNode> main_declaration
%type <typeNode> var_declaration
%type <typeNode> func_declaration
%type <typeNode> list_args
%type <typeNode> blockStmt
%type <typeNode> list_statements
%type <typeNode> stmt
%type <typeNode> input_output_expr
%type <typeNode> iteration_expr
%type <typeNode> condition_expr
%type <typeNode> return_stmt
%type <typeNode> expr_stmt
%type <typeNode> expr
%type <typeNode> assign
%type <typeNode> func_expr
%type <typeNode> func_in_expr
%type <typeNode> op_or_expr
%type <typeNode> op_and_expr
%type <typeNode> logical_expr
%type <typeNode> arithmetic_expr
%type <typeNode> mult_expr
%type <typeNode> first_term
%type <typeNode> term
%type <typeNode> logical_ops
%type <typeNode> str_expr
%type <typeNode> list_expr
%type <typeNode> var
%type <typeNode> num_tipos
%type <typeNode> tipos
%type <typeNode> is_set_expr
%type <typeNode> block_cond
%type <typeNode> simple_complex_block_stmt
%type <typeNode> adds_op
%type <typeNode> mult_ops
%type <typeNode> set_stmt
%type <typeNode> many_declaration

%token <sval> ID INT FLOAT ADD_OP MULT_OP STRING

%token <token> MAIN EMPTY
%token <token> TYPE_INT TYPE_FLOAT TYPE_ELEM TYPE_SET   
%token <token> CMD_IF CMD_FOR CMD_FORALL
%token <token> GT_OP LT_OP LTE_OP GTE_OP NEQ_OP EQUAL_OP
%token <token> ADD_FUNC IS_SET_FUNC REMOVE_FUNC EXIST_FUNC IN_OP 
%token <token> OP_OR OP_AND OP_NEG
%token <token> ATRIBUTION CMD_WRITE CMD_WRITELN
%token <token> CMD_READ CMD_RETURN SEMICOLON COMMA OPEN_PAREN CLS_PAREN OP_CUR_BRACKET CLS_CUR_BRACKET

%%

program: 
        list_declaration {
            $$ = buildNode("program");
            $$->childNode = $1;
            origin = $$;
        }
;

list_declaration: 
        list_declaration main_declaration {
            $1->brotherNode = $2;
        }
        | main_declaration 
        | error  { $$ = buildNode("error program"); }
;

main_declaration: 
        func_declaration 
        | var_declaration 
;

var_declaration: 
        tipos var {
            Symbol *aux = createItem($tipos->value, $var->value, line);
            insertItem(activeScope, aux);
        } SEMICOLON {
            $$ = buildNode("var_declaration");
            $$->childNode = $1; 
            $1->brotherNode = $2;  
        }
        | tipos var COMMA many_declaration {
            Symbol *aux = createItem($tipos->value, $2->value, line);
            insertItem(activeScope, aux);
            Symbol *aux2 = createItem($tipos->value, $4->value, line);
            insertItem(activeScope, aux2);
        } SEMICOLON {
            $$ = buildNode("var_declaration");
            $$->childNode = $1; 
            $1->brotherNode = $2;  
            $2->brotherNode = $4; 
        }
        | error SEMICOLON { $$ = buildNode("SINTATIC ERR");}
;

many_declaration: 
        var COMMA
        | var;
;

func_declaration: 
        tipos var OPEN_PAREN {
            
            // criar o simbolos no escopo atual
            Symbol *aux = createItem("FUNCTION", $var->value, line);
            insertItem(activeScope, aux); 
            
            // novo Scopo
            Scope *newScope = buildScope($var->value);
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        } list_args CLS_PAREN  blockStmt {
            $$ = buildNode("func_declaration");   
            $$->childNode = $1;
            $1->brotherNode = $2;
            $2->brotherNode = $5;
            $5->brotherNode = $7;
            
            // fecha o Scopo
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
        }
        | tipos MAIN OPEN_PAREN {
            // insere simbolos no escopo atual
            Symbol *aux = createItem("FUNCTION", "main", line);
            insertItem(activeScope, aux); 

            // novo Scopo
            Scope *newScope = buildScope("main"); 
            newScope->parentScope = activeScope; 
            activeScope = newScope;

        } list_args[args] CLS_PAREN blockStmt[block] {
            $$ = buildNode("func_declaration_main");   
            $$->childNode = $tipos;
            $tipos->brotherNode = $args;
            $args->brotherNode = $block;
            
            // printf("Chegou scope: %s \n", activeScope->scopeName);
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
            
        }
        | tipos var OPEN_PAREN error CLS_PAREN blockStmt {
                $$ = buildNode("SINTATIC ERR!");
        }
        | tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt[block] {
                $$ = buildNode("SINTATIC ERR!");
        }

;

list_args:
        tipos var COMMA list_args {
                $$ = buildNode("list_args");  
                $$->childNode = $1;
                $1->brotherNode = $2;
                $2->brotherNode = $4;
                
                // cria simbolos no escopo atual
                Symbol *aux = createItem($tipos->value, $var->value, line);
                insertItem(activeScope, aux); 
                
        }
        | tipos var {
                $$ = buildNode("list_args"); 
                $$->childNode = $1;
                $1->brotherNode = $2;

                Symbol *aux = createItem($tipos->value, $var->value, line);
                insertItem(activeScope, aux); 
        }
        | %empty {
                $$ = buildNode("no_args"); 
        } 
;

blockStmt: 
        OP_CUR_BRACKET list_statements CLS_CUR_BRACKET {
                $$ = $2;
        }
;

list_statements: 
        stmt list_statements {
               $$ = $1;
               $1->brotherNode = $2; 
        }
        | stmt
;

stmt:   
        iteration_expr
        | condition_expr  
        | return_stmt
        | input_output_expr 
        | expr_stmt 
        | set_stmt 
        | var_declaration 
        | assign SEMICOLON
;

input_output_expr: 
        CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_WRITE_STR");
                $$->childNode = $3;
        }
        | CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_WRITE_EXPR");
                $$->childNode = $3;
        }
        | CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_WRITELN_STR");
                $$->childNode = $3;
        }
        | CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_WRITELN_EXPR");
                $$->childNode = $3;
        }
        | CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_READ_VAR");
                $$->childNode = $3;
        }
        | CMD_WRITE OPEN_PAREN error CLS_PAREN SEMICOLON {
                $$ = buildNode("SINTATIC ERR!");
        }
        | CMD_WRITELN OPEN_PAREN error CLS_PAREN SEMICOLON {
                $$ = buildNode("SINTATIC ERR!");
        }
        | CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON {
                $$ = buildNode("SINTATIC ERR!");
        }
;

iteration_expr:
        CMD_FOR OPEN_PAREN {
            // novo Scopo    
            Scope *newScope = buildScope("Block FOR");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        } assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt {     
             $$ = buildNode("for");
             $$->childNode = $4;
             $4->brotherNode = $6;
             $6->brotherNode = $8;
             $8->brotherNode = $10;  

             // fecha o Scopo
             showScope(activeScope);
             Scope *auxScope = activeScope->parentScope;
             freeScope(activeScope);
             activeScope = auxScope;
        }
;

condition_expr: 
        CMD_IF OPEN_PAREN expr CLS_PAREN {
            // novo Scopo
            //     char* scopeName;
            //     scopeName = malloc(sizeof(activeScope->scopeName)+21);
            //     strcpy(scopeName, "Block IF from Scope: ");
            //     strcat(scopeName, activeScope->scopeName);
            
            Scope *newScope = buildScope("Block IF ");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
        } block_cond {
                $$ = buildNode("if");
                $$->childNode = $3;
                $3->brotherNode = $6;

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
        | CMD_IF OPEN_PAREN error CLS_PAREN error {
                $$ = buildNode("SINTATIC ERR!");
        }
;

block_cond:
        simple_complex_block_stmt %prec THEN 
        | simple_complex_block_stmt CMD_ELSE {
            // novo Scopo    
            Scope *newScope = buildScope("Block ELSE");
            newScope->parentScope = activeScope; 
            activeScope = newScope;

        } simple_complex_block_stmt {
                $$ = buildNode("if_stmt");
                $$->childNode = $1;

                $$->brotherNode = buildNode("else");
                $$->brotherNode->childNode = $4;

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
;

simple_complex_block_stmt:
        stmt
        | blockStmt
;

return_stmt:
        CMD_RETURN SEMICOLON {
              $$ = buildNode("return");  
        }
        | CMD_RETURN expr SEMICOLON  {
                $$ = buildNode("return");  
                $$->childNode = $2;
        }
        | CMD_RETURN error SEMICOLON {
                $$ = buildNode("SINTATIC ERR!");
        }
        | CMD_RETURN expr error {
                $$ = buildNode("SINTATIC ERR!");
        }
;

set_stmt: 
        CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN {
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        } simple_complex_block_stmt {
                $$ = buildNode("forall");  
                $$->childNode = $3;
                $3->brotherNode = $5;
                $5->brotherNode = $8;

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
        | CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN {
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        } simple_complex_block_stmt {
                $$ = buildNode("forall");  
                $$->childNode = $3;
                $3->brotherNode = $5;
                $5->brotherNode = $8;

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
        | is_set_expr SEMICOLON 
        | CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt {
                $$ = buildNode("SINTATIC ERR!");
        }
        | CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error {
                $$ = buildNode("SINTATIC ERR!");
        }
        | CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt {
                $$ = buildNode("SINTATIC ERR!");
        }
;
expr_stmt:
        expr SEMICOLON 
        | expr error {
                $$ = buildNode("SINTATIC ERR!");
        }

;

expr:
        op_or_expr 
        | func_expr
;

assign:
        var ATRIBUTION expr {
              $$ = buildNode(" = ");
              $$->childNode = $1;
              $1->brotherNode = $3;
        }
;

func_expr: 
        ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN {
                $$ = buildNode(" add ");
                $$->childNode = $3;
        }
        | REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN {
                $$ = buildNode(" remove ");
                $$->childNode = $3;
        }
        | EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN {
                $$ = buildNode(" exist ");
                $$->childNode = $3;
        }
        | ADD_FUNC OPEN_PAREN error CLS_PAREN {
             $$ = buildNode("SINTATIC ERR!");   
        }
        | REMOVE_FUNC OPEN_PAREN error CLS_PAREN {
             $$ = buildNode("SINTATIC ERR!");   
        } 
        | EXIST_FUNC OPEN_PAREN error CLS_PAREN {
             $$ = buildNode("SINTATIC ERR!");    
        }
;

is_set_expr :
        IS_SET_FUNC OPEN_PAREN var CLS_PAREN {
              $$ = buildNode(" is_set ");
              $$->childNode = $3;
        }
        | IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN {
                $$ = buildNode(" is_set ");
                $$->childNode = $3;
        }
        | IS_SET_FUNC OPEN_PAREN error CLS_PAREN {
             $$ = buildNode("SINTATIC ERR!");    
        }

func_in_expr:
        op_or_expr IN_OP var {
                $$ = buildNode(" IN ");
                $$->childNode = $1;
                $1->brotherNode = $3;
        }
        | op_or_expr IN_OP func_expr {
                $$ = buildNode(" IN ");
                $$->childNode = $1;
                $1->brotherNode = $3;
        }
;

op_or_expr: 
        op_or_expr OP_OR op_and_expr {
              $$ = buildNode("or");
              $$->childNode = $1;
              $1->brotherNode = $3;
        }
        | op_and_expr 
        | func_in_expr
;

op_and_expr:
        op_and_expr OP_AND logical_expr {
              $$ = buildNode("and");
              $$->childNode = $1;
              $1->brotherNode = $3;  
        }
        | logical_expr 
;

logical_expr:
       logical_expr logical_ops arithmetic_expr {
             $$ = $2;
             $2->childNode = $1; 
             $1->brotherNode = $3; 
       } 
       | arithmetic_expr
;

arithmetic_expr: 
        arithmetic_expr adds_op mult_expr {
              $$ = $2;
              $2->childNode = $1;
              $1->brotherNode = $3;
        }
        | mult_expr
;

mult_expr:
        mult_expr mult_ops first_term {
              $$ = $2;
              $2->childNode = $1;
              $1->brotherNode = $3;
        }
        | first_term
;

first_term: 
        term
        | OP_NEG term {
              $$ = buildNode(" ! ");
              $$->childNode = $2;
        } 
        | adds_op term {
              $$ = $1;
              $1->childNode = $2;
        }
        | var OPEN_PAREN list_expr CLS_PAREN {
                $$ = $1;
                $1->brotherNode = $3;
        }
        | var OPEN_PAREN CLS_PAREN 
        | var OPEN_PAREN error CLS_PAREN {
                $$ = buildNode("SINTATIC ERR!");
        }
        | error OPEN_PAREN  CLS_PAREN {
                $$ = buildNode("SINTATIC ERR!");
        }
; 

term: 
        var 
        | num_tipos
        | OPEN_PAREN expr CLS_PAREN {
                $$ = $2;
        }
        | OPEN_PAREN error  CLS_PAREN {
                $$ = buildNode("SINTATIC ERR!");
        }
;

logical_ops: 
        LT_OP {
                $$ = buildNode("LT_OP");
        }
        |  LTE_OP {
                $$ = buildNode("LTE_OP");
        }  
        |  GT_OP {
                $$ = buildNode("GT_OP");
        } 
        |  GTE_OP {
                $$ = buildNode("GTE_OP");
        }
        |  NEQ_OP {
                $$ = buildNode("NEQ_OP");
        }
        |  EQUAL_OP {
                $$ = buildNode("EQUAL_OP");
        }
;

str_expr:
        STRING {
            $$ = buildNode($1);
            free($STRING);
        }
;

list_expr:
        expr COMMA list_expr
        | expr 
        | error COMMA error {
             $$ = buildNode("SINTATIC ERR!");   
        }
;

var:
      ID {
            $$ = buildNode($1);
            free($1);
       } 
;

adds_op:
      ADD_OP {
            $$ = buildNode($1); 
            free($1); 
      } 
;

mult_ops:
      MULT_OP {
              $$ = buildNode($1); 
              free($1);  
      }
;

num_tipos: 
        FLOAT {
              $$ = buildNode($1);
              free($1);
        }
        | INT {
              $$ = buildNode($1);
              free($1);
        }
        | EMPTY {
              $$ = buildNode("EMPTY");
        }
;

tipos: 
        TYPE_INT {
             $$ = buildNode("TYPE_INT");
        }    
        | TYPE_FLOAT {
              $$ = buildNode("TYPE_FLOAT");
        }
        | TYPE_SET  {
              $$ = buildNode("TYPE_SET");
        } 
        | TYPE_ELEM {
             $$ = buildNode("TYPE_ELEM");
        }
;
%%


int yyerror(const char* errormsg) {
  printf(" ----------------------------- ERROR ---------------------------------------------- \n");
  fprintf(stderr, "%s at line:%d, column:%d,\n", errormsg, line, column);
  printf(" ------------------------------------------------------------------------------------ \n");
  printf("\n");
  return 0;
}

int main(int argc, char *argv[]) {
   
     yyin = fopen(argv[1], "r");
     activeScope = buildScope("GLOBAL SCOPE");  
     yyparse();

     showScope(activeScope);
     freeScope(activeScope);
     showTree(origin, 0); 

     clearTree(origin);
    
    fclose(yyin);
    yylex_destroy();
    return 0;
}