/*
 * O asterisco indica um ponteiro
 * Enquanto o & indica um endereco de memória
 */
#include <stdio.h>

// Programa Principal
int main(){
	// Criando variável do tipo int
	int n;
	// Criando ponteiro que aponta para uma variável do tipo int
	int* ponteiro;

	// Entrada de Dados
	printf("Informe um número: \n");
	fflush(stdout);
	scanf("%d", &n);

	// Inicializando e associando o ponteiro à uma variável
	ponteiro = &n;

	// Saída de Dados
	printf("O número digitado foi %d\n", n);
	printf("O endereço de memória desta variável é %d\n", &n);
	printf("O endereço de memória do ponteiro é %p", &ponteiro);
	return 0;
}
