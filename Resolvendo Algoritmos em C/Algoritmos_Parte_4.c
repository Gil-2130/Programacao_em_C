/*
 * Fa�a um algoritmo que converta metros para cent�metros.
 *
 * CONVERS�O:
 *
 * A) Receba o tamanho em metros
 * B) Multiplique o tamanho por 100
 * C) Imprima o resultado da multiplica��o
 */

// Biblioteca de entrada e sa�da de dados
#include <stdio.h>

// Criando programa
int main(){
	// Declarando vari�veis
	float metro, centimetro;

	// Entrada de Dados
	printf("Insira a medida em metros: ");
	fflush(stdout);
	scanf("%f", &metro);

	// Processamento
	centimetro = metro * 100;

	// Sa�da
	printf("O valor inserido, corresponde a %.2f cent�metros", centimetro);

	return 0;
}
