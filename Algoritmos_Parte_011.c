/*
=============== SITUAÇÃO PROBLEMA======================

 * João da Silva, pescador, comprou um microcomputador para controlar o rendimento
 * diário do seu trabalho.
 * Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento
 * de pesca do estado de são paulo(50kg), deve pagar uma multa de R$ 4,00 por quilo excedente.
 *
 * joão precisa que você crie um algoritmo que leia a variável 'p'(peso dos peixes)
 * e verifique se há excesso.
 * Se houver, gravar na variável 'e'(excesso) e na variável 'm'
 * o valor da multa que joão deverá pagar.
 * Caso contrário mostrar tais variáveis com o conteúdo 'zero'.
 *
 * e = 0
 * p = 0
 * receber peso
 * se peso > 50 então
 * 		e = peso - 50
 * 		m = e * 4
 * escrever "Peso: " + peso
 * escrever "Excesso: " + e
 * escrever "Multa: " + m
 */

// Importando Biblioteca de Entrada e Saídas Padrão
#include <stdio.h>

// Programa Principal
int main(){
	
	// Declarando Variáveis e seus tipos
	float p, m;
	char e[8] = "Excesso";
	
	// Obtendo Dados
	printf("Informe o peso dos peixes: \n");
	fflush(stdout);
	scanf("%f", &p);

	if (p > 50){
		m = (p - 50) * 4.00;
		printf("Você deverá pagar R$%.2f em multas", m);
	}
	else {
		m = 0;
		e[0] = 0;
		printf("Multas: %.2f\n", m);
		printf("Excesso: %d", e[0]);
	}
	return 0;
}
