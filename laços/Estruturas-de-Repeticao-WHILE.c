/*
 * Estrutura de Repetição WHILE
 *
 * Utilizado quando você precisa de loop onde não se tenha um numero fixo
 * de elementos mas que tenha um critério de parada e antes
 * de iniciar o loop, a condição será checada.
 *
 *
 * PROBLEMA;
 * Faça um programa, no qual receba e some números
 * inteiros até que o número de entrada seja 0 e apresente a soma no final
 */


// importando biblioteca de entrada e saída de dados.
#include <stdio.h>

// Início do Programa
int main(){
	
	// Declarando variáveis e inicializando
	int numero, soma = 0;

	// Entrada de dados
	printf("\nDigite um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	// Laço (enquanto o valor for diferente de 0-Condição de parada)
	while (numero != 0){

		// Processamento
		soma = soma + numero;

		// Entrada
		printf("\nDigite um número: ");
		scanf("%d", &numero);
	}

	// Saída do processamento
	printf("A soma total foi %d", soma);

	return 0;
	
}
