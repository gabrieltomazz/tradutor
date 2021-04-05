#ifndef TREE
#define TREE

typedef struct TreeNodes TreeNodes;

struct TreeNodes {
  struct TreeNodes* brotherNode;
  struct TreeNodes* childNode; 
  char* value;
};

TreeNodes* buildNode(char*);
void showTree(TreeNodes*, int);
void clearTree(TreeNodes *);

#endif