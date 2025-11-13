#include "Stack.h"
#include <stdio.h>
#include <string.h>



int main(){
    Stack* pilha = Stack_create();
    //Ler a string 
    char input[1024];
    scanf("%s", input);
    printf("%s", input);
    int c = 0;
    for(int i=0; i<strlen(input);i++){
        if(input[i] == '('){
            c++;
        } else if(input[i] == ')'){
            c--;
            if (c < 0){
                break;
            }
        }
        else{
            if(!Stack_push(pilha, input[i])){
                printf("Stackoverflow: %c\n", input[i]);
            }
        }
    }
    printf("%s\n", (c==0) ? ("certo") : ("glup")); 
}