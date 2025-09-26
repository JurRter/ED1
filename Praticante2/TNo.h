#ifndef TNO_H
#define TNO_H
#include <stdbool.h>

typedef struct _Tno no;

typedef struct _list LISTA;





void prinLISTA(LISTA* list);

bool iniLISTA(LISTA* list, int info);

no* criarNO(int info);


LISTA* criarLISTA();

















#endif