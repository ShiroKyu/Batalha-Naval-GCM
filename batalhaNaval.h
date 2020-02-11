/* Prot�tipo das fun��es */

#define TAM 14 //Tabuleiro 10x10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

#define C 2 //Colunas ocupadas pela corveta

#define S 3 //Submarino

#define F 3 //Fragrata

#define D 4 //Destroyer

#define Pi 2 //Porta-avi�es
#define Pj 6 

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

char playerTab[TAM*TAM];		//onde a m�quina vai jogar
char playerGab[TAM*TAM];		//onde ser�o guardado os navios do jogador
char machineTab[TAM*TAM];	
char machineGab[TAM*TAM];


/* Inicializar o tabuleiro com �gua */
void inicializaTab(char *tab);

/* Posiciona os navios da m�quina */
void prepareMShips(char *machineTab, char *machineGab);

/* Posicionar os navios do jogador */
void posPlayerShips(char *playerTab, char *playerGab);

/* Verifica se a posi��o j� n�o � usada */
int checkShip(char *tab, int num, char tipo);

/* Posiciona o tipo de navio na posi��o indicada*/
void setShip(char *playTab, char *gabTab, char type, int pos);

/* Imprime o tabuleiro */
void imprimir(char *tab);

