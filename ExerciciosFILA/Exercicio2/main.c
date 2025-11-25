#include <stdio.h>
#include "Queue.h"


int main(){
    Queue* fila1 = Queue_create();
    if(fila1 == NULL){
        printf("Erro ao instanciar a fila.\n");
        return 1;
    }
    int V[11] = {-10, 1,-2, -4, 2, 3, 4, 5, 6, -10};
    for(int i=0; i<10; i++){
        if(!Queue_enqueue(fila1, V[i]))
            printf("Erro ao inserir o elemento V[%i]=%i\n", i, V[i]);
    }
    leitor(fila1);
    int max = Queue_get_qty(fila1);
    int temp;
    for(int i = 0; i < max; i++){
        Queue_dequeue(fila1, &temp);
        if(temp >= 0){
            Queue_enqueue(fila1, temp);
        }
    }
    leitor(fila1);
    return 0;
}