#include "Stack.h"
#include <stdio.h>
#include <string.h>



int main(){
    Stack* pilha = Stack_create();
    //Ler a string 
    char input[1024];
    char imp[1024] ,par[1024];
    scanf("%s", input);
    for(int i=0; i<strlen(input);i++){
        int imax = 0, pmax = 0;
        if(input[i] == 0){
            for(int j = i + 1; j < strlen(input);j++){
                free(input[j]);
                puts("achei 0 bleeeeh");
            }
            //break; ?
        }
        if(input[i]%2){
            if(input[i] > 0){
               imp[imax] == input[i];
                imax++;  
            } else{
                if(imax != 0){
                imax--;
                }
            }
        }
        else{
            if(input[i] > 0){
               par[pmax] == input[i];
                pmax++;  
            } else{
                if(pmax != 0){
                    pmax--;
                }
            }
        }
    }
    printf("%s", input);
    int c = 0;
    for(int i=0; i<strlen(input);i++){

    }
}