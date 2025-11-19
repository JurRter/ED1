#include <stdio.h>
#include <stdlib.h>
#include "TNo.h"
#include <string.h>
struct _Tno {
    int quant;
    int info;
    no *prox;
};

struct _list{
    no* inicio;
    int limite;
};

LISTA* criarLISTA(){
    LISTA* nova = malloc(sizeof(LISTA));
    if(nova != NULL){
        nova->inicio = NULL;
        nova->limite = 0;
        return nova;
    };
}

no* criarNO(int info, int quant){
    no* novo = malloc(sizeof(no));
    if(novo != NULL){
        novo->info = info;
        novo->quant = quant;
        novo->prox = NULL;
        return novo;
    }
}

bool iniLISTA(LISTA* list, int info, int quant){
    no* pont = criarNO(info, quant);
    if(pont == NULL){
        return 0;
    } if(list->inicio != NULL){
        pont->prox = list->inicio;
        list->inicio = pont;
        list->limite++;
        return 1;
    } else {
        list->inicio = pont;
        list->limite++;
        return 1;
    }
}

bool fimLISTA(LISTA* list, int info, int quant){
    no* pont = criarNO(info, quant);
    if(pont == NULL){
        return 0;
    } if(list->inicio == NULL){
        list->inicio = pont;
        list->limite++;
        return 1;
    } else {
        no* aux = list->inicio;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = pont;
        pont->info = info;
        list->limite++;
        return 1;
    }
}


void prinLISTA(LISTA* list, char op){ 
    if(list != NULL){
        if(op == 'c'){
            no* aux = list->inicio;
            printf("%i\n", list->limite);
            while(aux != NULL){
                for(int i = 0; i < aux->quant; i++){
                    printf("%i", aux->info);
                }
                aux = aux->prox;
            }
        }
        if(op == 'd'){
            no* aux = list->inicio;
            printf("%i\n", list->limite);
            while(aux != NULL){
                printf("%i %i\n", aux->quant, aux->info);
                aux = aux->prox;
            }
        }      
        puts("\n");
    }
}

void lerBI(LISTA* list, char* bi) {
    if(bi == NULL || strlen(bi) == 0) return;
    char lugar = bi[0];
    int pos = 1;
    for(int i = 1; i < strlen(bi); i++) {
        if(bi[i] == lugar) {
            pos++;
        } else {
            int digit = lugar - '0';
            fimLISTA(list, digit, pos);
            lugar = bi[i];
            pos = 1;
        }
    }
    int digit = lugar - '0';
    fimLISTA(list, digit, pos);
}
