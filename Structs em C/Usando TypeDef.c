/*
 * TypeDef -> Redefinir Tipos
 */

#include <stdio.h>

int main(){
	typedef float nota;

	// Declarando Vari�veis
	nota prova1 = 7.0;
	nota prova2 = 6.0;

	// processamento
	nota soma = prova1 + prova2;

	// Sa�da
	printf("A soma das notas � %.2f", soma);

	return 0;
}
