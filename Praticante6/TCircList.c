#include "TCircList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no {
    int info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* inicio;
};

TNo* TNo_createNfill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo!=NULL){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}

TCircList* TCircList_create(){
    TCircList* nova = malloc(sizeof(TCircList));
    if(nova!=NULL){
        nova->inicio = NULL;
    }
    return nova;
}

bool TCircList_insert_end(TCircList* lista, int info){    
    if(lista == NULL) return false;
    TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    if(lista->inicio == NULL){
        lista->inicio = novo;
        novo->prox = lista->inicio;
        return true;
    }
    TNo* aux = lista->inicio;
    while(aux->prox != lista->inicio){
        aux = aux->prox;
    }
    aux->prox = novo;
    novo->prox = lista->inicio;
    return true;
}

bool TCircList_insert_begin(TCircList* lista, int info){

    TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    if(lista->inicio == NULL){
        lista->inicio = novo;
        novo->prox = lista->inicio;
    } else{
        novo->prox = lista->inicio; ///// o -> 1 0 3 -> o .../// o -> 1 0 3 -> o "3" -> 1 0 3 -> o/// o -> 3 -> 1 0 3 -> o///
        TNo* last = lista->inicio;
        while(last->prox != lista->inicio){
            last = last->prox;
        }
        last->prox = novo;
        lista->inicio = novo;
    }
    return true;
}

void TCircList_print(TCircList* lista){
    if(lista!=NULL){
        TNo* aux = lista->inicio;
        do{
            printf("%p:[info: %d, prox: %p]->\n", aux, aux->info, aux->prox);
            aux = aux->prox;
        }while(aux != lista->inicio);
    }
}
//TODO: Implementar esta função
bool TCircList_try_to_delete(TCircList* lista, int info){
    if(lista == NULL || lista->inicio == NULL) return 0;
    TNo* aux = lista->inicio;
    while(aux != lista->inicio && aux->info == info){
        TNo* lixo = aux;
        aux = aux->prox;
        free(lixo);
    }
    lista->inicio = aux;
    while(aux != lista->inicio && aux->prox != lista->inicio){
        if(aux->prox->info == info){
            TNo* lixo = aux->prox;
            aux->prox = aux->prox->prox;
            free(lixo);
        } else {
            aux = aux->prox;
        }
    }
    puts("BOAAAAA");
    return 1;
}
//TODO: Implementar esta função 
void TCircList_free(TCircList* lista){
    
}