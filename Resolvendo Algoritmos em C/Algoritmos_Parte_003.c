/*
 * Faça um algoritmo que peça dois números e imprima a soma deles
 *
 * SOMAR/Pseudocódigo:
 * 	A) Receba o 1º número
 * 	B) Receba o 2º número
 * C) Some os números recebidos
 * D) Mostre o resultado da soma anterior
 */

#include <stdio.h>

int main(){
	
	// Declarando variáveis
	int num1, num2, soma;

	// Entradas
	printf("Informe o 1º número: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o 2º número: ");
	fflush(stdout);
	scanf("%d", &num2);

	// Processamento
	soma = num1 + num2;

	// Saída
	printf("A soma de %d + %d = %d", num1, num2, soma);
	return 0;
}
