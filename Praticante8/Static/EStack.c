#include "Stack.h"
#include <stdlib.h>

struct _stack{
    int data[max];
    unsigned int qty;
};

Stack* Stack_create(){
    Stack* novo = malloc(sizeof(Stack));
    if(novo == NULL) return NULL;
    novo->qty = -1;
    return novo;
}

bool Stack_push(Stack* pilha, int x){
    if(pilha == NULL) return 0;
    if(!Stack_is_full(pilha)){
        pilha->qty++;
        pilha->data[pilha->qty] = x;
        return 1;
    }
    return 0;
}

bool Stack_pop(Stack* pilha, int* x){
    if(pilha == NULL) return 0;
    if(!Stack_is_empty(pilha)){
        *x = pilha->data[pilha->qty];
        pilha->qty--;
        return 1;
    }
    return 0;
}

void Stack_destroy(Stack* pilha){
    if(pilha == NULL) return;
    free(pilha);
}
/**
 * Consulta se a pilha está vazia
 */
bool Stack_is_empty(Stack* pilha){
    if(pilha == NULL) return 0;
    return pilha->qty == -1;
}
/**
 * Consulta se a pilha está cheia
 */
bool Stack_is_full(Stack* pilha){
    if (pilha == NULL) return 0;
    return pilha->qty == (max-1);
}