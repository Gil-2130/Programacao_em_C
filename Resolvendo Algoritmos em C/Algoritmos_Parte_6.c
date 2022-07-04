/*
 * Tendo como dados de entrada a altura de uma pessoa,
 * construa um algoritmo que calcule seu peso ideal,
 * usando a seguinte fórmula: (72.7 * altura) - 58
 *
 * CALCULA PESO IDEAL
 *
 * A) -  Receba a altura da pessoa
 * B) - Multiplique a altura por 72.7
 * C) - Diminua 58 do resultado da multiplicação
 * D) - Mostre o valor encontrado
 */

#include <stdio.h>

int main(){
	// Declaração de Variáveis int e float
	float altura, calculo = 72.7, peso_ideal, peso_atual;

	// Recebendo dados
	printf("Informe sua altura: \n");
	fflush(stdout);
	scanf("%f", &altura);

	printf("Informe seu peso atual: \n");
	fflush(stdout);
	scanf("%f", &peso_atual);

	// Processamento para peso ideal
	peso_ideal = (altura * calculo) - 58;

	// Saída
	printf("Seu peso ideal é %.2f\n", peso_ideal);

	// Condicional para calcular faixas de peso
	if(peso_atual == peso_ideal){
		printf("Você está no peso ideal");
	}
	else if(peso_atual > peso_ideal){
		printf("Você está com sobrepeso!");
	}
	else if(peso_atual < peso_ideal){
		printf("Você está abaixo do peso ideal");
	}
	else{
		printf("Não sei o que digitar aqui...rsrs");
	}

	return 0;
}
