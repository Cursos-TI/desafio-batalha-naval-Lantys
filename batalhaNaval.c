#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Desafio Batalha naval
// Tema 1: Geração do tabuleiro

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    int index;
    int coluna;
    int linha;
    int con = 10;
    int lin = 10;
    int tiro_max = 10;
    int tiro = tiro_max;;
    
    // Matriz de validação dos navios x acertos
    char * tabuleiro1 [10] [10] = {
	{"3", "3", "3", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "3", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "3", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "3", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	};
	
	// Cria o tabuleiro a ser impresso no cmd
	char * tabuleiro2 [10] [10] = {
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	};
	
	// Printa o menu inicial 
	system("cls");
	printf("\n ===========================================================");
    printf("\n \t\t Batalha Naval");
    printf("\n ===========================================================\n\n");
	 
	//Repetição da estrutura dos execução dos tiros
	while (tiro > 0 ){
		
		system("cls");
		printf("\n ===========================================================");
	    printf("\n \t\t Batalha Naval");
	    printf("\n ===========================================================\n");
	    
		// Print de acertos após o primeiro loop completo.
		if (tiro != tiro_max) {
			if (tabuleiro1[linha][coluna] == "3"){
				printf("\n-------------------------------------------------------------");
				printf("\n \t Você acertou o tiro");
				printf("\n-------------------------------------------------------------\n");
				tabuleiro2 [linha][coluna] = "3";
			}else{
				printf("\n-------------------------------------------------------------");
				printf("\n \t Você errou o tiro \n");
				printf("\n-------------------------------------------------------------\n");
			}   	
		}
		
		// Print do tabuleiro a cada loop
		for (int i = 0; i < lin; i++) {
			printf("\t");
	        for (int j = 0; j < con; j++) {
	            printf(" %s ", tabuleiro2[i][j]); 
	        }
	        printf("\n");
		}
		printf("\n - Você ainda tem %d  tiros", tiro);
		printf("\n-------------------------------------------------------------");
		
		//Mostra o menu do jogo
		printf("\n - Selecione de 0 - 9 para a linha do tiro %d \n", tiro);
		scanf("%d", &linha); // Recebe a linha da matrix
		fflush(stdin);
		printf(" -------------------------------------------------------------");
		printf("\n - Selecione de 0 - 9 para a Coluna do tiro %d \n", tiro);
		scanf("%d", &coluna); // Recebe a coluna da matrix
		fflush(stdin);		
		
		// Popula o acerto no tabuleiro que é impresso no loop.
		if (tabuleiro1[linha][coluna] == "3"){
			printf("\n \t Você acertou o tiro \n");
			tabuleiro2 [linha][coluna] = "3";
		}else{
			printf("\n \t Você errou o tiro \n");
		}
	
		// Redução da quantidade de tiros restantes.
	    tiro--;
  		
	}
    
    return 0;
}
