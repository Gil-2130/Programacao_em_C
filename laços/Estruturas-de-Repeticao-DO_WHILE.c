/*
 * Estrutura de repetição
 * DO...WHILE(faça...enquanto)
 *
 * Utilizado quando você precisa de um loop onde
 * não se tenha um número fixo de elementos
 * mas que tenha um critério de parada.
 * Antes de iniciar o loop, a condição será checada.
 *
 *
 * PROBLEMA:
 * Faça um program, no qual recveba e some(vários) números
 * inteiros até que o número de entrada seja 0 e apresente a soma
 * no final.
 *
 */

// Importando biblioteca de entrada e saída
#include <stdio.h>

int main(){
	// declarando e inicializando variáveis
	int numero, soma = 0;

	// faça
	do{
		// Entrada
		printf("\nInforme um número: ");
		scanf("%d", &numero);

		// Processamento
		soma = soma + numero;
	}

	// Após o faça
	while(numero != 0);

	// Saída
	printf("\nA soma é %d", soma);


	return 0;
}
