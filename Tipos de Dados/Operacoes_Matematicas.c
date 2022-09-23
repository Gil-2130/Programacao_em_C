/*
 * Operações Matemáticas;
 *
 * SOMAR +
 * SUBTRAIR -
 * MULTIPLICAR *
 * DIVIDIR /
 *
 * QUADRADO x ** 2
 * RESTO DA DIVISÃO %
 */

// Importando Biblioteca de entrada e saída de dados
#include <stdio.h>

// Criando Programa
int main(){
	
	// Declarando Variveis e tipo específico
	int num1, num2, resp;

	// Soma +
	printf("Digite o 1º valor: ");
	fflush(stdout);
	scanf("%d", &num1);
	printf("Digite o 2º valor: ");
	fflush(stdout);
	scanf("%d", &num2);
	resp = num1 + num2;
	printf("A Soma de %d + %d é %d\n", num1, num2, resp);

	// Subtrair
	resp = num1 - num2;
	printf("A Subtração de %d - %d é %d\n", num1, num2, resp);

	// Multiplicar *
	resp = num1 * num2;
	printf("A Multiplicação de %d * %d é %d\n", num1, num2, resp);

	// Dividir / (usaremos o cast para transformar um valor int em float)
	resp = (float)num1 / (float)num2;
	printf("A Divisão de %d / %d é %.2ff\n", num1, num2, (float)resp);

	// Verificando se determinado valor é par ou ímpar
	if(num1 % 2 ==0){
		printf("%d é par.\n", num1);
	}
	else{
		printf("%d é ímpar.\n", num1);
	}

	return 0;
}
