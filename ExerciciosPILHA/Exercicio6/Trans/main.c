#include "Stack.h"
#include <stdio.h>
#include <string.h>


int main(){
    char input1[1024], input2[1024];
    scanf(" %s", input1);
    printf("%s\n", input1);
    Stack* pilha1 = Stack_create();
    Stack* pilha2 = Stack_create();
    for(int i = 0; i < strlen(input1); i++){
        if(!Stack_push(pilha1, input1[i]));
    }
    printf("\n %s\n", transfere(pilha1, pilha2) ? "s" : "n");
    int temp;
    while (Stack_pop(pilha1, &temp)) {
        putchar((char)temp);
    }
    while (Stack_pop(pilha2, &temp)) {
        putchar((char)temp);
    }
    putchar('\n');
    return 0;
}

