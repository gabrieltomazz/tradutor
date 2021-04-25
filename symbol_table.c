#include "symbol_table.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Symbol *itemFuncAux;

void showTable(Symbol *table) {

    if(table == NULL){
        printf("EMPTY TABLE \n");
        return;
    }

    Symbol *aux = table;
    printf(" | ----- Symbol Table -----  \n");
    while(aux){
        printf(" |   TYPE: %-12s | ID: %-12s  | line: %-3d \n", aux->type, aux->id, aux->line );                          
        aux = aux->next;
    }

}

void freeTable(Symbol *table){
    if(!table) {
        return;
    }
    
    if(table->next){
        freeTable(table->next);
    }

    free(table->id);
    free(table->type);
    free(table);
}


Symbol *createItem(char *type, char *id, int line) {

    Symbol *item = (Symbol *)malloc(sizeof(Symbol));
    item->next = NULL;
    // item->scope = NULL;
    item->id = strdup(id);
    item->type = strdup(type);
    item->line = line;
    if(!strcmp(type, "FUNCTION")){
        item->isFunction = 1;
    }else{
        item->isFunction = 0;
    }
    item->numArgs = 0;
    return item;
}

void insertItem(Scope *activeScope, Symbol* aux){

    if(!activeScope->listSymbol){
        activeScope->listSymbol = aux;
    }else{
        Symbol *auxSymbol = activeScope->listSymbol;
        
        while(auxSymbol->next){
                auxSymbol = auxSymbol->next;
        }
        auxSymbol->next = aux;
    }
}

Scope *buildScope(char *scopeName) {

    Scope *scope;
    scope = (Scope *)malloc(sizeof(Scope));
    scope->parentScope = NULL;
    scope->scopeName = strdup(scopeName);
    scope->listSymbol = NULL;
    return scope;

}

void showScope(Scope *scope) {

    if(scope == NULL){
        printf("EMPTY SCOPE \n");
        return;
    }

    printf(" | ----- Begin Scope: %-12s ------------------  \n",scope->scopeName);                         
    
    Symbol *aux = scope->listSymbol; 
    if(aux == NULL ) {
        printf(" | --------------- Empty Scope ---------------------   \n");
    }else{
        printf(" | --------------- Symbol Table ---------------------   \n");
    
        while (aux)
        {
            printf(" |   TYPE: %-12s | ID: %-12s | line: %-3d | ISFUNCTION: %-4s | NUMARGS: %-2d \n", aux->type, aux->id, aux->line, aux->isFunction == 1 ? "YES":"NO", aux->numArgs );      
            aux = aux->next;
        }
    }
    printf(" | ----- End Scope: %-12s --------------------  \n",scope->scopeName); 
    printf(" \n");
    
}

void errorMain(int isMain){

    if(isMain == 0){
             printf(" ----------------------------- SEMANTIC ERROR ---------------------------------------------- \n");
             printf("                              Main Undeclared                                                \n");
             printf(" ------------------------------------------------------------------------------------------- \n");
             printf("\n");
     }else if(isMain > 1){
             printf(" ----------------------------- SEMANTIC ERROR ---------------------------------------------- \n");
             printf("                              Main already declared                                          \n");
             printf(" ------------------------------------------------------------------------------------------- \n");
             printf("\n");
     }
}

void verifyReDeclaration(Scope *scope, char* var, int line, int column) {
    int aux;
    aux = isDeclaredInScope(scope, var, 0);

    if(aux == 1){
        printf(" ----------------------------- SEMANTIC ERROR ---------------------------------------------- \n");
        printf(" Error: Redeclaration Variable: %s - at line: %d column: %d                                                         \n", var ,line ,column);
        printf(" ------------------------------------------------------------------------------------------- \n");
        printf("\n");
    }

}

void verifyUnDeclaration(Scope *scope, char* var, int line, int column) {
    int aux;
    aux = isDeclared(scope, var, 0);
    // printf("verifyUnDeclaration: %s \n", var);
    if(aux == 0){
        printf(" ----------------------------- SEMANTIC ERROR ---------------------------------------------- \n");
        printf(" Error: Undeclared Variable: %s - at line: %d column: %d                                                         \n", var ,line ,column);
        printf(" ------------------------------------------------------------------------------------------- \n");
        printf("\n");
    }
}

void verifyFuncDeclaration(Scope *scope, char* var, int line, int column, int numArgsFunc) {
    int aux;
    aux = isDeclaredFunc(scope, var, 0);

    if(aux == 0){
        printf(" ----------------------------- SEMANTIC ERROR ---------------------------------------------- \n");
        printf(" Error: Undeclared Function: %s - at line: %d column: %d                                                         \n", var ,line ,column);
        printf(" ------------------------------------------------------------------------------------------- \n");
        printf("\n");
    }else{
        if(itemFuncAux->numArgs != numArgsFunc){
            printf(" ----------------------------- SEMANTIC ERROR ---------------------------------------------- \n");
            if(numArgsFunc > itemFuncAux->numArgs){
                printf(" Error: too many arguments to function %s - at line: %d column: %d                                                         \n", var ,line ,column);
            }else{
                printf(" Error: too few arguments to function %s - at line: %d column: %d                                                         \n", var ,line ,column);
            }
            printf(" ------------------------------------------------------------------------------------------- \n");
            printf("\n");
        }
    }

}

int isDeclaredInScope(Scope *scope, char* var, int declared) {

    Symbol *item;

    for(item = scope->listSymbol; item != NULL; item = item->next){
        int comp = strcmp(item->id, var);
        if(!comp){
            return 1;
        }
    }

    // if(scope->parentScope) declared = isDeclared(scope->parentScope, var, 0);

    return declared;
}

int isDeclared(Scope *scope, char* var, int declared) {

    Symbol *item;

    for(item = scope->listSymbol; item != NULL; item = item->next){
        int comp = strcmp(item->id, var);
        // printf(" varivael %s: \n", item->id);
        // printf(" item da lista %s: \n", var);
        if(!comp){
            return 1;
        }
    }

    if(scope->parentScope) declared = isDeclared(scope->parentScope, var, 0);

    return declared;
}

int isDeclaredFunc(Scope *scope, char* var, int declared) {

    Symbol *item;

    for(item = scope->listSymbol; item != NULL; item = item->next){
        int comp = strcmp(item->id, var);
        if(!comp && item->isFunction == 1){
            itemFuncAux = item;
            return 1;
        }
    }

    if(scope->parentScope) declared = isDeclaredFunc(scope->parentScope, var, 0);

    return declared;
}


void freeScope(Scope *scope){

    if(!scope) {
        return;
    }
    
    // if(scope->parentScope){
    //     freeScope(scope->parentScope);
    // }

    free(scope->scopeName);
    free(scope->listSymbol);
    free(scope);

}

