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
  treeBranch->registrador = -1;
  
  return treeBranch;
}

void clearTree(TreeNodes *branch) {
  if(!branch) {
    return;
  }
  free(branch->value);
  if(branch->brotherNode){
    clearTree(branch->brotherNode);
  }
  if(branch->childNode) {
    clearTree(branch->childNode);
  }
  
  free(branch);

}

void showTree(TreeNodes *branch, int depth) {
  if (!branch) {
    return;
  }

  if(depth == 0) {
    printf("\n < ------------------- Starting -> Sintatic Tree ------------------- >\n");
    printf(" <%s> \n", branch->value);
  } else {

    for(int i = 0; i < depth; i++){
      printf(" | ");
    }

    printf(" <%s> ", branch->value);

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