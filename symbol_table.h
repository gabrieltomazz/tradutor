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
};

struct Scope {
    char* scopeName;
    Scope *parentScope;
    Symbol *listSymbol;
};

void showTable(Symbol *table);
void freeTable(Symbol *table);
void insertItem(Scope *scope, Symbol* item);
Symbol *createItem(char *type, char *id, int line);
Scope  *buildScope(char *scopeName);
void showScope(Scope *scope);
void freeScope(Scope *scope);
void errorMain(int);
void verifyReDeclaration(Scope *scope, char* var, int line, int column);
void verifyUnDeclaration(Scope *scope, char* var, int line, int column);
void verifyFuncDeclaration(Scope *scope, char* var, int line, int column, int numArgsFunc);
int isDeclared(Scope *scope, char* var, int declared);
int isDeclaredInScope(Scope *scope, char* var, int declared);
int isDeclaredFunc(Scope *scope, char* var, int declared);
int findTypeItem(Scope *scope, char* var);
Symbol *findItem(Scope *scope, char* var);
int findTypeOfReturnFunc(Scope *scope);
Symbol *findReturnFunc(Scope *scope, char* var);

#endif