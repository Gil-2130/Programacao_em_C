/*
 * Leia uma vari�vel num�rica n e
 * imprima somente se a mesma for maior que 100,
 * caso contr�rio, imprima com o valor 0.
 *
 * PSEUDOC�DIGO;
 * receber_valor;
 * se valor > 100 ent�o
 * 		escrever valor;
 * sen�o
 * 		valor = 0;
 * 		escrever valor;
 */

#include <stdio.h>

int main(){
	int n;

	printf("Digite um valor: \n");
	fflush(stdout);
	scanf("%d", &n);

	if(n > 100){
		printf("O valor digitado foi %d", n);
	}
	else{
		printf("O valor inserido %d, ", n);
		n = 0;
		printf("agora passar� a ser %d.", n);
	}
	return 0;
}
