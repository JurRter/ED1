#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
#define max 20
struct list{
    int qty;
    int data[max];
};

bool listVAZIA(LISTA* list){
    return list->qty == 0;
}

bool listCHEIA(LISTA* list){
    return list->qty == max;
}

LISTA* criarLISTA(){
    LISTA* nova = malloc(sizeof(LISTA));
    if(nova != NULL){
        nova->qty = 0;
    }
    return nova;
}

void lerLISTA(LISTA* list){
    if (list != NULL && !listVAZIA(list)){
        for(int i = 0; i < list->qty; i++){
            printf("[%i] ", list->data[i]);
        }
    }   else{
        puts("Lista esta vazia/não existe");
    }
    puts("\n");
}

LISTA* concLISTA(LISTA* listx, LISTA* listy){
    if ((listx != NULL && !listVAZIA(listx)) && (listy != NULL && !listVAZIA(listy))){
        if(listx->qty + listy->qty > max){
            puts("Lista mto grande bbzão");
            return 0;
        } else{
        LISTA* listz = criarLISTA();
            for(int i = 0; i < listx->qty; i++){
                listz->data[i] = listx->data[i];
                listz->qty++;
            }
            for(int i = 0; i < listy->qty; i++){
                listz->data[i+listx->qty] = listy->data[i];
                listz->qty++;
            }
            return listz;
        }
    } 
    return 0;
}   

void preencherLISTA_inicio(LISTA* list, int x){
    if(list != NULL && !listCHEIA(list)){
        list->data[list->qty] = x;
        list->qty++;
    }
}

void removerLISTA_inicio(LISTA* list, int x){
    if(list != NULL && x > 0 && x <= list->qty){
        for(int i = 0; i < list->qty - x; i++){
            list->data[i] = list->data[i + x];
        }
        list->qty -= x;
    }
    else{
        puts("Lista tem nada fii slkkkk.\n");
    } 
}

bool qualvalorMAIOR(LISTA* list, int* maior, int* pos){
    if(list != NULL && !listVAZIA(list)){
        int maiorDATA = 0, posDATA;

        for(int i = 0; i < list->qty; i++){
            if(list->data[i]>maiorDATA){   
                maiorDATA = list->data[i];
                posDATA = i;
            }
        }
        *maior = maiorDATA;
        *pos = posDATA + 1;
        return 1;
    }
    return 0;
}

LISTA* somentepares(LISTA* list){
    if (list != NULL && !listVAZIA(list)){
        int soimparsaifora = 0;
        for(int i = 0; i < list->qty ;i++){
            if(list->data[i] < 0){
                puts("Osh sai fora sem numero negativo pars");
                return 0;
            }
            if(list->data[i]%2){
                soimparsaifora++;
            }
            if(soimparsaifora >= list->qty){
                puts("So tem impar aq loc ta achando q eu so besta?");
                return 0;
            }
        }
        LISTA* listasopar = criarLISTA();
        for(int i = 0; i < list->qty; i++){
            if(!(list->data[i]%2)){
                listasopar->data[listasopar->qty] = list->data[i];
                listasopar->qty++;
            }
        }
        return listasopar;
    } 
    return 0;
}   