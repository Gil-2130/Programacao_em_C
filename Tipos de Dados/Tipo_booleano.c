/*
 * Tipos de Dados - Booleanos => Verdadeiro/True ou Falso/False
 *
 * Na linguagem C, não existe o tipo de dado boolean,
 *
 * mas...
 *
 * A linguagem C, reconhece o valor 0 como False
 * e qualquer valor diferente de 0 como verdadeiro.
 */

// Biblioteca de Entrada e Saídas padrão
#include <stdio.h>

// Programa Principal
int main(){
	
	// Declarando variável do tipo inteiro
	int boolean = 1;

	// Condicional
	if(boolean){
		printf("Verdadeiro");
	}
	else{
		printf("Falso");
	}

	return 0;
}
