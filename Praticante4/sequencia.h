#ifndef sequencia_H
#define sequencia_H
#include <stdbool.h>

typedef struct  NO no;
typedef struct  list_ LISTA;
/**
 * Problema: Recuperar sequências
Elaborado por: Rafael Lima
Toninho Trocador (TT) resolveu pegar algumas listas encadeadas e fazer novas ligações
embaralhando-as. As listas são compostas com nós com identificação única, que inicia em 1.
Assim, um nó é identificado por uma tripla <id, valor, prox_id>. Cada nó ocupa uma linha.
Observe na tabela abaixo um exemplo de lista antes do embaralhamento e depois da ação feita
por Toninho.
Lista antes do embaralhamento. Lista embaralhada por TT.
1 0.2 2
2 0.9 3
3 3.5 4
4 5.8 5
5 4.4 6
6 1.9 0

1 0.2 5
2 4.4 6
3 5.8 2
4 3.5 3
5 0.9 4
6 1.9 0

Portanto, sua tarefa é fazer um programa em linguagem C, usando listas dinâmicas, para
receber como entrada uma lista de triplas e recuperar a sequência correta (antes do
embaralhamento). As triplas devem ser lidas até que se leia uma tripla cujo id é igual a zero (este nó
não faz parte da lista, apenas indica que finalizou a entrada).
Entrada
Uma sequência de triplas <id, valor, id_prox> indicando o id (valor inteiro positivo) do nó, o valor
em ponto flutuante (float) com apenas uma casa de precisão e o id inteiro para o próximo nó (valor
inteiro positivo). O último nó da lista tem o valor do id_prox igual a zero. A entrada se encerra
quando o valor lido do campo id é igual a zero.
Saída
Deve ser impressa uma única linha com os valores em ponto flutuante com apenas uma casa de
precisão e separados por vírgula (perceba que não há espaços entre os números). Os valores devem
aparecer na sequência correta. Perceba no Exemplo de entrada 1 que o primeiro nó <1, 8.2, 7>
aponta para o nó 7. Assim, percebe-se na saída 1 que o valor 6.5 (referente ao nó 7) é exibido como
o segundo elemento da lista e assim por diante.

1

Estruturas de Dados – Prof. Rafael Lima
Exemplos
Exemplo de entrada 1
1 8.2 7
2 8.6 0
3 3.3 10
4 1.6 9
5 10.0 8
6 9.5 5
7 6.5 4
8 0.4 2
9 5.2 3
10 2.5 6
0 0 0

Exemplo de saída 1
8.2,6.5,1.6,5.2,3.3,2.5,9.5,10.0,0.4,8.6,

Exemplo de entrada 2
1 4.0 17
2 15.3 4
3 4.0 13
4 6.1 11
5 18.1 10
6 4.7 0
7 1.9 20
8 5.1 2
9 8.1 15
10 5.4 6
11 5.1 12
12 12.5 5
13 1.7 8
14 13.6 19
15 4.1 16
16 4.9 3
17 12.5 14
18 16.8 9
19 6.6 7
20 10.4 18
0 0 0

Exemplo de saída 2
4.0,12.5,13.6,6.6,1.9,10.4,16.8,8.1,4.1,4.9,4.0,1.7,5.1,15.3,6.1,5.1,12.5,18.1,5.4,4.7,
 */
bool fimLISTA(LISTA* list,int id, int info, int id_prox);
LISTA* criarLISTA();
no* criarNO(int id, int info, int id_prox);
bool iniLISTA(LISTA* list,int id, int info, int id_prox);

void ordenarCrescente(LISTA* list);
void printLISTA(LISTA* list);

#endif