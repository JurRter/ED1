#include <stdio.h>
#include "Listas.h"
#include <stdlib.h>
int main(){
    LISTAS* lista1 = criar_lista();
    LISTAS* lista2 = criar_lista();
    for(int i=0; i<24; i++){
        if(i%2 != 0){
            //Vai dar erro aqui até que você faça a codificação correta desta função
            if(!TStaticList_insert_begin(lista1, i))
                printf("Erro ao inserir o elemento %d na lista de impares!\n", i);
        }
        else
            if(!TStaticList_insert_begin(lista2, i))
                printf("Erro ao inserir o elemento %d na lista de pares!\n", i);
    
    }
    lista_print(lista1);
    lista_print(lista2);

    LISTAS* lista3 = concatenalistas(lista1, lista2);

    lista_print(lista3);
}