#include "symbol_table.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
    return item;
    
    // if(!*table){
    //     (*table) = (Symbol *)malloc(sizeof(Symbol));
    //     (*table)->next = NULL;
    //     // (*table)->scope = NULL;
    //     (*table)->id = strdup(id);
    //     (*table)->type = strdup(type);
    //     (*table)->line = line;
    // }else{

        
        // Symbol *aux = *table;

        // while(aux->next != NULL){
        //     aux = aux->next;
        // }
        // aux->next = item;
 
    // }
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
            printf(" |   TYPE: %-12s | ID: %-12s  | line: %-3d \n", aux->type, aux->id, aux->line );      
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

