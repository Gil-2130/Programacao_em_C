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
 */

// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

// Criando programa principal
int main(){

	int numeros[2][2];
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;

	for(int linha = 0; linha < 2; linha = linha + 1){
		for(int coluna = 0; coluna < 2; coluna = coluna + 1){
			printf("valor na posição [%d][%d] vale %d\n",linha, coluna, numeros[linha][coluna]);
		}
	}
}
