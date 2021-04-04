#ifndef TREE
#define TREE

typedef struct TreeNodes TreeNodes;

struct TreeNodes {
  struct TreeNodes* brotherNode; // proximo
  struct TreeNodes* childNode; // filho
  // Simbolo* simbolo;
  char* value;
};

TreeNodes* buildNode(char*);
void showTree(TreeNodes*, int);
void clearTree(TreeNodes *);

#endif