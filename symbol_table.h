#ifndef def_table
#define def_table

typedef struct Symbol Symbol;
typedef struct Scope Scope;

struct Symbol{
    char* id;
    char* type;
    int line;
    int col;
    int isFunction;
    int numArgs;
    Symbol *next;
    Scope *scope;
    char* regis_tipo;
    int registrador;
};

struct Scope {
    char* scopeName;
    Scope *parentScope;
    Symbol *listSymbol;
    int jump;
};

void showTable(Symbol *table);
void freeTable(Symbol *table);
void insertItem(Scope *scope, Symbol* item);
Symbol *createItem(char *type, char *id, int line, int isFunction);
Scope  *buildScope(char *scopeName);
void showScope(Scope *scope);
void freeScope(Scope *scope);
void errorMain(int);
int verifyReDeclaration(Scope *scope, char* var, int line, int column);
int verifyUnDeclaration(Scope *scope, char* var, int line, int column);
int verifyFuncDeclaration(Scope *scope, char* var, int line, int column, int numArgsFunc);
int isDeclared(Scope *scope, char* var, int declared);
int isDeclaredInScope(Scope *scope, char* var, int declared);
int isDeclaredFunc(Scope *scope, char* var, int declared);
int findTypeItem(Scope *scope, char* var);
Symbol *findItem(Scope *scope, char* var);
int findTypeOfReturnFunc(Scope *scope);
Symbol *findReturnFunc(Scope *scope, char* var);

#endif