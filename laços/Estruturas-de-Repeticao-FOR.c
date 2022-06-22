// Estruturas de Repeti��o, for,  while,    do...while
//							para, enquanto, fa�a...enquanto
/*
 * Fa�a um Programa no qual receba e some os n�meros inteiros
 *  at� que a entrada seja 0.
 */

// importando biblioteca de entrada e sa�da de dados.
#include <stdio.h>
// In�cio do Programa
int main(){
	// Vari�veis
	int numero, soma = 0;

	/* Para o int i que inicia em 0, enquanto i for menor que 5,
	 * incrementar i + 1(i++)
	 * argumentos do for: inicializa��o, crit�rio de parada e incremento ou decremento.
	 */
	for(int i = 0; i < 5; i++){

		// Entrada
		printf("\nInforme um n�mero: ");
		scanf("%d", &numero);

		// Processamento
		soma = soma + numero;

	}

	// Sa�da
	printf("A soma � %d", soma);

	return 0;
}
