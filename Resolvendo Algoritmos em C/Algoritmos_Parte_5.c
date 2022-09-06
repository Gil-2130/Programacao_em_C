/*
 * faça um algoritmo que pergunte quanto você ganha por hora e
 * o número de horas trabalhadas no mês.
 * Calcule e mostre o total do seu salário no referido mês.
 *
 * CALCULA SALÁRIO/Passos (PSEUDOCÓDIGO)
 * 	A) Receba a quantidade de horas trabalhadas
 * 	B) Receba o valor da hora
 * C) Multiplique o número de horas trabalhadas pelo valor da hora
 * D) Mostre o resultado da operação
 */

#include <stdio.h>

int salario(int n1, int n2){
	return (n1 * n2);
}

int main(){

	int horas, valor_hora, pagamento;

	printf("Qual a quantidade de horas trabalhadas? \n");
	fflush(stdout);
	scanf("%d", &horas);

	printf("Qual o valor por hora trabalhada? \n");
	fflush(stdout);
	scanf("%d", &valor_hora);

	pagamento = salario(horas, valor_hora);

	printf("Seu salário por mês será de %dR$", pagamento);

	return 0;
}
