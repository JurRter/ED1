#include <stdio.h>
#include "Queue.h"


int main(){
    Queue* fila1 = Queue_create();
    if(fila1 == NULL){
        printf("Erro ao instanciar a fila.\n");
        return 1;
    }
    Queue* fila2 = Queue_create();
    if(fila2 == NULL){
        printf("Erro ao instanciar a fila.\n");
        return 1;
    }
    Queue* fila3 = Queue_create();
    if(fila3 == NULL){
        printf("Erro ao instanciar a fila.\n");
        return 1;
    }

    int V[9] = {1, 2, 3, 4, 5, 6, 7, 9, 12};
    for(int i = 0; i < 9; i++){
        if(!Queue_enqueue(fila1, V[i]))
            printf("Erro ao inserir o elemento V[%zu]=%i\n", i, V[i]);
    }

    int B[8] = {0, 2 , 3, 4, 5, 8, 10, 11};
    for(int i = 0; i < 8; i++){
        if(!Queue_enqueue(fila2, B[i]))
            printf("Erro ao inserir o elemento B[%zu]=%i\n", i, B[i]);
    }
    leitor(fila1);
    leitor(fila2);
    somaeordena(fila1, fila2, fila3);
    leitor(fila3);
    leitor(fila1);
    leitor(fila2);
    return 0;
}