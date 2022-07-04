/*
 * Leia uma variável numérica n e
 * imprima somente se a mesma for maior que 100,
 * caso contrário, imprima com o valor 0.
 *
 * PSEUDOCÓDIGO;
 * receber_valor;
 * se valor > 100 então
 * 		escrever valor;
 * senão
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
		printf("agora passará a ser %d.", n);
	}
	return 0;
}
