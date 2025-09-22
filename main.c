#include "Lista.h"
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
LISTA* listasopar = somentepares(listaJUNTA);
lerLISTA(listasopar);
return 0;

}