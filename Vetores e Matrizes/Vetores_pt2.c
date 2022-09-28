// Biblioteca de Entrada e Saídas Padrão
#include <stdio.h>

int main(){

	// Vetores de Inteiros
	int numeros[10];
	numeros[0] = 1;
	numeros[1] = 3;
	numeros[2] = 5;
	numeros[3] = 7;
	numeros[4] = 9;

	// Vetores e reais
	float valores[5];
	for(int i = 0; i< 5; i++){
		valores[i] = numeros[i] / 2;
	}
	for(int i = 4; i >= 0; i--){
		printf("%.2f\n", valores[i]);
	}

	return 0;
	
}
