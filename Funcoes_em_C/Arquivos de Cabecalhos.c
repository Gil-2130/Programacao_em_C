// Biblioteca padr�o de entrada e sa�da de dados(da linguagem C)
#include <stdio.h>
// Biblioteca personalizada(deve estar dentro de aspas duplas.
#include "ajuda.h"


int main(){
	int n1, n2, ret_soma, ret_mult;

	mensagem();

	printf("informe o 1� n�mero: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o 2� n�mero: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret_soma = soma(n1, n2);
	printf("A soma de %d + %d = %d\n", n1, n2, ret_soma);

	ret_mult = mult(n1, n2);
	printf("A multiplica��o de %d * %d = %d\n", n1, n2, ret_mult);
	return 0;
}
