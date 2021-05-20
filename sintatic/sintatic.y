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
  #include "tac.h"

  extern int yylex();
  extern int yylex_destroy();
  extern int yyerror(const char *);

  extern FILE *yyin;
  int line = 1;
  int column = 1;
  int isMain = 0;
  int numFuncArgs = 0;
  int numListArgs = 0;   
  int registrador = 0; 
  int globalError = 0;  
  char* typeManyDeclaration;
  char* threeAddress;
  char* table;
  
  TreeNodes* origin;
  Scope* activeScope;
  Symbol* funcAux;
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
%type <typeNode> write_commands
%type <typeNode> char_expr

%token <sval> ID INT FLOAT ADD_OP MULT_OP STRING CHARACTER

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
            $$ = buildNode("program", 99);
            $$->childNode = $1;
            origin = $$;
        }
;

list_declaration: 
        list_declaration main_declaration {
            TreeNodes *aux = $1;
            while(aux->brotherNode != NULL) {
                aux = aux->brotherNode;
            }
            aux->brotherNode = $2;
        }
        | main_declaration  
        | error  { $$ = buildNode("error program", 99); globalError= globalError+1; }
;

main_declaration: 
        func_declaration 
        | var_declaration  
;

var_declaration: 
        tipos var {
            int declr;
            declr = verifyReDeclaration(activeScope, $var->value, line, column);
            if(declr == 1){
                printf(" tipos var ");
                globalError = globalError + 1;
            }
            Symbol *aux = createItem($tipos->value, $var->value, line, 0);
            aux->registrador = registrador;
            aux->regis_tipo = "$";
            insertItem(activeScope, aux);
            registrador = registrador + 1;
               
        } SEMICOLON {
            $$ = buildNode("var_declaration",99);
            $$->childNode = $1; 
            $1->brotherNode = $2;  
        }
        | tipos var COMMA { typeManyDeclaration = $tipos->value; } many_declaration {
            int declr;
            declr = verifyReDeclaration(activeScope, $var->value, line, column);
            if(declr == 1){
                    printf(" tipos var COMMA ");
                    globalError = globalError + 1;
            } 
            Symbol *aux = createItem($tipos->value, $2->value, line, 0);
            aux->registrador = registrador;
            aux->regis_tipo = "$";
            insertItem(activeScope, aux);
            registrador = registrador + 1;

        } SEMICOLON {
            $$ = buildNode("var_declaration",99);
            $$->childNode = $1; 
            $1->brotherNode = $2;  
            $2->brotherNode = $5; 
        }
        | error SEMICOLON { $$ = buildNode("SINTATIC ERR",10); globalError= globalError+1;}
;

many_declaration: 
        var COMMA many_declaration {
                $1->brotherNode = $3;
                int declr;
                declr = verifyReDeclaration(activeScope, $var->value, line, column);
                if(declr == 1){
                    printf(" var COMMA many_declaration ");    
                    globalError = globalError + 1;
                } 

                Symbol *aux2 = createItem(typeManyDeclaration, $var->value, line, 0);
                aux2->registrador = registrador;
                aux2->regis_tipo = "$";
                insertItem(activeScope, aux2);
                registrador =  registrador+1;
        }
        | var {
                int declr;
                declr = verifyReDeclaration(activeScope, $var->value, line, column);
                if(declr == 1){
                    printf(" var ");  
                    globalError = globalError + 1;
                } 
                Symbol *aux3 = createItem(typeManyDeclaration, $var->value, line, 0);
                aux3->registrador = registrador;
                aux3->regis_tipo = "$";
                insertItem(activeScope, aux3);
                registrador =  registrador+1;
        };
;

func_declaration: 
        tipos var OPEN_PAREN {
            // novo Scopo
            Scope *newScope = buildScope($var->value);
            newScope->parentScope = activeScope; 
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "%s:\n", $var->value);
        
        } list_args {
            // criar o simbolos no escopo atual
            Symbol *aux  = createItem($tipos->value, $var->value, line, 1);
            aux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, aux); 
            numFuncArgs = 0;
            
        } CLS_PAREN blockStmt {
            $$ = buildNode("func_declaration",99);   
            $$->childNode = $1;
            $1->brotherNode = $2;
            $2->brotherNode = $5;
            $5->brotherNode = $8;

            // fecha o Scopo
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
        }
        | tipos MAIN OPEN_PAREN {
            // novo Scopo
            Scope *newScope = buildScope("main"); 
            newScope->parentScope = activeScope; 
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "%s:\n", "main");
        } list_args[args] {
            // insere simbolos no escopo atual
            Symbol *aux = createItem($tipos->value, "main", line, 1);
            aux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, aux); 
            numFuncArgs = 0;  

            // main 
            isMain = isMain + 1;

        } CLS_PAREN blockStmt[block] {            
            $$ = buildNode("func_declaration_main", 99);   
            $$->childNode = $tipos;
            $tipos->brotherNode = $args;
            $args->brotherNode = $block;

            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
            
        }
        | tipos var OPEN_PAREN error CLS_PAREN blockStmt {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
        | tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt[block] {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }

;

list_args:
        tipos var COMMA list_args {
                $$ = buildNode("list_args", 99);  
                $$->childNode = $1;
                $1->brotherNode = $2;
                $2->brotherNode = $4;
                
                numFuncArgs = numFuncArgs + 1;
                // cria simbolos no escopo atual
                int declr;
                declr = verifyReDeclaration(activeScope, $var->value, line, column);
                if(declr == 1){
                    printf(" tipos var COMMA list_args ");  
                    globalError = globalError + 1;
                }
                Symbol *aux = createItem($tipos->value, $var->value, line, 0);
                aux->registrador = registrador;
                aux->regis_tipo = "#"; 
                insertItem(activeScope, aux); 
                registrador = registrador+1;                
        }
        | tipos var {
                int declr;
                numFuncArgs = numFuncArgs + 1;
                declr = verifyReDeclaration(activeScope, $var->value, line, column);
                if(declr == 1){
                    printf(" tipos var ");      
                    globalError = globalError + 1;
                }
                $$ = buildNode("list_args", 99); 
                $$->childNode = $1;
                $1->brotherNode = $2;

                Symbol *aux = createItem($tipos->value, $var->value, line, 0);
                aux->registrador = registrador;
                aux->regis_tipo = "#"; 
                insertItem(activeScope, aux); 
                registrador = registrador+1;
        }
        | %empty {
                $$ = buildNode("no_args", 99); 
        } 
;

blockStmt: 
        OP_CUR_BRACKET  CLS_CUR_BRACKET {
                $$ = buildNode("empty block", 99); 
        }
        | OP_CUR_BRACKET list_statements CLS_CUR_BRACKET {
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
        write_commands OPEN_PAREN str_expr CLS_PAREN SEMICOLON {
                $1->childNode = $3;
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "mov $%d, &str_char%d  \n", registrador, $3->registrador);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "param $%d  \n",registrador);
                
                threeAddress = alocar_memoria(threeAddress);
                if(strcmp($1->value,"CMD_WRITE_STR") == 0) {
                        sprintf(threeAddress + strlen(threeAddress), "call write_str, 1  \n");
                }else {
                        sprintf(threeAddress + strlen(threeAddress), "call writeln_str, 1 \n"); 
                }

                registrador = registrador+1;
                
        }
        | write_commands OPEN_PAREN expr CLS_PAREN SEMICOLON {
                $$->childNode = $3;
                        
                threeAddress = alocar_memoria(threeAddress);
                if($expr->registrador == -1){
                        Symbol *auxVar = findItem(activeScope, $expr->value);
                        if(auxVar != NULL ){ 
                            if(strcmp($1->value,"CMD_WRITE_STR") == 0) {
                                sprintf(threeAddress + strlen(threeAddress), "print $%d // print \n", auxVar->registrador);
                            }else {
                                sprintf(threeAddress + strlen(threeAddress), "println $%d // print \n", auxVar->registrador); 
                            }       
                        } 
                }else{
                        if(strcmp($1->value,"CMD_WRITE_STR") == 0) {
                             sprintf(threeAddress + strlen(threeAddress), "print $%d // print \n", $expr->registrador);
                        }else {
                              sprintf(threeAddress + strlen(threeAddress), "println $%d // print \n", $expr->registrador); 
                        } 
                }
        }
        | write_commands OPEN_PAREN char_expr CLS_PAREN SEMICOLON {
                $$->childNode = $3;
        }
        | CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, $var->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }
                $$ = buildNode("CMD_READ_VAR", 99);
                $$->childNode = $3;
        }
        | write_commands OPEN_PAREN error CLS_PAREN SEMICOLON {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
        | CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
;

write_commands:
      CMD_WRITE  {
              $$ = buildNode("CMD_WRITE_STR", 99);
      }
      | CMD_WRITELN {
              $$ = buildNode("CMD_WRITELN_STR", 99);
      }
;

iteration_expr:
        CMD_FOR OPEN_PAREN {
            // novo Scopo    
            Scope *newScope = buildScope("Block FOR");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        } assign SEMICOLON expr SEMICOLON assign CLS_PAREN simple_complex_block_stmt {     
             $$ = buildNode("for", 99);
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
                $$ = buildNode("if", 99);
                $$->childNode = $3;
                $3->brotherNode = $6;

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
        | CMD_IF OPEN_PAREN error CLS_PAREN error {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
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
                $$ = buildNode("if_stmt", 99);
                $$->childNode = $1;

                $$->brotherNode = buildNode("else", 99);
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
              $$ = buildNode("return", 99);  
        }
        | CMD_RETURN expr SEMICOLON  {
                int tipo;
                tipo = findTypeOfReturnFunc(activeScope);
                $$ = buildNode("return", tipo);  
                
                if(tipo != $2->type) {
                   char* cast;
                   cast = castToSpecificType(tipo, $2->type);
                   if(strcmp(cast,"Cast Error!") == 0){
                        printf("1 ERRRRROOOOOOOOOO NO castToSpecificType \n");   
                        globalError = globalError + 1;    
                   }     
                   $$->childNode = buildNode(cast, tipo);
                   $$->childNode->childNode = $2;
                }else{
                   $$->childNode = $2;
                }

                threeAddress = alocar_memoria(threeAddress);
                if($expr->registrador == -1){
                      Symbol *auxVar = findItem(activeScope, $expr->value);
                      if(auxVar != NULL ){ 
                        sprintf(threeAddress + strlen(threeAddress), "return $%d // return \n", auxVar->registrador);
                      } 
                }else{
                      sprintf(threeAddress + strlen(threeAddress), "return $%d // return %s \n", $expr->registrador, $expr->value);
                }
                
	       
                
        }
        | CMD_RETURN error SEMICOLON {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
        | CMD_RETURN expr error {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
;

set_stmt: 
        CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, $var->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }

                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        } simple_complex_block_stmt {
                $$ = buildNode("forall", 99);  
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
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, $3->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }
                undeclr = verifyUnDeclaration(activeScope, $5->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }
                
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        } simple_complex_block_stmt {
                $$ = buildNode("forall", 99);  
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
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
        | CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
        | CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
;
expr_stmt:
        expr SEMICOLON 
        | expr error {
                $$ = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
;

expr:
        op_or_expr 
        | func_expr
;

assign:
        var ATRIBUTION expr {

              if(strcmp($3->value,"EMPTY") == 0){
                printf("EMPTYYYYY %d %d \n",$1->type, $3->type);
              }  
              int undeclr;
              undeclr = verifyUnDeclaration(activeScope, $var->value, line, column);
              if(undeclr == 0){
                globalError = globalError + 1; 
              }
              $$ = buildNode(" = ", $1->type);
              $$->childNode = $1; 
              if($1->type != $3->type) {

                char* cast;
                cast = castToSpecificType($1->type, $3->type);
                if(strcmp(cast,"Cast Error!") == 0){
                     printf(" 2 ERRRRROOOOOOOOOO NO castToSpecificType! \n");   
                     globalError = globalError + 1;    
                }  
                $1->brotherNode = buildNode(cast, $1->type);
                $1->brotherNode->childNode = $3;  
              }else{
                $1->brotherNode = $3;
              }
              
              Symbol *auxVar = findItem(activeScope, $var->value);
              if(auxVar != NULL){
                threeAddress = alocar_memoria(threeAddress);
	        sprintf(threeAddress + strlen(threeAddress), "mov $%d, $%d // var %s = %s \n", auxVar->registrador, $expr->registrador, $var->value, $expr->value);
                $var->registrador = auxVar->registrador;
                $var->regis_tipo = "$";
              }
        }
;

func_expr: 
        ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN {
                $$ = buildNode(" add ", 99);
                $$->childNode = $3;
        }
        | REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN {
                $$ = buildNode(" remove ", 99);
                $$->childNode = $3;
        }
        | EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN {
                $$ = buildNode(" exist ", 99);
                $$->childNode = $3;
        }
        | ADD_FUNC OPEN_PAREN error CLS_PAREN {
             $$ = buildNode("SINTATIC ERR!", 10);   
        }
        | REMOVE_FUNC OPEN_PAREN error CLS_PAREN {
             $$ = buildNode("SINTATIC ERR!", 10);   
        } 
        | EXIST_FUNC OPEN_PAREN error CLS_PAREN {
             $$ = buildNode("SINTATIC ERR!", 10);    
        }
;

is_set_expr :
        IS_SET_FUNC OPEN_PAREN var CLS_PAREN {
              int undeclr;
              undeclr = verifyUnDeclaration(activeScope, $var->value, line, column);
              if(undeclr == 0){
                globalError = globalError + 1; 
              }
              $$ = buildNode(" is_set ", 99);
              $$->childNode = $3;
        }
        | IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN {
                $$ = buildNode(" is_set ", 99);
                $$->childNode = $3;
        }
        | IS_SET_FUNC OPEN_PAREN error CLS_PAREN {
             $$ = buildNode("SINTATIC ERR!", 10);   
             globalError= globalError+1; 
        }

func_in_expr:
        op_or_expr IN_OP var {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, $var->value, line, column);
                if(undeclr == 0){
                        printf(" op_or_expr IN_OP var ");  
                        globalError = globalError + 1; 
                }
                $$ = buildNode(" IN ", 99);
                $$->childNode = $1;
                $1->brotherNode = $3;
        }
        | op_or_expr IN_OP func_expr {
                $$ = buildNode(" IN ", 99);
                $$->childNode = $1;
                $1->brotherNode = $3;
        }
        /* | func_expr IN_OP op_or_expr {
                $$ = buildNode(" IN ");
                $$->childNode = $1;
                $1->brotherNode = $3;
        } */
;

op_or_expr: 
        op_or_expr OP_OR op_and_expr {  
              $$ = buildNode("or", 0);
              if($1->type != 0 && $3->type != 0){
                $$->childNode = buildNode(castToInt(0, $1->type), 0);
                $$->childNode->childNode = $1;
                TreeNodes *aux = buildNode(castToInt(0, $3->type), 0);
                $$->childNode->brotherNode = aux;
                aux->childNode = $3;    

              }else if($1->type != 0){
                $$->childNode = buildNode(castToInt(0, $1->type), 0);
                $$->childNode->childNode = $1;
                $$->childNode->brotherNode = $3;        

              }else if($3->type != 0){
                $$->childNode = $1;
                $1->brotherNode = buildNode(castToInt(0, $3->type), 0);
                $1->brotherNode->childNode = $3; 
              }else{
                $$->childNode = $1;
                $1->brotherNode = $3;
              }
              
              if($1->registrador == -1 && $3->registrador == -1){
                Symbol *aux1 = findItem(activeScope, $1->value);
                Symbol *aux3 = findItem(activeScope, $3->value);
                
                threeAddress = alocar_memoria(threeAddress);
                if(aux1 != NULL && aux3 != NULL){
                  sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, aux1->registrador, aux3->registrador, $1->value, $3->value);
                }           
              }else if($1->registrador != -1 && $3->registrador == -1){
                Symbol *aux1 = findItem(activeScope, $1->value);
                threeAddress = alocar_memoria(threeAddress);

                if(aux1 != NULL){
                  sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador,  aux1->registrador ,$3->registrador, $1->value, $3->value);
                }
              }else if($1->registrador != -1 && $3->registrador == -1){   
                Symbol *aux3 = findItem(activeScope, $1->value);
                threeAddress = alocar_memoria(threeAddress);
                if(aux3 != NULL){
                   sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, $1->registrador, aux3->registrador, $1->value, $3->value);
                }        
              }else{
                threeAddress = alocar_memoria(threeAddress);        
                sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, $1->registrador, $3->registrador, $1->value, $3->value);
              }   


        }
        | op_and_expr 
        | func_in_expr
;

op_and_expr:
        op_and_expr OP_AND logical_expr {
                $$ = buildNode("and", 0);

                if($1->registrador == -1 && $3->registrador == -1){
                  Symbol *aux1 = findItem(activeScope, $1->value);
                  Symbol *aux3 = findItem(activeScope, $3->value);
                        
                  threeAddress = alocar_memoria(threeAddress);
                  if(aux1 != NULL && aux3 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, aux1->registrador, aux3->registrador, $1->value, $3->value);
                   }           
                }else if($1->registrador != -1 && $3->registrador == -1){
                  Symbol *aux1 = findItem(activeScope, $1->value);
                  threeAddress = alocar_memoria(threeAddress);
                  if(aux1 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador,  aux1->registrador ,$3->registrador, $1->value, $3->value);
                  }
                }else if($1->registrador != -1 && $3->registrador == -1){   
                  Symbol *aux3 = findItem(activeScope, $1->value);
                  threeAddress = alocar_memoria(threeAddress);
                  if(aux3 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, $1->registrador, aux3->registrador, $1->value, $3->value);
                  }        
                }else{
                  threeAddress = alocar_memoria(threeAddress);        
                  sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, $1->registrador, $3->registrador, $1->value, $3->value);
                }     
                
                $$->registrador = registrador;
                $$->regis_tipo = "$"; 
                registrador = registrador+1;         

                if($1->type != 0 && $3->type != 0){
                   $$->childNode = buildNode(castToInt(0, $1->type), 0);
                   $$->childNode->childNode = $1;
                   TreeNodes *aux = buildNode(castToInt(0, $3->type), 0);
                        $$->childNode->brotherNode = aux;
                        aux->childNode = $3;    

                }else if($1->type != 0){
                        $$->childNode = buildNode(castToInt(0, $1->type), 0);
                        $$->childNode->childNode = $1;
                        $$->childNode->brotherNode = $3;        

                }else if($3->type != 0){
                        $$->childNode = $1;
                        $1->brotherNode = buildNode(castToInt(0, $3->type), 0);
                        $1->brotherNode->childNode = $3; 
                }else{
                        $$->childNode = $1;
                        $1->brotherNode = $3;
                }
        }
        | logical_expr 
;

logical_expr:
       logical_expr logical_ops arithmetic_expr {
              $$ = $2;
              //      $2->childNode = $1; 
              //      $1->brotherNode = $3;

              if($1->registrador == -1 && $3->registrador == -1){
                Symbol *aux1 = findItem(activeScope, $1->value);
                Symbol *aux3 = findItem(activeScope, $3->value);
                        
                threeAddress = alocar_memoria(threeAddress);
                if(aux1 != NULL && aux3 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac($2->value), registrador, aux1->registrador, aux3->registrador, $1->value, $3->value);
                } 

              }else if($1->registrador == -1 && $3->registrador != -1){  
                Symbol *aux1 = findItem(activeScope, $1->value); 
                threeAddress = alocar_memoria(threeAddress);  
                if(aux1 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac($2->value), registrador, aux1->registrador, $3->registrador, $1->value, $3->value);
                }

              }else if($1->registrador != -1 && $3->registrador == -1){
                Symbol *aux3 = findItem(activeScope, $1->value); 
                threeAddress = alocar_memoria(threeAddress);  
                if(aux3 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac($2->value), registrador, $1->registrador, aux3->registrador, $1->value, $3->value);
                }     
              }else {
                threeAddress = alocar_memoria(threeAddress);      
                sprintf(threeAddress + strlen(threeAddress), logical_ops_tac($2->value), registrador, $1->registrador, $3->registrador, $1->value, $3->value);
              }

              $2->registrador = registrador;
              $2->regis_tipo = "$"; 
              registrador = registrador+1;

              if($1->type != 0 && $3->type != 0){
                $$->childNode = buildNode(castToInt(0, $1->type), 0);
                $$->childNode->childNode = $1;
                TreeNodes *aux = buildNode(castToInt(0, $3->type), 0);
                $$->childNode->brotherNode = aux;
                aux->childNode = $3;    

              }else if($1->type != 0){
                $$->childNode = buildNode(castToInt(0, $1->type), 0);
                $$->childNode->childNode = $1;
                $$->childNode->brotherNode = $3;        

              }else if($3->type != 0){
                $$->childNode = $1;
                $1->brotherNode = buildNode(castToInt(0, $3->type), 0);
                $1->brotherNode->childNode = $3; 
              }else{
                $$->childNode = $1;
                $1->brotherNode = $3;
              } 
       } 
       | arithmetic_expr
;

arithmetic_expr: 
        arithmetic_expr adds_op mult_expr {
              
                if($1->registrador == -1 && $3->registrador == -1){
                        Symbol *aux1 = findItem(activeScope, $1->value);
                        Symbol *aux3 = findItem(activeScope, $3->value);
                        
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux1 != NULL && aux3 != NULL){
                            if(strcmp($2->value, "+") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, $1->value, $3->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, $1->value, $3->value);
                            }
                       }
                }else if($1->registrador == -1 && $3->registrador != -1){
                        Symbol *aux1 = findItem(activeScope, $1->value);
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux1 != NULL){
                            if(strcmp($2->value, "+") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "add $%d, $%d, $%d // var %s + var %s  \n", registrador,  aux1->registrador ,$3->registrador, $1->value, $3->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "sub $%d, $%d, $%d // var %s + var %s  \n", registrador,  aux1->registrador, $3->registrador, $1->value, $3->value);
                            }
                       }
                }else if($1->registrador != -1 && $3->registrador == -1){
                        Symbol *aux3 = findItem(activeScope, $3->value);
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux3 != NULL){
                            if(strcmp($2->value, "+") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "add $%d, $%d, $%d // var %s + var %s  \n", registrador,  $1->registrador ,aux3->registrador, $1->value, $3->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "sub $%d, $%d, $%d // var %s + var %s  \n", registrador,  $1->registrador, aux3->registrador, $1->value, $3->value);
                            }
                       }
                }else{
                        threeAddress = alocar_memoria(threeAddress);   
                        if(strcmp($2->value, "+") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "add $%d, $%d, $%d // var %s + var %s  \n", registrador,  $1->registrador ,$3->registrador, $1->value, $3->value);
                        }else{
                                sprintf(threeAddress + strlen(threeAddress), "sub $%d, $%d, $%d // var %s + var %s  \n", registrador,  $1->registrador, $3->registrador, $1->value, $3->value);
                        }
                }
              

              $2->registrador = registrador;
              $2->regis_tipo = "$"; 
              registrador = registrador+1;

              if($1->type != $3->type) {
                $$ = $2;
                $2->type = typeNodo($1->type, $3->type);

                // faz o cast a esquerda ou a direita
                if( ($1->type == 0 && ($3->type == 1 || $3->type == 3)) || ($1->type == 1 && $3->type == 3) ){
                    char* cast;
                    cast = castType($1->type, $3->type);
                    if(strcmp(cast,"Cast Error!") == 0){
                        printf("3 ERRRRROOOOOOOOOO NO castType ");   
                        globalError = globalError + 1;    
                    }    
                    $2->childNode = buildNode(cast, typeNodo($1->type, $3->type));
                    $2->childNode->childNode = $1;
                    $2->brotherNode = $3;
                }else{
                    $2->childNode = $1;
                    char* cast;
                    cast = castType($1->type, $3->type);
                    if(strcmp(cast,"Cast Error!") == 0){
                        printf("4 ERRRRROOOOOOOOOO NO castType ");   
                        globalError = globalError + 1;    
                    }
                    $1->brotherNode = buildNode(cast, typeNodo($1->type, $3->type));
                    $1->brotherNode->childNode = $3;
                }
                
              }else {
                $$ = $2;
                $2->type = $1->type;
                $$->childNode = $2;
                $2->childNode = $1;
                $1->brotherNode = $3;
              }
        }
        | mult_expr
;

mult_expr:
        mult_expr mult_ops first_term {

              if($1->registrador == -1 && $3->registrador == -1){
                Symbol *aux1 = findItem(activeScope, $1->value);
                Symbol *aux3 = findItem(activeScope, $3->value);
                printf(" %s mul \n",$2->value);
                if(aux1 != NULL && aux3 != NULL){
                        threeAddress = alocar_memoria(threeAddress);
                        if(strcmp($2->value, "*") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "mul $%d, $%d, $%d // var %s */ var %s  \n", registrador, aux1->registrador, aux3->registrador, $1->value, $3->value);   
                        }else{
                                sprintf(threeAddress + strlen(threeAddress), "div $%d, $%d, $%d // var %s */ var %s  \n", registrador, aux1->registrador, aux3->registrador, $1->value, $3->value);
                        } 
                }
              }else if($1->registrador == -1 && $3->registrador != -1){
                        Symbol *aux1 = findItem(activeScope, $1->value);
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux1 != NULL){
                            if(strcmp($2->value, "*") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "mul $%d, $%d, $%d // var %s + var %s  \n", registrador,  aux1->registrador ,$3->registrador, $1->value, $3->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "div $%d, $%d, $%d // var %s + var %s  \n", registrador,  aux1->registrador, $3->registrador, $1->value, $3->value);
                            }
                       }
                }else if($1->registrador != -1 && $3->registrador == -1){
                        Symbol *aux3 = findItem(activeScope, $3->value);
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux3 != NULL){
                            if(strcmp($2->value, "*") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "mul $%d, $%d, $%d // var %s + var %s  \n", registrador,  $1->registrador ,aux3->registrador, $1->value, $3->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "div $%d, $%d, $%d // var %s + var %s  \n", registrador,  $1->registrador, aux3->registrador, $1->value, $3->value);
                            }
                       }
                }else{
                        threeAddress = alocar_memoria(threeAddress);   
                        if(strcmp($2->value, "*") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "mul $%d, $%d, $%d // var %s + var %s  \n", registrador,  $1->registrador ,$3->registrador, $1->value, $3->value);
                        }else{
                                sprintf(threeAddress + strlen(threeAddress), "div $%d, $%d, $%d // var %s + var %s  \n", registrador,  $1->registrador, $3->registrador, $1->value, $3->value);
                        }
                }

              $2->registrador = registrador;
              $2->regis_tipo = "$"; 
              registrador = registrador+1;
              
              if($1->type != $3->type) {
                $$ = $2;
                $2->type = typeNodo($1->type, $3->type);

                // faz o cast a esquerda ou a direita
                if(($1->type == 0 && ($3->type == 1 || $3->type == 3)) || ($1->type == 1 && $3->type == 3)){
                    char* cast;
                    cast = castType($1->type, $3->type);
                    if(strcmp(cast, "Cast Error!") == 0){
                        printf("5 ERRRRROOOOOOOOOO NO castType");   
                        globalError = globalError + 1;    
                    }    
                    $2->childNode = buildNode(cast, typeNodo($1->type, $3->type));
                    $2->childNode->childNode = $1;
                    $2->brotherNode = $3;
                }else {
                    $2->childNode = $1;
                    char* cast;
                    cast = castType($1->type, $3->type);
                    if(strcmp(cast,"Cast Error!") == 0){
                        printf("6 ERRRRROOOOOOOOOO NO castType");   
                        globalError = globalError + 1;    
                    }  
                    $1->brotherNode = buildNode(cast, typeNodo($1->type, $3->type));
                    $1->brotherNode->childNode = $3;
                }
              }else{
                $$ = $2;
                $2->type = $1->type;
                $$->childNode = $2; 
                $2->childNode = $1;
                $1->brotherNode = $3;          
              }
        }
        | first_term
;

first_term: 
        term
        | OP_NEG term {
              $$ = buildNode(" ! ", $term->type);
              $$->childNode = $2;
        } 
        | adds_op term {
              $$ = $1;
              $1->type = $term->type;
              $1->childNode = $2;
        }
        | var OPEN_PAREN list_expr CLS_PAREN {
                int funcDeclr;
                funcDeclr = verifyFuncDeclaration(activeScope, $var->value, line, column, numListArgs);
                if(funcDeclr == 0){
                   globalError = globalError + 1; 
                }

                threeAddress = alocar_memoria(threeAddress);
	        sprintf(threeAddress + strlen(threeAddress), "call %s, %d // call \n", $var->value, numListArgs);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "pop $%d // pop \n", registrador);

                registrador = registrador + 1;
                numListArgs = 0;
                $$ = $1;
                $1->type = $3->type;
                $1->brotherNode = $3;
        }
        | var OPEN_PAREN CLS_PAREN {
                int funcDeclr;
                funcDeclr = verifyFuncDeclaration(activeScope, $var->value, line, column, 0);
                if(funcDeclr == 0){
                   globalError = globalError + 1; 
                }

                threeAddress = alocar_memoria(threeAddress);
	        sprintf(threeAddress + strlen(threeAddress), "call %s, %d // call \n", $var->value, numListArgs);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "pop $%d // pop \n", registrador);

                registrador = registrador + 1;
        }
        | var OPEN_PAREN error CLS_PAREN {
                $$ = buildNode("SINTATIC ERR!", 10);
        }
        | error OPEN_PAREN  CLS_PAREN {
                $$ = buildNode("SINTATIC ERR!", 10);
        }
; 

term: 
        var {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, $var->value, line, column);
                if(undeclr == 0){
                   globalError = globalError + 1; 
                }
        }
        | num_tipos  
        | OPEN_PAREN expr CLS_PAREN {
                $$ = $2;
        }
        | EMPTY {
              $$ = buildNode("EMPTY 2", 2);
        }
        | OPEN_PAREN error  CLS_PAREN {
                $$ = buildNode("SINTATIC ERR!", 10);
        }
;

logical_ops: 
        LT_OP {
                $$ = buildNode("LT_OP", 0);
        }
        |  LTE_OP {
                $$ = buildNode("LTE_OP", 0);
        }  
        |  GT_OP {
                $$ = buildNode("GT_OP", 0);
        } 
        |  GTE_OP {
                $$ = buildNode("GTE_OP", 0);
        }
        |  NEQ_OP {
                $$ = buildNode("NEQ_OP", 0);
        }
        |  EQUAL_OP {
                $$ = buildNode("EQUAL_OP", 0);
        }
;

str_expr:
        STRING {
            $$ = buildNode($1, 99);
            table = alocar_memoria(table);
            sprintf(table + strlen(table), " char str_char%d[]=%s \n", registrador, $1);
            $$->registrador = registrador;
            free($1);
        }
;

char_expr:
        CHARACTER {
            $$ = buildNode($1, 99);
            free($1);
        }
;

list_expr:
        expr COMMA list_expr {
                numListArgs = numListArgs + 1;
                if($expr->registrador == -1){
                     Symbol *aux1 = findItem(activeScope, $1->value);
                     threeAddress = alocar_memoria(threeAddress);
                     if(aux1 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "param $%d // var %s \n", aux1->registrador, $expr->value);
                     }
                }else{
                        sprintf(threeAddress + strlen(threeAddress), "param $%d // var %s \n", $expr->registrador, $expr->value);
                }
        }
        | expr {
                numListArgs = numListArgs + 1;
                if($expr->registrador == -1){
                     Symbol *aux1 = findItem(activeScope, $1->value);
                     threeAddress = alocar_memoria(threeAddress);
                     if(aux1 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "param $%d // var %s \n", aux1->registrador, $expr->value);
                     }
                }else{
                        sprintf(threeAddress + strlen(threeAddress), "param $%d // var %s \n", $expr->registrador, $expr->value);
                }
        }
        | error COMMA error {
             $$ = buildNode("SINTATIC ERR!", 10);   
        }
;

var:
      ID {
            $$ = buildNode($1, findTypeItem(activeScope,$1));
            free($1);
       } 
;

adds_op:
      ADD_OP {
            $$ = buildNode($1, 99); 
            free($1); 
      } 
;

mult_ops:
      MULT_OP {
              $$ = buildNode($1, 99); 
              free($1);
      }
;

num_tipos: 
        FLOAT {
              $$ = buildNode($1, 1);
              $$->registrador = registrador;
              $$->regis_tipo = "$";
              threeAddress = alocar_memoria(threeAddress);
	      sprintf(threeAddress + strlen(threeAddress), "mov $%d, %s  // num %s\n", registrador, $$->value, $$->value);
              registrador = registrador + 1;
              free($1);
        
        }
        | INT {
              $$ = buildNode($1, 0);
              $$->registrador = registrador;
              $$->regis_tipo = "$";
              threeAddress = alocar_memoria(threeAddress);
	      sprintf(threeAddress + strlen(threeAddress), "mov $%d, %s  // num %s\n", registrador, $$->value, $$->value);
              registrador = registrador + 1;
              free($1);
        }
;

tipos: 
        TYPE_INT {
             $$ = buildNode("TYPE_INT", 0);
        }    
        | TYPE_FLOAT {
              $$ = buildNode("TYPE_FLOAT", 1);
        }
        | TYPE_SET  {
              $$ = buildNode("TYPE_SET", 2);
        } 
        | TYPE_ELEM {
             $$ = buildNode("TYPE_ELEM", 3);
        }
;
%%


int yyerror(const char* errormsg) {
  printf(" ----------------------------- SYNTACTIC ERROR ---------------------------------------------- \n");
  fprintf(stderr, " %s at line:%d, column:%d,\n", errormsg, line, column);
  printf(" ------------------------------------------------------------------------------------ \n");
  printf("\n");
  globalError = globalError+1;
  return 0;
}

int main(int argc, char *argv[]) {
   
     yyin = fopen(argv[1], "r");
     activeScope = buildScope("GLOBAL SCOPE");  
     // insere as funcoes
     threeAddress = alocar_memoria(threeAddress);
     threeAddress = func_write(threeAddress);
     threeAddress = func_writeln(threeAddress);

     yyparse();
     
     showScope(activeScope);
     freeScope(activeScope);
     
     if(globalError == 0 && isMain == 1 ){
        FILE *tac;
        tac = fopen("three_address.tac", "w+");
        fprintf(tac, ".table\n"); // constante de string 
        if (table){
          fprintf(tac, "%s", table);
        } 
        fprintf(tac, ".code\n\n");
        fprintf(tac, "%s", threeAddress);
        fclose(tac);
     }
      free(threeAddress);
     
     // erros
     errorMain(isMain);

     showTree(origin, 0); 
     clearTree(origin);
    
     fclose(yyin);
     yylex_destroy();
     return 0;
}