/*
 * Compila��o via terminal;
 *
 * gcc arquivo-fonte (opcional) -o nome-programa
 * gcc nome-do-programa.c -o nome-do-programa-executavel.qualquer-coisa
 */

#include <stdio.h>

int main(){

	int qtd, soma=0;

	printf("Quantos n�meros voc� deseja somar? \n");
	scanf("%d", &qtd);

	for (int i = 0; i < qtd; i++){
		soma = soma + i * 2 + 3;
	}
	printf("A soma � %d", soma);

	return 0;
}
