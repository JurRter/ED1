#include "DupEncade.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no {
    int info;
    struct _no *prox;
    struct _no *ant;
}TNo;

struct _list{
    TNo* inicio;
    TNo* final;
};

TNo* TNo_createNfill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo!=NULL){
        novo->info = info;
        novo->prox = NULL;
        novo->ant = NULL;
    }
    return novo;
}

lista* lista_create(){
    lista* nova = malloc(sizeof(lista));
    if(nova!=NULL){
        nova->inicio = NULL;
    }
    return nova;
}

bool lista_insert_end(lista* lista, int info){
    TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    if(lista->inicio == NULL){
        lista->inicio = novo;
    }else{
        TNo* aux = lista->inicio;
        while(aux->prox != NULL)
            aux = aux->prox;
        //Aux agora eh o ultimo no da lista
        aux->prox = novo;
        novo->ant = aux;
    }
    return true;
}
bool lista_insert_begin(lista* lista, int info){
    TNo* novo = TNo_createNfill(info);
    if(novo == NULL) //Nao conseguimos memoria
        return false;
    if(lista->inicio != NULL){
        lista->inicio->ant = novo;
        novo->prox = lista->inicio;
    } else{
        lista->final = novo;
    }
    lista->inicio = novo;
    return true;
}

void lista_print(lista* lista){
    if(lista!=NULL){
        TNo* aux = lista->inicio;
        while(aux!=NULL){
            printf("%p:[ant: %p info: %d, prox: %p ]->\n", aux, aux->ant, aux->info, aux->prox);
            aux = aux->prox;
        }
    }
}
//TODO: Implementar esta função
bool lista_try_to_delete(lista* lista, int info){
    if(lista == NULL || lista->inicio == NULL) return 0;
    TNo* aux = lista->inicio;
    while(aux != NULL){
        if(aux->info == info){
            TNo* lixo = aux;
            if(aux->ant != NULL){
                aux->ant->prox = aux->prox;
            }else{
                lista->inicio = aux->prox;
            }
            if(aux->prox != NULL){
            aux->prox->ant = aux->ant;
            } else{
                lista->final = aux->ant;
            }
            aux = aux->prox;
            free(lixo);
        } else {
            aux = aux->prox;
        }
    }
    puts("BOAAAAA");
    return 1;
}
