#ifndef intb_H
#define intb_H
#include <stdbool.h>

typedef struct no NO;
typedef struct list LISTA;

NO* criarNO(int info);
LISTA* criarLISTA();
bool iniLISTA(LISTA* list, int info);
bool fimLISTA(LISTA* list, int info);
void printLISTA(LISTA* list);
bool ebacana(LISTA* list);
void conversão(LISTA* list ,int numero);
int somaBacana(int numero);
#endif