#ifndef DUPENCAD_H
#define DUPENCAD_H
#include <stdbool.h>

typedef struct _list lista;

lista* lista_create();

bool lista_insert_begin(lista*, int);
bool lista_insert_end(lista*, int);

void lista_print(lista*);

/**
 * Tenta encontrar e deletar um nó com a informação é igual ao parâmetro.
 * @param lista* ponteiro para a lista
 * @param int inteiro a ser buscado na lista
 * @return bool Informando o sucesso ou fracasso da operação
 */
bool lista_try_to_delete(lista*, int);

#endif