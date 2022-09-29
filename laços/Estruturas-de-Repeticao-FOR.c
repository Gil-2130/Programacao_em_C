/*
* Estruturas de Repetição,				 for,  while,    do...while
*							para, enquanto, faça...enquanto
/*
 * Faça um Programa no qual receba e some os números inteiros
 *  até que a entrada seja 0.
 */

// importando biblioteca de entrada e saída de dados.
#include <stdio.h>

// Início do Programa
int main(){
	
	// Variáveis
	int numero, soma = 0;

	/* Para o int i que inicia em 0, enquanto i for menor que 5,
	 * incrementar i + 1(i++)
	 * argumentos do for: inicialização, critério de parada e incremento ou decremento.
	 */
	
	// Laço
	for(int i = 0; i < 5; i++){

		// Entrada
		printf("\nInforme um número: ");
		
		// Liberando o buffer
		fflush(stdout);
		
		//Obtendo dados via teclado
		scanf("%d", &numero);

		// Processamento
		soma = soma + numero;

	}

	// Saída
	printf("A soma é %d", soma);

	return 0;
}
