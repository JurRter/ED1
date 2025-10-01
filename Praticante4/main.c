#include "sequencia.h"
#include <stdio.h>

int main(void) {
    // Create list
    LISTA* list = criarLISTA();
    if (list == NULL) {
        puts("criarLISTA failed");
        return 1;
    }
    puts("criarLISTA ok");

    // Insert at beginning
    if (iniLISTA(list, 1, 10, 2)) {           // info passed as int due to header signature
        puts("iniLISTA ok");
    } else {
        puts("iniLISTA failed");
    }

    // Append at end
    if (fimLISTA(list, 4, 20, 0)) {
        puts("fimLISTA ok");
    } else {
        puts("fimLISTA failed");
    }
    fimLISTA(list, 4, 25, 0);
    fimLISTA(list, 4, 21, 0);
    fimLISTA(list, 4, 20, 0);
    fimLISTA(list, 4, 20, 0);
    fimLISTA(list, 4, 28, 0);
    fimLISTA(list, 4, 20, 0);
    fimLISTA(list, 4, 22, 0);
    // Print the list (each line: id info id_prox)
    puts("printLISTA output:");
    printLISTA(list);
    puts("\ncalmaporraa\n\n\n\n\n ai ordeineir\n");
    ordenarCrescente(list);
    printLISTA(list);

}