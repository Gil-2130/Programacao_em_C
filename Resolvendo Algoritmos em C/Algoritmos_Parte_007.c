/*
 * Leia uma variável numérica n e
 * imprima somente se a mesma for maior que 100,
 * caso contrário, imprima com o valor 0.
 *
 * PSEUDOCÓDIGO;
 * receber_valor;
 * 	se valor > 100 então
 * 		escrever valor;
 * 	senão
 * 		valor = 0;
 * 		escrever valor;
 */

// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

// Programa Principal
int main(){
	
	// Declarando variavel N
	int n;
	
	// Obtendo umm valor e associando a N(ponteiro)
	printf("Digite um valor: \n");
	fflush(stdout);
	scanf("%d", &n);
	
	// Condicional se n for maior que 100
	if(n > 100){
		printf("O valor digitado foi %d", n);
	}
	
	// Caso a condição anterior não seja satisfeita...
	else{
		printf("O valor inserido %d, ", n);
		n = 0;
		printf("agora passará a ser %d.", n);
	}
	return 0;
}
