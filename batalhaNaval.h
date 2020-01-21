/* Prot�tipo das fun��es */

#define TAM 14 //Tabuleiro 10x10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

#define Ci 1 //Linhas ocupadas pela corveta
#define Cj 2 //Colunas ocupadas pela corveta

#define Si 1 //Submarino
#define Sj 3

#define Fi 1 //Fragata
#define Fj 3 

#define Di 1 //destroyer
#define Dj 4

#define Pi 2 //Porta-avi�es
#define Pj 6 

#define Bi 1 //B�ia
#define Bj 1


typedef struct tabuleiro Tabuleiro;

/* ~ -> �gua
   * -> tiro foi dado e n�o havia nada
   X -> tiro foi dado e acertou */
   
/* Cada jogador possui 6 navios:
1 Corveta; 		 1x2
1 Submarino; 	 1x3
1 Fragata; 		 1x3
1 Destroyer; 	 1x4
1 Cruzador; 	 1x5
1 Porta-Avi�es;  2x6 */


/* Cria o tabuleiro */
Tabuleiro *criarTabuleiro();

/* Posiciona os navios da m�quina */
void posMachineShips(Tabuleiro *tab);

/* Imprime o tabuleiro */
void imprimir(Tabuleiro *tab);



int verificaNum(Tabuleiro *tab, int num, char tipo);
