/*
 * Fa�a um algoritmo que pe�a dois n�meros e imprima a soma deles
 *
 * SOMAR:
 * A) Receba o 1� n�mero
 * B) Receba o 2� n�mero
 * C) Some os n�meros recebidos
 * D) Mostre o resultado da soma anterior
 */

#include <stdio.h>

int main(){
	// Declarando vari�veis
	int num1, num2, soma;

	// Entradas
	printf("Informe o 1� n�mero: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o 2� n�mero: ");
	fflush(stdout);
	scanf("%d", &num2);

	// Processamento
	soma = num1 + num2;

	// Sa�da
	printf("A soma de %d + %d = %d", num1, num2, soma);
	return 0;
}
