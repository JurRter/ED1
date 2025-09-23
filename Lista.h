#ifndef LISTAS_H
#define LISTAS_H
#include <stdbool.h>
/**
1. Faça uma função para concatenar duas listas em uma terceira lista que deverá ser retornada pela
função. Faça duas versões: uma que utilize das funções já implementadas e outra que não usa
qualquer função já feita do TAD.
2. Faça uma função para remover os n primeiros elementos de uma lista. A função deve retornar se
a operação foi possível ou não.
3. Faça uma função para buscar a posição e o valor do maior elemento da lista, os quais
deverão ser retornados por referência. A função deve retornar se a operação foi possível ou
não.
4. Considere uma lista contendo números inteiros positivos. Faça uma função que retorne uma
nova lista contendo apenas os números pares da lista.
5. Fazer uma função para realizar cópia uma lista L1 em outra L2, eliminando os elementos
repetidos. L2 deverá ser retornada pela função.
6. Fazer uma função para inverter uma lista L1 colocando o resultado em L2. L2 deverá ser
retornada pela função.
7. Fazer uma função que realiza o merge de duas listas ordenadas, gerando uma lista única
ordenada e sem elementos repetidos. A função deverá receber as duas listas por parâmetro e
criar e retornar uma terceira lista com o resultado.
8. Fazer uma função que realiza a interseção de duas listas ordenadas. A função deverá criar e
retornar uma nova lista contendo o resultado.
**/
typedef struct list LISTA;


LISTA* criarLISTA();
/**
 * Cria uma instacia para uma lista que e a concatenação de outras duas;
 * @return retorna um ponteira para uma lista criada (inicialmente vazia)
 */

void lerLISTA(LISTA* list);
/**
 * @param list Uma lista qualquer para ser lida
 * @return Leitura da lista
 */


LISTA* concLISTA(LISTA* listx, LISTA* listy);
/**
 * @param listx Primeira lista a ser concatenada
 * @param listy Segunda lista a ser concatenada
 * @return o ponteiro para uma lista com a soma das informações das duas anteriores 
 */

void preencherLISTA_inicio(LISTA* list, int x);
/**
 * @param list Recebe para se adicionar um inteiro
 * @param x Numero a se adicionar na lista
 * @return adição em um slot livre da lista
 */

void removerLISTA_inicio(LISTA* list, int x);
/**
 * @param list Uma lista a ter dados retirados
 * @param x quantidade de dados a ser retirados
 * @return Uma lista sem x dados
 */

bool qualvalorMAIOR(LISTA* list, int* maior, int* pos);
/**
 * @param list Uma lista para localizar o maior valor e sua posição
 * @param maior Retorna o maior valor da lista
 * @param pos Retorna a posição do maior valor e qual o maior valor da lista
 */

LISTA* somentepares(LISTA* list);
/**
 * @param list uma lista para recolher data par
 * @return ponteiro para uma lista com os numeros pares da lista anterior
 */

LISTA* semrepetidos(LISTA* list);
/**
 * @param list uma lista para se recolher data
 * @return ponteiro para uma lista sem numeros repetidos baseado no @param list
 */

LISTA* invertLISTA(LISTA* list);
/**
 * @param list uma lista para ser invertida
 * @return ponteiro pra uma lista
 */

void ordLISTA(LISTA* list);
/**
 * @param list uma lista a ser ordenada
 * @return A propia lista de forma ordenada
 */

LISTA* junçãoordenadaLISTA(LISTA* listx, LISTA* listy);
/**
 * @param listx uma lista a ser ordernada e combinada
 * @param listy uma lista a ser ordernada e combinada
 * @return ponteiro para uma lista com a junção ordenada das listas sem elementos repetidos
 */

LISTA* intersecçãoLISTA(LISTA* listx, LISTA* listy);
/**
 * @param listx uma lista a ser lida e ser feita a intersecção
 * @param listy uma lista a ser lida e ser feita a intersecção
 * @return ponteiro para uma lista com a intersecçao dos parametros 
 */

#endif