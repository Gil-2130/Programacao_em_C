/*
 * Fa�a um algoritmo para calcular o estoque m�dio de uma pe�a.
 * Sendo que;
 * estoque_m�dio = (qtd_minimo + qtd_maximo)/2
 *
 * Calcular estoque m�dio:
 * Receba qtd_minimo
 * Receba qtd_maximo
 * Some qtd_minimo + qtd_maximo
 * Divida o resultado da soma por 2
 * Imprima o resultado da opera��o
 */

#include <stdio.h>

int main(){
	int qtd_minimo, qtd_maximo;
	float estoque_medio;

	printf("Informe a quantidade minima do estoque: ");
	fflush(stdout);
	scanf("%d", &qtd_minimo);

	printf("Informe a quantidade m�xima do estoque: ");
	fflush(stdout);
	scanf("%d", &qtd_maximo);

	estoque_medio = (qtd_minimo + qtd_maximo) / 2;

	printf("O estoque m�dio equivale a %.2f pe�as", estoque_medio);

	return 0;
}
