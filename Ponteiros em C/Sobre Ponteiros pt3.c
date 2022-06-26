/*
 * O asterisco indica um ponteiro
 * Enquanto o & indica um endereco de mem�ria
 */
#include <stdio.h>

int main(){
	// Criando vari�vel do tipo int
	int n;
	// Criando ponteiro que aponta para uma vari�vel do tipo int
	int* ponteiro;

	// Entrada de Dados
	printf("Informe um n�mero: \n");
	fflush(stdout);
	scanf("%d", &n);

	// Inicializando e associando o ponteiro � uma vari�vel
	ponteiro = &n;

	// Sa�da de Dados
	printf("O n�mero digitado foi %d\n", n);
	printf("O endere�o de mem�ria desta vari�vel � %d\n", &n);
	printf("O endere�o de mem�ria do ponteiro � %p", &ponteiro);
	return 0;
}
