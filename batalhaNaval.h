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
1 Porta-Avi�es;  2x6 */

char playerTab[TAM*TAM];		//onde a m�quina vai jogar
char playerGab[TAM*TAM];		//onde ser�o guardado os navios do jogador
char machineTab[TAM*TAM];	
char machineGab[TAM*TAM];


/* Inicializar o tabuleiro com �gua */
void inicializaTab(char *tab);

/* Posiciona os navios da m�quina */
void prepareMShips(char *machineGab);

/* Posicionar os navios do jogador */
int posPlayerShips(char *playerGab);

/* Verifica se a posi��o j� n�o � usada */
int checkShip(char *tab, int num, char tipo);

/* Posiciona o tipo de navio na posi��o indicada*/
void setShip(char *gabTab, char type, int pos);

/* Joga */
void play(char *playerTab, char *playerGab, char *machineTab, char *machineGab);

/* Verifica se o jogador ou a m�quina fez uma jogada repitida */
int checkMove(char *Tab, int position);

/* Verifica se a posi��o informada pelo jogador � valida */

int posicaoValida(int pos);

/* Verifica se o jogador ou m�quina acertou um navio */
int hitAShip(char *gabTab, int position);


/* Imprime o tabuleiro */
void imprimirTab(char *tab);

