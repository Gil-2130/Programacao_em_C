/*
 * Estrutura de Repeti��o WHILE
 *
 * Utilizado quando voc� precisa de loop onde n�o se tenha um numero fixo
 * de elementos mas que tenha um crit�rio de parada e antes
 * de iniciar o loop, a condi��o ser� checada.
 *
 *
 * PROBLEMA;
 * Fa�a um programa, no qual receba e some n�meros
 * inteiros at� que o n�mero de entrada seja 0 e apresente a soma no final
 */

// importando biblioteca de entrada e sa�da de dados.
#include <stdio.h>

// In�cio do Programa
int main(){
	// Declarando vari�veis e inicializando
	int numero, soma = 0;

	// Entrada de dados
	printf("\nDigite um n�mero: ");
	scanf("%d", &numero);

	// La�o (enquanto o valor for diferente de 0-Condi��o de parada)
	while (numero != 0){

		// Processamento
		soma = soma + numero;

		// Entrada
		printf("\nDigite um n�mero: ");
		scanf("%d", &numero);
	}

	// Sa�da do processamento
	printf("A soma total foi %d", soma);

	return 0;
}
