#ifndef def_table
#define def_table

typedef struct Symbol Symbol;
typedef struct Scope Scope;

struct Symbol{
    char* id;
    char* type;
    int line;
    int col;
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

#endif