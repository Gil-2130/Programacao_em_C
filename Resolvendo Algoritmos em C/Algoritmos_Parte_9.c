/*
 * Ler um número e verificar se ele é par ou ímpar.
 * Quando for par, armazenar esse valor em 'p'
 * Quando for ímpar, armazenar este valor em 'i'.
 * Exiba 'p' e 'i' no final do processamento.
 *
 * PSEUDOCÓDIGO
 * 	p = 0
 * 	i = 0
 * 	receber valor
 * 	se(valor % 2 == 0)
 * 		então
 * 		p = valor
 * 	senão
 * 		i = valor
 * 	escrever p
 * 	escrever i
 */

// Biblioteca de entrada e saídas padrão
#include <stdio.h>

// programa principal
int main(){
	
	// Declarando Variáveis
	int num, p = 0, i = 0;
	
	// Obtendo os dados
	printf("Digite um valor: \n");
	fflush(stdout);
	scanf("%d", &num);
	
	// Condicionais
	if (num % 2 == 0){
		p = num;
		printf("O número %d é par", num);
	}
	else if (num % 2 == 1){
		i = num;
		printf("O número %d é ímpar", num);
	}
	return 0;
	
}
