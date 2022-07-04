/*
 * Elabore um algoritmo que leia um número.
 * Se positivo, armazene-o em 'a'
 * Se negativo, armazene-o em 'b'
 * No final imprima o resultado
 *
 * PSEUDOCÓDIGO;
 *
 * recever valor
 * se valor > 0 então;
 * 		a = valor;
 * 		escrever "valor positivo";
 * 		escrever a
 * senão
 * 		b = valor;
 * 		escrever "valor negativo";
 * 		escrever b
 */

#include <stdio.h>

int main(){
	// Declarando tipo e variável
	int numero, a, b;

	// Obtendo dados
	printf("Digite um número: \n");
	fflush(stdout);
	scanf("%d", &numero);

	// Condicionais para numeros positivos ou negativos
	if (numero > 0){
		a = numero;
		printf("Valor positivo: \n%d", a);
	}
	else if (numero < 0){
		b = numero;
		printf("Valor negativo: \n%d", b);
	}
	else{
		printf("Valor %d não é positivo ou negativo", numero);
	}
	return 0;
}
