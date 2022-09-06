/*
 * Faça um algoritmo que converta metros para centímetros.
 *
 * CONVERSÃO/Processamento/Pseudocódigo:
 * 	A) Receba o tamanho em metros
 * 	B) Multiplique o tamanho por 100
 * 	C) Imprima o resultado da multiplicação
 */

// Biblioteca de entrada e saída de dados
#include <stdio.h>

// Criando programa
int main(){
	
	// Declarando variáveis
	float metro, centimetro;

	// Entrada de Dados
	printf("Insira a medida em metros: ");
	fflush(stdout);
	scanf("%f", &metro);

	// Processamento
	centimetro = metro * 100;

	// Saída
	printf("O valor inserido, corresponde a %.2f centímetros", centimetro);

	return 0;	
}
