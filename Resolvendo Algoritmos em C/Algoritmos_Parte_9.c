/*
 * Ler um n�mero e verificar se ele � par ou �mpar.
 * Quando for par, armazenar esse valor em 'p'
 * Quando for �mpar, armazenar este valor em 'i'.
 * Exiba 'p' e 'i' no final do processamento.
 *
 * PSEUDOC�DIGO
 * p = 0
 * i = 0
 * receber valor
 * se(valor % 2 == 0)
 * 		ent�o
 * 		p = valor
 * 	sen�o
 * 		i = valor
 * 	escrever p
 * 	escrever i
 */

#include <stdio.h>

int main(){
	int num, p = 0, i = 0;

	printf("Digite um valor: \n");
	fflush(stdout);
	scanf("%d", &num);

	if (num % 2 == 0){
		p = num;
		printf("O n�mero %d � par", num);
	}
	else if (num % 2 == 1){
		i = num;
		printf("O n�mero %d � �mpar", num);
	}
	return 0;
}
