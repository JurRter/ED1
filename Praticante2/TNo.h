#ifndef TNO_H
#define TNO_H
#include <stdbool.h>

/**
Problema: Sparse Binary Strings (SBS)
As sequências de strings binárias são strings gigantes formadas por 0’s e 1’s. Por exemplo, a
sequência 0000000000111111111100101000000000 é uma string binária (contém apenas os
caracteres ‘0’ e ‘1’). O problema destas sequências é que ocupam muito espaço. Portanto, a ideia
inicial é usarmos uma lista simplesmente encadeada para codificar a string binária em uma lista
onde cada nó armazena o caractere e a quantidade de vezes que ele aparece.
Exemplo: 111111000000011100 gera a seguinte lista:
[6, 1] -> [7, 0] -> [3, 1] -> [2, 0] ->
Onde o primeiro campo indica a quantidade e o segundo qual caractere armazenado.
Portanto, faça um programa que trabalhe em dois modos, codificador e decodificador. Em modo
codificador, o programa deverá ler uma string binária e transformá-la em uma lista. Em modo
decodificador, o programa deverá ler uma lista e transformá-la na string.
Entrada
A primeira linha da entrada diz qual modo operacional seu programa deve trabalhar. Usaremos o
caractere ‘c’ para codificador e ‘d’ para decodificador.
Entrada em modo de codificador:
Caso o primeiro caractere seja ‘c’ de codificador, a próxima linha consiste na string binária que
pode ser até de 10000 caracteres (espere um \n ao final da string, dependendo da leitura, que deve
ser removido da entrada).
Entrada em modo decodificador
Em modo decodificador, a entrada é formada pelo número de pares a seguir. Cada par seguinte é
formado pelas informações do nó, ou seja, a frequência e o caractere ‘1’ ou ‘0’, representando um
nó da lista.
Saída
Em modo de codificador:
A primeira linha da saída indica quantos pares de informação vem a seguir. Cada par seguinte é
formado pelas informações do nó, discutidas anteriormente, separadas por espaço. Cada par deverá
estar em uma linha separada, conforme exemplos a seguir.
Em modo de decodificador:
A saída é formada pela string binária recuperada da lista (não se esqueça do \n no final).

1

Estruturas de Dados – Prof. Rafael Lima

Exemplos
Exemplo de entrada 1:
c
111111000000011100

Exemplo de saída:
4
6 1
7 0
3 1
2 0

Exemplo de entrada 2:
d
4
6 1
7 0
3 1
2 0
 */


typedef struct _Tno no;

typedef struct _list LISTA;

void prinLISTA(LISTA* list, char op);

bool iniLISTA(LISTA* list, int info, int quant);

bool fimLISTA(LISTA* list, int info, int quant);

no* criarNO(int info, int quant);

LISTA* criarLISTA();

void lerBI(LISTA* list, char* bi);















#endif