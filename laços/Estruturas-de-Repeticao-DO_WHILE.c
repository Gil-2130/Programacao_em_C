/*
 * Estrutura de repeti��o
 * DO...WHILE(fa�a...enquanto)
 *
 * Utilizado quando voc� precisa de um loop onde
 * n�o se tenha um n�mero fixo de elementos
 * mas que tenha um crit�rio de parada.
 * Antes de iniciar o loop, a condi��o ser� checada.
 *
 *
 * PROBLEMA:
 * Fa�a um program, no qual recveba e some(v�rios) n�meros
 * inteiros at� que o n�mero de entrada seja 0 e apresente a soma
 * no final.
 */

// Importando biblioteca de entrada e sa�da
#include <stdio.h>

int main(){
	// declarando e inicializando vari�veis
	int numero, soma = 0;

	// fa�a
	do{
		// Entrada
		printf("\nInforme um n�mero: ");
		scanf("%d", &numero);

		// Processamento
		soma = soma + numero;
	}

	// Ap�s o fa�a
	while(numero != 0);

	// Sa�da
	printf("\nA soma � %d", soma);


	return 0;
}
