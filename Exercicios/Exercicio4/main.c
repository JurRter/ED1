#include "Stack.h"
#include <stdio.h>
#include <string.h>


int main(){
    char input[1024];
    scanf("%s", input);
    printf("%s", input);
    Stack* pilha = Stack_create();
    for(int i = 0; i < strlen(input); i++){
        if(!stack_push(pilha, input[i]));
    }
    printf("\n %s\n", inverter(input) ? "s" : "n");
    int temp;
    while (Stack_pop(pilha, &temp)) {
        putchar((char)temp);
    }
    putchar('\n');
    return 0;
}

