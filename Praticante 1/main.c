#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
    LISTA* listaIMPAR = criarLISTA();
    LISTA* listaPAR = criarLISTA();
    for (int i = 0; i < 20 ;i++){
        if(i%2){
            preencherLISTA_inicio(listaIMPAR, i);
        } else {
            preencherLISTA_inicio(listaPAR, i);
        }
    }


lerLISTA(listaIMPAR);
lerLISTA(listaPAR);
LISTA* listaJUNTA = concLISTA(listaIMPAR, listaPAR);
lerLISTA(listaJUNTA);
removerLISTA_inicio(listaJUNTA, 3);
lerLISTA(listaJUNTA);
int p, v;
if(qualvalorMAIOR(listaJUNTA, &p, &v)){
    printf("Maior (listaIMPAR): valor=%i pos=%i\n", v, p);
} else {
    puts("Falha ao obter maior (listaIMPAR).");
}
return 0;

}