#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

TreeNodes* buildNode(char *value, int type) {
  
  TreeNodes* treeBranch = (TreeNodes*) malloc(sizeof(TreeNodes));
  
  treeBranch->value = strdup(value);
  treeBranch->type = type;
  treeBranch->brotherNode = NULL;
  treeBranch->childNode = NULL;
  
  return treeBranch;
}

void clearTree(TreeNodes *branch) {
  if(!branch) {
    return;
  }
  
  if(branch->brotherNode){
    clearTree(branch->brotherNode);
  }
  if(branch->childNode) {
    clearTree(branch->childNode);
  }
  free(branch->value);
  free(branch);

}

void showTree(TreeNodes *branch, int depth) {
  if (!branch) {
    return;
  }

  if(depth == 0) {
    printf("\n < ------------------- Starting -> Sintatic Tree ------------------- >\n");
    printf(" <%s>  type: %d \n", branch->value, branch->type);
  } else {

    for(int i = 0; i < depth; i++){
      printf(" | ");
    }

    printf(" <%s> ty %d ", branch->value , branch->type);

  }

  if(depth > 0) {
    printf("\n");
  } 

  if(branch->childNode) {
    showTree(branch->childNode, depth+1);
  }

  if(branch->brotherNode) {
    showTree(branch->brotherNode, depth);
  }

}

void readExpr(TreeNodes *aux) {
  // while(aux != NULL) {
  //   printf(" Tipo, Valor: %s \n",aux->value);
  //   if(aux->brotherNode != NULL) {
  //         readExpr(aux->brotherNode);
  //         // aux = aux->brotherNode;
  //   }else{
  //         readExpr(aux->childNode);
  //         // aux = aux->childNode;                 
  //   }
    
  // }

  while(aux != NULL) {
    printf(" Tipo:%d , Valor: %s \n",aux->type, aux->value);
    if(aux->brotherNode != NULL) {
          if(aux->childNode){
            readExpr(aux->childNode);
          }
          aux = aux->brotherNode;
    }else{
          aux = aux->childNode;                 
    }
    
  }
}
char* castType( int type1, int type2) {

  // 0:int 1:float 2:set 3:elem, 10:error, 99:empty;

  if((type1 == 0 && type2 == 1) || (type1 == 1  && type2 == 0)){
    return "intToFloat";
  }else if((type1 == 0 && type2 == 3) || (type1 == 3  && type2 == 0)){
    return "intToElem";
  }else if((type1 == 1  && type2 == 3) || (type1 == 3  && type2 == 1)){
    return "floatToElem";
  }else{
    return "Cast Error!";
  }
}

char* castToSpecificType( int type1, int type2) { 
  if(type1 == 0 && type2 == 1){
    return "floatToInt";
  }else if(type1 == 0 && type2 == 3){
    return "elemToInt";
  }else if(type1 == 1 && type2 == 0){
    return "intToFloat";
  }else if(type1 == 1 && type2 == 3){
    return "elemToFloat";
  }else if(type1 == 3 && type2 == 0){
    return "intToElem";
  }else if(type1 == 3 && type2 == 1){
    return "floatToElem";
  }else{
    return "Cast Error!";
  }
}

char* castToInt( int type1, int type2) { 
  if(type1 == 0 && type2 == 1){
    return "floatToInt";
  }else if(type1 == 0 && type2 == 3){
    return "elemToInt";
  }else{
    return "Cast Error!";
  }
}

int typeNodo( int type1, int type2) {

  // 0:int 1:float 2:set 3:elem, 10:error, 99:empty;
  if((type1 == 0 && type2 == 1) || (type1 == 1  && type2 == 0)){
    return 1;
  }else if((type1 == 0 && type2 == 3) || (type1 == 3  && type2 == 0) || (type1 == 1  && type2 == 3) || (type1 == 3  && type2 == 1)){
    return 3;
  }else{
    return 10;
  }
}