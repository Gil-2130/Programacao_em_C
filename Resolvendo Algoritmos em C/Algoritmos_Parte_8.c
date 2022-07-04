/*
 * Elabore um algoritmo que leia um n�mero.
 * Se positivo, armazene-o em 'a'
 * Se negativo, armazene-o em 'b'
 * No final imprima o resultado
 *
 * PSEUDOC�DIGO;
 *
 * recever valor
 * se valor > 0 ent�o;
 * 		a = valor;
 * 		escrever "valor positivo";
 * 		escrever a
 * sen�o
 * 		b = valor;
 * 		escrever "valor negativo";
 * 		escrever b
 */

#include <stdio.h>

int main(){
	// Declarando tipo e vari�vel
	int numero, a, b;

	// Obtendo dados
	printf("Digite um n�mero: \n");
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
		printf("Valor %d n�o � positivo ou negativo", numero);
	}
	return 0;
}
