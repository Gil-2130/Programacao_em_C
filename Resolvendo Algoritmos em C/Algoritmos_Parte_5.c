/*
 * fa�a um algoritmo que pergunte quanto voc� ganha por hora e
 * o n�mero de horas trabalhadas no m�s.
 * Calcule e mostre o total do seu sal�rio no referido m�s.
 *
 * CALCULA SAL�RIO
 * A) Receba a quantidade de horas trabalhadas
 * B) Receba o valor da hora
 * C) Multiplique o n�mero de horas trabalhadas pelo valor da hora
 * D) Mostre o resultado da opera��o
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

	printf("Seu sal�rio por m�s ser� de %dR$", pagamento);

	return 0;
}
