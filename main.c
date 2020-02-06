/* Autores: Paulo S, Francisco P, Marcio Fernandes */
/* Data: 19/12*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "batalhaNaval.h"

int main(){
	setlocale(LC_ALL,"");
	
	Tabuleiro *tab = criarTabuleiro();
	srand(time(NULL));
	
	printf("Projeto Ger�ncia de controle e mudan�as\nIntegrantes: Francisco Paulino, Paulo S�rgio, Marcio Fernandes.\n\n");
	printf("==== Jogos em C - Batalha Naval, Jogo da mem�ria, Jogo da velha. ====\n\n");
	
	unsigned int escolhaJogo = 0;
	
	while(escolhaJogo != 4){
		printf("Qual jogo deseja jogar?\n\n");
		printf("[1] - Batalha Naval\n");
		printf("[2] - Jogo da mem�ria\n");
		printf("[3] - Jogo da velha\n");
		printf("[4] - Sair\n"); scanf("%u", &escolhaJogo);
		
		switch(escolhaJogo){
		
			case 1: //Batalha Naval - Paulo
				inicializaTab(tab->tab);
				inicializaTab(tab->tabMaq);
				inicializaTab(tab->gabaritoMaq);
				inicializaTab(tab->gabarito);
				imprimir(tab->gabarito);
				imprimir(tab->tab);
				imprimir(tab->gabaritoMaq);
				imprimir(tab->tabMaq);
				
				
			break;
			
			case 2: //Jogo da mem�ria - Francisco
		
			break;
			
			case 3: //Jogo da velha - Marcio
				
			break;
		
			case 4:
			
			break; 
		
		}
	}
	
	system("pause");
	return 0;
}
