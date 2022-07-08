/*
 *Fa�a um algoritmo para somar dois n�meros e multiplicar
 *o resultado pelo primeiro n�mero.
 *
 * Passos;
 * 1 - Receba o primeiro numero via teclado
 * 2 - Receba o segundo numero via teclado
 * 3 - Realize a soma de ambos
 * 4 - Use o resultado da soma e multiplique pelo primeiro valor
 * 5 - Imprima o resultado
 * 6 - (opcional) mostre na tela de sa�da quais foram os n�meros digitados e o resultado do processamento.
 */

// Importando Biblioteca de Entrada e Sa�da de dados
#include <stdio.h>

int main(){
	// Declarando vari�veis
	int num1, num2, soma, multiplicacao;

	// Obtendo dados
	printf("Informe o 1� N�mero: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("informe o 2� n�mero: ");
	fflush(stdout);
	scanf("%d", &num2);

	// Processamento
	soma = num1 + num2;
	multiplicacao = soma * num1;

	// Sa�da de Dados
	printf("A soma de %d + %d = %d \n", num1, num2, soma);
	printf("A multiplica��o de %d * %d = %d \n", soma, num1, multiplicacao);

	return 0;
}
