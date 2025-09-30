
#include "intb.h"


int main(){
    LISTA* oiii = criarLISTA();
    LISTA* oii = criarLISTA();
    iniLISTA(oiii, 1);
    iniLISTA(oiii, 2);
    iniLISTA(oiii, 3);
    iniLISTA(oiii, 4);
    iniLISTA(oiii, 5);
    iniLISTA(oiii, 6);

    printLISTA(oiii);

    fimLISTA(oii, 1);
    fimLISTA(oii, 2);
    fimLISTA(oii, 3);
    fimLISTA(oii, 4);
    fimLISTA(oii, 5);
    fimLISTA(oii, 6);

    printLISTA(oii);
    LISTA* bacana = criarLISTA();
    LISTA* nbaca = criarLISTA();
    conversão (nbaca, 3);
    conversão(bacana, 1900);
    printLISTA(bacana);
    ebacana(bacana);
    printLISTA(nbaca);
    ebacana(nbaca);
}