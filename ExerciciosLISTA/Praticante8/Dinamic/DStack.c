#include "Stack.h"
#include <stdlib.h>

typedef struct no{
    int info;
    struct no* ant;
}Sno;

struct _stack{
    Sno* fim;
};

Sno* Sno_create(int x){
    Sno* novo = malloc(sizeof(Sno));
    if(novo == NULL) return NULL;
    novo->info = x;
    novo->ant = NULL;
}

Stack* Stack_create(){
    Stack* nova = malloc(sizeof(Stack));
    if(nova == NULL) return NULL;
    nova->fim = NULL;
    return nova;
}

bool Stack_push(Stack* pilha, int x){
    if(pilha == NULL) return false;
    Sno* novo = Sno_create(x);
    novo->ant = pilha->fim;
    pilha->fim = novo;
    return 1;
}

bool Stack_pop(Stack* pilha, int* x){
    if(pilha == NULL) return false;
    Sno* lixo;
    lixo = pilha->fim;
    *x = pilha->fim->info;
    pilha->fim = pilha->fim->ant;
    free(lixo);
}

void Stack_destroy(Stack* pilha){
   while(pilha->fim != NULL){
    Sno* lixo;
    lixo = pilha->fim;
    pilha->fim = pilha->fim->ant;
    free(lixo);
   }
}

