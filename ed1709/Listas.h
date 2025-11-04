#ifndef Listas_H
#define Listas_H
#include <stdbool.h>

typedef struct _Lista LISTAS;

LISTAS* criar_lista();

LISTAS* concatenalistas(LISTAS*, LISTAS*);
/**
 * @param listX - Primeira lista
 * @param listY - Segunda lista
 * @return Soma a primeira e a segunda lista e a retorna em uma listaC
 */
void lista_print(LISTAS*);
/**
 * 
 * 
 */
bool TStaticList_insert_begin(LISTAS*, int );
#endif