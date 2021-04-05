#ifndef def_table
#define def_table

typedef struct Symbol Symbol;

struct Symbol{
    char* id;
    char* type;
    Symbol *next;
};

void showTable(Symbol *table);
void freeTable(Symbol *table);
void insertItem(Symbol **table, char *type, char *id);

#endif