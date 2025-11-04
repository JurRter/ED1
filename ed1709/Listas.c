#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Listas.h"
#define MAX 50

struct _Lista{
    int qty;
    int info[MAX];
};

bool lista_is_empty(LISTAS* list){
    return list->qty == 0;
}
bool lista_is_full(LISTAS* list){
    return list->qty == MAX;
}

LISTAS* criar_lista(){
    LISTAS* new = malloc(sizeof(LISTAS));
    if(new != NULL){
        new->qty = 0;
    }
    return new;
}

LISTAS* concatenalistas(LISTAS* listX, LISTAS* listY){
    if((listX != NULL && listY != NULL) && (!lista_is_empty(listX) && !lista_is_empty(listY))){
        if (listX->qty + listY->qty >= MAX){
            puts("Lista muito grande para ser concatenada");
            return false;
        }
        LISTAS* listaC = criar_lista();
        for(int i = 0; i < listX->qty; i++){
            listaC->info[i] = listX->info[i];
            listaC->qty++;
        }
        for(int i = 0; i < listY->qty; i++){
            listaC->info[i+listX->qty] = listY->info[i];
            listaC->qty++;
        }
        return listaC;
    }
    return false;
}

void lista_print(LISTAS* lista){
    if(lista){
        if(lista_is_empty(lista))
            puts("Lista vazia!");
        else{
            for(int i=0; i<lista->qty; i++)
                printf("[%d] ", lista->info[i]);
            putchar('\n');
        }
    }   
}

bool TStaticList_insert_begin(LISTAS* lista, int valor){
    //1. Testar se a lista nao está cheia
    if(lista!=NULL && !lista_is_full(lista)){
    //2. Mover os dados para abrir espaço no índice 0
        for(int j=lista->qty; j>0; j--)
            lista->info[j] = lista->info[j-1];
    //3. Inserir o valor no índice 0
        lista->info[0] = valor;
    //4. Incrementar a quantidade
        lista->qty = lista->qty+1;
        return true;
    }
    return false;
}
