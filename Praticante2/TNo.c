#include <stdio.h>
#include <stdlib.h>
#include "TNo.h"

struct _Tno {
    int info;
    no *prox;
};

struct _list{
    no* inicio;
};

LISTA* criarLISTA(){
    LISTA* nova = malloc(sizeof(LISTA));
    if(nova != NULL){
        nova->inicio = NULL;
        return nova;
    };
}

no* criarNO(int info){
    no* novo = malloc(sizeof(no));
    if(novo != NULL){
        novo->info = info;
        novo->prox = NULL;
        return novo;
    }
}

bool iniLISTA(LISTA* list, int info){
    no* pont = criarNO(info);
    if(pont == NULL){
        return 0;
    } if(list->inicio != NULL){
        pont->prox = list->inicio;
        list->inicio = pont;
        return 1;
    } else {
        list->inicio = pont;
    }
}

void prinLISTA(LISTA* list){
    if(list != NULL){
        no* aux = list->inicio;
        while(aux != NULL){
            printf("%p:[info: %d, prox: %p]->\n", aux, aux->info, aux->prox);
            aux = aux->prox;
        }
    }
}
