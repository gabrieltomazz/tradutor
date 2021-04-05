#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

TreeNodes* buildNode(char *value) {
  
  TreeNodes* treeBranch = (TreeNodes*) malloc(sizeof(TreeNodes));
  
  treeBranch->value = strdup(value);
  treeBranch->brotherNode = NULL;
  treeBranch->childNode = NULL;
  // treeBranch->simbolo = NULL;
  
  return treeBranch;
}

void clearTree(TreeNodes *branch) {
  if(!branch) {
    return;
  }
  // if(branch->simbolo) {
  //   free(branch->simbolo->body);
  //   free(branch->simbolo);
  // }
  
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
    printf("\n < ------------------- Starting -> Syntactic Tree ------------------- >\n");
    printf(" <%s> \n", branch->value);
  } else {

    for(int i = 0; i < depth; i++){
      printf(" | ");
    }

    printf(" <%s>", branch->value);

  }

  
  // if(branch->simbolo) {
  //   printf(" [ simbolo -> %s ]", branch->simbolo->body);
  // }

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