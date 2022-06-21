/*
 * Faça um algoritmo para calcular o estoque médio de uma peça.
 * Sendo que;
 * estoque_médio = (qtd_minimo + qtd_maximo)/2
 *
 * Calcular estoque médio:
 * Receba qtd_minimo
 * Receba qtd_maximo
 * Some qtd_minimo + qtd_maximo
 * Divida o resultado da soma por 2
 * Imprima o resultado da operação
 */

#include <stdio.h>

int main(){
	int qtd_minimo, qtd_maximo;
	float estoque_medio;

	printf("Informe a quantidade minima do estoque: ");
	fflush(stdout);
	scanf("%d", &qtd_minimo);

	printf("Informe a quantidade máxima do estoque: ");
	fflush(stdout);
	scanf("%d", &qtd_maximo);

	estoque_medio = (qtd_minimo + qtd_maximo) / 2;

	printf("O estoque médio equivale a %.2f peças", estoque_medio);

	return 0;
}
