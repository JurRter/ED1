#include "Stack.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
    return novo;
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
    if(novo == NULL) return false;
    novo->ant = pilha->fim;
    pilha->fim = novo;
    return 1;
}

bool Stack_pop(Stack* pilha, int* x){
    if(pilha == NULL || pilha->fim == NULL || x == NULL) return false;
    Sno* lixo;
    lixo = pilha->fim;
    *x = pilha->fim->info;
    pilha->fim = pilha->fim->ant;
    free(lixo);
    return 1;
}

void Stack_destroy(Stack* pilha){
   while(pilha->fim != NULL){
    Sno* lixo;
    lixo = pilha->fim;
    pilha->fim = pilha->fim->ant;
    free(lixo);
   }
   free(pilha);
}


bool Palindromo(char *input){
    int max = strlen(input);
    if (max > 0 && input[max - 1] == '\n') max--;
    for(int i=0; i<max/2 ; i++){
        if(input[i] != input[max-1-i]){
            return 0;
        }
    }
    return 1;
}

bool Palindromo2(char *input){
    Stack* palin = Stack_create();
    for(int i = 0; i<strlen(input); i++){
        if(!Stack_push(palin, input[i])){
            puts("chapo dog kkkkk");
            return 0;
        }
    }
    int temp;
    for(int i = 0; i<strlen(input); i++){
        if(!Stack_pop(palin, &temp)){
            puts("chapo");
            return 0;
        }
        if(input[i] != (char)temp){
            puts("Glup");
            Stack_destroy(palin);
            return 0;
        }
    }
    return 1;
}