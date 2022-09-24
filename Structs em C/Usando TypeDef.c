/*
 * TypeDef -> Redefinir Tipos
 */

// Biblioteca de Entrada e saídas Padrão
#include <stdio.h>

// Programa Principal
int main(){
	typedef float nota;

	// Declarando Variáveis
	nota prova1 = 7.0;
	nota prova2 = 6.0;

	// processamento
	nota soma = prova1 + prova2;

	// Saída
	printf("A soma das notas é %.2f", soma);

	return 0;
	
}
