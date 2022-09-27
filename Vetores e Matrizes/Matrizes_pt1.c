/*
 * Matrizes Pt2
 *
 * array Uni-Dimensional (vetor)
 * [0][1][2][3][4]
 *
 * array Multi-Dimensional (Matriz)
 * [00][01][02][03][04]
 * [10][11][12][13][14]
 * [20][21][22][23][24]
 * [30][31][32][33][34]
 * [40][41][42][43][44]
 *
 *
 */

// Importando biblioteca de entrada e saída padrão de dados
#include <stdio.h>

// Criando programa principal
int main(){
	
	// Matriz 03 linhas,  50 colunas
	char nome[3][50];
	
	// laço para percorrer a matriz
	for(int i = 0; i < 3; i++){
		printf("Qual é o seu nome? \n");
		fflush(stdout);
		gets(nome[i]);
	}

	for(int i = 0; i < 3; i++){
		printf("Olá %s\n", nome[i]);
	}
	return 0;
}
