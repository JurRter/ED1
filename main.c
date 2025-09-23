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
preencherLISTA_inicio(listaJUNTA, 2);
preencherLISTA_inicio(listaJUNTA, 4);
lerLISTA(listaJUNTA);
LISTA* listasemrep = semrepetidos(listaJUNTA);
lerLISTA(listasemrep);
LISTA* invertida = invertLISTA(listasopar);
lerLISTA(invertida);
LISTA* impapar = junçãoordenadaLISTA(listaIMPAR, listaPAR);
lerLISTA(impapar);
removerLISTA_inicio(impapar, 13);
LISTA* parmaisoumenos = intersecçãoLISTA(impapar, invertida);
lerLISTA(parmaisoumenos);
return 0;

}