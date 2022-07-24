/*
 *Faça um algoritmo para somar dois números e multiplicar
 *o resultado pelo primeiro número.
 *
 * Passos;
 * 1 - Receba o primeiro numero via teclado
 * 2 - Receba o segundo numero via teclado
 * 3 - Realize a soma de ambos
 * 4 - Use o resultado da soma e multiplique pelo primeiro valor
 * 5 - Imprima o resultado
 * 6 - (opcional) mostre na tela de saída quais foram os números digitados e o resultado do processamento.
 */
// Importando Biblioteca de Entrada e Saída de dados
#include <stdio.h>

int main(){
	// Declarando variáveis
	int num1, num2, soma, multiplicacao;

	// Obtendo dados
	printf("Informe o 1º Número: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("informe o 2º número: ");
	fflush(stdout);
	scanf("%d", &num2);

	// Processamento
	soma = num1 + num2;
	multiplicacao = soma * num1;

	// Saída de Dados
	printf("A soma de %d + %d = %d \n", num1, num2, soma);
	printf("A multiplicação de %d * %d = %d \n", soma, num1, multiplicacao);

	return 0;
}
