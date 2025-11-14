#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Desafio Batalha naval
// Tema 1: Geração do tabuleiro

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    int index;
    int coluna = 10;
    int linha = 10;
    int con = 10;
    int lin = 10;
    int tiro_max = 10;
    int tiro = tiro_max;
    int tamanho_barco = 3;
    int contador; // Contador de quantas vezes o valor do barco '3' aparece na linha a ser validada.
    int linha_cone;
    int coluna_cone;
    int linha_cruz;
    int coluna_cruz;
    int linha_octaedro;
    int coluna_octaedro;
    
    // Matriz de validação dos navios x acertos
    char * tabuleiro1 [10] [10] = {
	{"3", "3", "3", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
	{"0", "0", "0", "0", "3", "0", "0", "0", "0", "0"},
	{"0", "0", "3", "0", "0", "3", "0", "0", "0", "0"},
	{"0", "0", "3", "0", "0", "0", "3", "0", "0", "0"},
	{"0", "0", "3", "0", "0", "0", "0", "0", "0", "3"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "3", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "3", "0", "0"},
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"}
	};
	
//	// Varrer cada linha do array e validar quantas vezes o 3 se repete, se menor que 10 ok, é valido, senão a linha está errada quebrar o código.
//	for (int i = 0; i < linha; i++){
//		printf("\n\t - estou na linha %d", i);
//		contador = 0; // Voltando o valor do contador para 0 a cada linha nova.
//		for (int j = 0; j < coluna; j++){
//			if(tabuleiro1[i][j] == "3"){
//				contador++;
//			}
//		}
//		// Limitador de 1 barco por linha no máximo e o tamanho máximo dele.
//		if (contador > tamanho_barco ) {
//			printf("\n\t - O tamanho do barco excede o limite permitido");
//			return 0;
//		}
//		else{
//			printf("\n passou");
//		}
//	}
	
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
	{"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"}
	};
	

	
//	// Printa o menu inicial 
//	system("cls");
//	printf("\n ===========================================================");
//    printf("\n \t\t Batalha Naval");
//    printf("\n ===========================================================\n\n");
//	 
//	//Repetição da estrutura dos execução dos tiros
//	while (tiro > 0 ){
//		
//		system("cls");
//		printf("\n ===========================================================");
//	    printf("\n \t\t Batalha Naval");
//	    printf("\n ===========================================================\n");
//	    
//		// Print de acertos após o primeiro loop completo.
//		if (tiro != tiro_max) {
//			if (tabuleiro1[linha][coluna] == "3"){
//				printf("\n-------------------------------------------------------------");
//				printf("\n \t Você acertou o tiro");
//				printf("\n-------------------------------------------------------------\n");
//				tabuleiro2 [linha][coluna] = "3";
//			}else{
//				printf("\n-------------------------------------------------------------");
//				printf("\n \t Você errou o tiro \n");
//				printf("\n-------------------------------------------------------------\n");
//			}   	
//		}
//		
//		// Print do tabuleiro a cada loop
//		for (int i = 0; i < lin; i++) {
//			printf("\t");
//	        for (int j = 0; j < con; j++) {
//	            printf(" %s ", tabuleiro2[i][j]); 
//	        }
//	        printf("\n");
//		}
//		printf("\n - Você ainda tem %d  tiros", tiro);
//		printf("\n-------------------------------------------------------------");
//		
//		//Mostra o menu do jogo
//		printf("\n - Selecione de 0 - 9 para a linha do tiro %d \n", tiro);
//		scanf("%d", &linha); // Recebe a linha da matrix
//		fflush(stdin);
//		printf(" -------------------------------------------------------------");
//		printf("\n - Selecione de 0 - 9 para a Coluna do tiro %d \n", tiro);
//		scanf("%d", &coluna); // Recebe a coluna da matrix
//		fflush(stdin);		
//		
//		// Popula o acerto no tabuleiro que é impresso no loop.
//		if (tabuleiro1[linha][coluna] == "3"){
//			printf("\n \t Você acertou o tiro \n");
//			tabuleiro2 [linha][coluna] = "3";
//		}else{
//			printf("\n \t Você errou o tiro \n");
//		}
//	
//		// Redução da quantidade de tiros restantes.
//	    tiro--;
//  		
//	}
	
	// 1 - Formato Cone
	printf("\n ----- Habilidade: Cone ----- ");
	printf("\n\t +-----------+");
	printf("\n\t | 0 0 P 0 0 |");
	printf("\n\t | 0 5 5 5 0 |");
	printf("\n\t | 5 5 5 5 5 |");
	printf("\n\t +-----------+");
	printf("\n [0] - Água \n [5] - Área afetada \n [P] - Ponto de Origem");
	printf("\n -----------------------------------------");
	// Insere a linha do ponto de origem: Cone
	printf("\n - Insira o valor para o ponto de origem da habilidade");
	printf("\n - Defina a linha entre '0 e 7': \n");
	scanf(" %d", &linha_cone);
	fflush(stdin);
		
	// Valida se a linha está dentro do limite permitido do tabuleiro
	if ( linha_cone < 0 || linha_cone > 7 ){
				
	    printf("\n - Você definiu a linha com valores inválidos!");
	    return 0;
	}
	
	// Insere a coluna do ponto de origem: cone
	printf("\n - Linha do ponto de origem da habilidade: ");
	printf("\n - Defina a coluna entre '2 e 7': \n");
	scanf(" %d", &coluna_cone);
	fflush(stdin);
	
	// Valida se a coluna está dentro do limite permitido do tabuleiro
	if (coluna_cone < 2 || coluna_cone > 7 ){
	    printf("\n - Você definiu a coluna com valores inválidos!");
	    return 0;
	}else{
	    printf("\n - Você definiu as Linha %d, Coluna %d \n", linha_cone, coluna_cone);
	}
	
	// 2 - Formato Cruz
	system("cls");
	printf("\n ----- Habilidade: Cruz ----- ");
	printf("\n\t\t +-----------+");
	printf("\n\t\t | 0 0 5 0 0 |");
	printf("\n\t\t | 5 5 P 5 5 |");
	printf("\n\t\t | 0 0 5 0 0 |");
	printf("\n\t\t +-----------+");
	printf("\n [0] - Água \n [5] - Área afetada \n [P] - Ponto de Origem");
	printf("\n -----------------------------------------");
	// Insere a linha do ponto de origem: Cruz
	printf("\n - Insira o valor para o ponto de origem da habilidade");
	printf("\n - Defina a linha entre '2 e 7': \n");
	scanf(" %d", &linha_cruz);
	fflush(stdin);
	// Valida se a linha está dentro do limite permitido do tabuleiro
	if (linha_cruz < 2 || linha_cruz > 7 ){
	    printf("\n - Você definiu a linha com valores inválidos!");
	    return 0;
	}
	
	// Insere a coluna do ponto de origem: cruz
	printf("\n - Linha do ponto de origem da habilidade: ");
	printf("\n - Defina a coluna entre '2 e 8': \n");
	scanf(" %d", &coluna_cruz);
	fflush(stdin);
	
	// Valida se a coluna está dentro do limite permitido do tabuleiro
	if (coluna_cruz < 2 || coluna_cruz > 8 ){
	    printf("\n - Você definiu a coluna com valores inválidos!");
	    return 0;
	}else{
	    printf("\n - Você definiu as Linha %d, Coluna %d \n", linha_cruz, coluna_cruz);
	}
	
	// 3 - Formato Octaedro
	system("cls");
	printf("\n ----- Habilidade: Octaedro ----- ");
	printf("\n\t\t +-----------+");
	printf("\n\t\t | 0 0 5 0 0 |");
	printf("\n\t\t | 0 5 P 5 0 |");
	printf("\n\t\t | 0 0 5 0 0 |");
	printf("\n\t\t +-----------+");
	printf("\n [0] - Água \n [5] - Área afetada \n [P] - Ponto de Origem");
	printf("\n -----------------------------------------");
	// Insere a linha do ponto de origem: Octaedro
	printf("\n - Insira o valor para o ponto de origem da habilidade");
	printf("\n - Defina a linha entre '1 e 8': \n");
	scanf(" %d", &linha_octaedro);
	
	// Valida se a linha está dentro do limite permitido do tabuleiro
	if (linha_octaedro < 1 || linha_octaedro > 8 ){
	    printf("\n - Você definiu a linha com valores inválidos!");
	    return 0;
	}
	// Insere a coluna do ponto de origem: Octaedro
	printf("\n - Linha do ponto de origem da habilidade: ");
	printf("\n - Defina a coluna entre '1 e 8': \n");
	scanf(" %d", &coluna_octaedro);
	fflush(stdin);
	
	// Valida se a coluna está dentro do limite permitido do tabuleiro
	if (coluna_octaedro < 1 || coluna_octaedro > 8 ){
	    printf("\n - Você definiu a coluna com valores inválidos!");
	    return 0;
	}else{
	    printf("\n - Você definiu as Linha %d, Coluna %d \n", linha_octaedro, coluna_octaedro);
	}

// Habilidade Cone
	// Ponto de origem - {L,C}
	if ( tabuleiro1[linha_cone][coluna_cone] == "3" ) {
		tabuleiro2[linha_cone][coluna_cone] = "3";
	}else{
		tabuleiro2[linha_cone][coluna_cone] = "5";
	}
	// {L+1,C-1}
	if ( tabuleiro1[linha_cone+1][coluna_cone-1] == "3" ){
		tabuleiro2[linha_cone+1][coluna_cone-1] = "3";
	}else{
		tabuleiro2[linha_cone+1][coluna_cone-1] = "5";
	}
	// {L+1,C}
	if ( tabuleiro1[linha_cone+1][coluna_cone] == "3" ){
		tabuleiro2[linha_cone+1][coluna_cone] = "3";
	}else{
		tabuleiro2[linha_cone+1][coluna_cone] = "5";
	}
	// {L+1,C+1}
	if ( tabuleiro1[linha_cone+1][coluna_cone+1] == "3" ) {
		tabuleiro2[linha_cone+1][coluna_cone+1] = "3";
	}else{
		tabuleiro2[linha_cone+1][coluna_cone+1] = "5";
	}
	// {L+2,C-2}   
	if ( tabuleiro1[linha_cone+2][coluna_cone-2] == "3" ){
		tabuleiro2[linha_cone+2][coluna_cone-2] = "3";
	}else{
		tabuleiro2[linha_cone+2][coluna_cone-2] = "5";
	}
	// {L+2,C-1}   
	if ( tabuleiro1[linha_cone+2][coluna_cone-1] == "3" ){
		tabuleiro2[linha_cone+2][coluna_cone-1] = "3";
	}else{
		tabuleiro2[linha_cone+2][coluna_cone-1] = "5";
	}
	// {L+2,C}
	if ( tabuleiro1[linha_cone+2][coluna_cone] == "3" ){
		tabuleiro2[linha_cone+2][coluna_cone] = "3";
	}else{
		tabuleiro2[linha_cone+2][coluna_cone] = "5";
	}
	// {L+2,C+1} 
	if ( tabuleiro1[linha_cone+2][coluna_cone+1] == "3" ) {
		tabuleiro2[linha_cone+2][coluna_cone+1] = "3";
	}else{
		tabuleiro2[linha_cone+2][coluna_cone+1] = "5";
	}
	// {L+2,C+2}
	if ( tabuleiro1[linha_cone+2][coluna_cone+2] == "3" ) {
		tabuleiro2[linha_cone+2][coluna_cone+2] = "3";
	}else{
		tabuleiro2[linha_cone+2][coluna_cone+2] = "5";
	}
	
// Hablidade Cruz
// {L-1,C}
	if ( tabuleiro1[linha_cruz-1][coluna_cruz] == "3" ) {
		tabuleiro2[linha_cruz-1][coluna_cruz] = "3";
	}else{
		tabuleiro2[linha_cruz-1][coluna_cruz] = "5";
	}
// {L,C-2}
	if ( tabuleiro1[linha_cruz][coluna_cruz-2] == "3" ) {
			tabuleiro2[linha_cruz][coluna_cruz-2] = "3";
		}else{
			tabuleiro2[linha_cruz][coluna_cruz-2] = "5";
		}
// {L,C-1}  
	if ( tabuleiro1[linha_cruz][coluna_cruz-1] == "3" ) {
		tabuleiro2[linha_cruz][coluna_cruz-1] = "3";
	}else{
		tabuleiro2[linha_cruz][coluna_cruz-1] = "5";
	}
// {L,C} Ponto de origem
	if ( tabuleiro1[linha_cruz][coluna_cruz] == "3" ) {
		tabuleiro2[linha_cruz][coluna_cruz] = "3";
	}else{
		tabuleiro2[linha_cruz][coluna_cruz] = "5";
	}
// {L,C+1}
	if ( tabuleiro1[linha_cruz][coluna_cruz+1] == "3" ) {
		tabuleiro2[linha_cruz][coluna_cruz+1] = "3";
	}else{
		tabuleiro2[linha_cruz][coluna_cruz+1] = "5";
	}
// {L,C+2}
	if ( tabuleiro1[linha_cruz][coluna_cruz+2] == "3" ) {
		tabuleiro2[linha_cruz][coluna_cruz+2] = "3";
	}else{
		tabuleiro2[linha_cruz][coluna_cruz+2] = "5";
	}
// {L+1,C}
	if ( tabuleiro1[linha_cruz+1][coluna_cruz] == "3" ) {
		tabuleiro2[linha_cruz+1][coluna_cruz] = "3";
	}else{
		tabuleiro2[linha_cruz+1][coluna_cruz] = "5";
	}
	
// Habilidade Octaedro
// {L-1,C}
	if ( tabuleiro1[linha_octaedro-1][coluna_octaedro] == "3" ) {
		tabuleiro2[linha_octaedro-1][coluna_octaedro] = "3";
	}else{
		tabuleiro2[linha_octaedro-1][coluna_octaedro] = "5";
	}
// {L,C-1} 
	if ( tabuleiro1[linha_octaedro][coluna_octaedro-1] == "3" ) {
		tabuleiro2[linha_octaedro][coluna_octaedro-1] = "3";
	}else{
		tabuleiro2[linha_octaedro][coluna_octaedro-1] = "5";
	}
//  {L,C} - Ponto de origem
	if ( tabuleiro1[linha_octaedro][coluna_octaedro] == "3" ) {
		tabuleiro2[linha_octaedro][coluna_octaedro] = "3";
	}else{
		tabuleiro2[linha_octaedro][coluna_octaedro] = "5";
	}
// {L,C+1} 
	if ( tabuleiro1[linha_octaedro][coluna_octaedro+1] == "3" ) {
		tabuleiro2[linha_octaedro][coluna_octaedro+1] = "3";
	}else{
		tabuleiro2[linha_octaedro][coluna_octaedro+1] = "5";
	}
// {L+1,C} 
	if ( tabuleiro1[linha_octaedro+1][coluna_octaedro] == "3" ) {
		tabuleiro2[linha_octaedro+1][coluna_octaedro] = "3";
	}else{
		tabuleiro2[linha_octaedro+1][coluna_octaedro] = "5";
	}
	
	// Print do tabuleiro a cada loop
	system("cls");
	printf("\n-------------------------------------------------------------");
	printf("\n \t\t Resultado da Guerra");
	printf("\n-------------------------------------------------------------\n");
	for (int i = 0; i < lin; i++) {
		printf("\t");
        for (int j = 0; j < con; j++) {
            printf(" %s ", tabuleiro2[i][j]); 
        }
        printf("\n");
	}
	printf("\n-------------------------------------------------------------");
    
    return 0;
}
