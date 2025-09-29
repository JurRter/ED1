#include "intb.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct no{
    int info;
    NO* prox;
};

struct list{
    NO* inicio;
};

NO* criarNO(int info){
    NO* novo = malloc(sizeof(NO));
    if(novo != NULL){
        novo->info = info;
        novo->prox = NULL;
        return novo;
    }
    return 0;
}

LISTA* criarLISTA(){
    LISTA* nova = malloc(sizeof(LISTA));
    if(nova != NULL){
        nova->inicio = NULL;
        return nova;
    }
    return 0;
}

bool iniLISTA(LISTA* list, int info){
    NO* no = criarNO(info);
    if(no != NULL){
        if(list->inicio != NULL){
            no->prox = list->inicio;
            list->inicio = no;
            return 1;
        } else {
            list->inicio = no;
            return 1;
        }
    }
    return 0;
}

bool fimLISTA(LISTA* list, int info){
    NO* no = criarNO(info);
    if (no != NULL){
        if(list->inicio == NULL){
            list->inicio = no;
            return 1;
        } else {
            NO* aux = list->inicio;
            while(aux->prox != NULL){
                aux = aux->prox;
            }
            aux->prox = no;
            return 1;
        }
    }
    return 0;
}

void printLISTA(LISTA* list){
    if (list != NULL){
        NO* aux = list->inicio;
        while(aux != NULL){
            printf("[%i]", aux->info);
            aux = aux->prox;
        }
        puts("\n");
    }
}

void lerSTR(LISTA* list, int* string){
    if(list == NULL || strlen(string) = 0){
        return;
    }   
    for(int pos = string[0]; pos < strlen(string); pos++){  

    }
}