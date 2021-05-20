#ifndef TREE
#define TREE

typedef struct TreeNodes TreeNodes;

struct TreeNodes {
  struct TreeNodes* brotherNode;
  struct TreeNodes* childNode; 
  char* value;
  int type; // 0:int 1:float 2:set 3:elem, 10:error, 99:empty
  char* regis_tipo;
  int registrador;
};

TreeNodes* buildNode(char*, int);
void showTree(TreeNodes*, int);
void clearTree(TreeNodes *);
char* castType(int type1, int type2);
char* castToSpecificType( int type1, int type2);
char* castToInt( int type1, int type2);
int typeNodo(int type1, int type2);

#endif