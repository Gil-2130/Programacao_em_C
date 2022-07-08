/*
 * Jo�o da Silva, pescador, comprou um microcomputador para controlar o rendimento
 * di�rio do seu trabalho.
 * Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento
 * de pesca do estado de s�o paulo(50kg), deve pagar uma multa de R$ 4,00 por quilo excedente.
 *
 * jo�o precisa que voc� crie um algoritmo que leia a vari�vel 'p'(peso dos peixes)
 * e verifique se h� excesso.
 * Se houver, gravar na vari�vel 'e'(excesso) e na vari�vel 'm'
 * o valor da multa que jo�o dever� pagar.
 * Caso contr�rio mostrar tais vari�veis com o conte�do 'zero'.
 *
 * e = 0
 * p = 0
 * receber peso
 * se peso > 50 ent�o
 * 		e = peso - 50
 * 		m = e * 4
 * escrever "Peso: " + peso
 * escrever "Excesso: " + e
 * escrever "Multa: " + m
 */

#include <stdio.h>

int main(){

	float p, m;
	char e[8] = "Excesso";

	printf("Informe o peso dos peixes: \n");
	fflush(stdout);
	scanf("%f", &p);

	if (p > 50){
		m = (p - 50) * 4.00;
		printf("Voc� dever� pagar R$%.2f em multas", m);
	}
	else {
		m = 0;
		e[0] = 0;
		printf("Multas: %.2f\n", m);
		printf("Excesso: %d", e[0]);
	}
	return 0;
}
