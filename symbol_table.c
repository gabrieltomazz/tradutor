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
        printf(" |   TYPE: %s | ID: %s   \n", aux->type, aux->id);
                                       
        aux = aux->next;
    }

}
void freeTable(Symbol *table){

}


void insertItem(Symbol **table, char *type, char *id) {

    if(!*table){
        (*table) = (Symbol *)malloc(sizeof(Symbol));
        (*table)->next = NULL;
        (*table)->id = strdup(id);
        (*table)->type = strdup(type);
    }else{

        Symbol *item = (Symbol *)malloc(sizeof(Symbol));
        item->next = NULL;
        item->id = strdup(id);
        item->type = strdup(type);

        Symbol *aux = *table;

        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = item;
 
    }
    
}

