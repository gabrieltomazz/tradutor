#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

TreeNodes* buildNode(char *value) {
  
  TreeNodes* treeBranch = (TreeNodes*) malloc(sizeof(TreeNodes));
  
  treeBranch->value = strdup(value);
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
    printf(" <%s> \n", branch->value);
  } else {

    for(int i = 0; i < depth; i++){
      printf(" | ");
    }

    printf(" <%s>", branch->value);

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