/*
 * Opera��es Matem�ticas;
 *
 * SOMAR +
 * SUBTRAIR -
 * MULTIPLICAR *
 * DIVIDIR /
 *
 * QUADRADO x ** 2
 * RESTO DA DIVIS�O %
 */

// Importando Biblioteca de entrada e sa�da de dados
#include <stdio.h>

// Criando Programa
int main(){
	int num1, num2, resp;

	// Soma +
	printf("Digite o 1� valor: ");
	fflush(stdout);
	scanf("%d", &num1);
	printf("Digite o 2� valor: ");
	fflush(stdout);
	scanf("%d", &num2);
	resp = num1 + num2;
	printf("A Soma de %d + %d � %d\n", num1, num2, resp);

	// Subtrair
	resp = num1 - num2;
	printf("A Subtra��o de %d - %d � %d\n", num1, num2, resp);

	// Multiplicar *
	resp = num1 * num2;
	printf("A Multiplica��o de %d * %d � %d\n", num1, num2, resp);

	// Dividir / (usaremos o cast para transformar um valor int em float)
	resp = (float)num1 / (float)num2;
	printf("A Divis�o de %d / %d � %.2ff\n", num1, num2, (float)resp);

	// Verificando se determinado valor � par ou �mpar
	if(num1 % 2 ==0){
		printf("%d � par.\n", num1);
	}
	else{
		printf("%d � �mpar.\n", num1);
	}

	return 0;
}
