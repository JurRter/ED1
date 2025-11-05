#include "DupEncade.h"
#include <stdio.h>
int main(){
    lista* list = lista_create();
    int V[] = {1, 2, 3, 2, 3, 3, 3, 1, 5, 7, 2};
    for(int i=0; i<11; i++)
        if(!lista_insert_end(list, V[i]))
            printf("Erro ao inserir o elemento V[%i]=%i\n", i, V[i]);
    lista_print(list);
    lista_try_to_delete(list, 1);
    lista_try_to_delete(list, 3);
    lista_print(list);//Sobra apenas o nó 2
    lista_try_to_delete(list, 7);
    lista_print(list);
    lista_try_to_delete(list, 2);
    lista_print(list);
    return 0;
}