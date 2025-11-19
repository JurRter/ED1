#include "sequencia.h"
#include <stdlib.h>
#include <stdio.h>
struct NO{
    int id;
    float info;
    int id_prox;
    no* prox;
};

struct list_{
    no* inicio;
};

LISTA* criarLISTA(){
    LISTA* list = malloc(sizeof(LISTA));
    if(list != NULL){
        list->inicio = NULL;
        return list;
    }
    return 0;
}

no* criarNO(int id, int info, int id_prox){
    no* novo = malloc(sizeof(no));
    if(novo != NULL){
        novo->prox = NULL;
        novo->info = info;
        novo->id = id;
        novo->id_prox = id_prox;
        return novo;
    }
    return 0;
}

bool iniLISTA(LISTA* list,int id, int info, int id_prox){
    if(list == NULL) return 0;
    no* novo = criarNO(id, info, id_prox);
    if(list->inicio == NULL){
        list->inicio = novo;
        return 1;
    }
    novo->prox = list->inicio;
    list->inicio = novo;
    return 1;
}

bool fimLISTA(LISTA* list,int id, int info, int id_prox){
    if(list == NULL) return 0;
    no* novo = criarNO(id, info, id_prox);
    if(list->inicio == NULL){
        list->inicio = novo;
        return 1;
    } 
    no* aux = list->inicio;
    while (aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = novo;
    return 1;
}

void printLISTA(LISTA* list){
    if(list == NULL) return;
    no* aux = list->inicio;
    while (aux != NULL){
        printf("%i %f %i\n", aux->id, aux->info, aux->id_prox);
        aux = aux->prox;
    }
}

void ordenarCrescente(LISTA* list) {
    for(no* i = list->inicio; i !=NULL; i=i->prox){
        for(no* j = i->prox; j!= NULL; j=j->prox){
            if(i->info > j->info){
                int aux = j->info;
                j->info = i->info;
                i->info = aux;
            }
        }
    }
}