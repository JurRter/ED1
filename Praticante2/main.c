#include "TNo.h"
#include <stdio.h>

int main(){
    LISTA* par = criarLISTA();
    
    iniLISTA(par, 0, 2);
    iniLISTA(par, 1, 5);
    iniLISTA(par, 0, 6);
    iniLISTA(par, 1, 3);
    prinLISTA(par, 'c');
    prinLISTA(par, 'd');
    LISTA* par1 = criarLISTA();

    fimLISTA(par1, 0, 2);
    fimLISTA(par1, 1, 5);
    fimLISTA(par1, 0, 6);
    fimLISTA(par1, 1, 3);
    prinLISTA(par1, 'c');
    prinLISTA(par1, 'd');

    char binario[] = "111111000000011100";
    LISTA* lisbinario = criarLISTA();
    lerBI(lisbinario, binario);

    prinLISTA(lisbinario, 'c');
    prinLISTA(lisbinario, 'd');
}