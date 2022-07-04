/*
 * Tendo como dados de entrada a altura de uma pessoa,
 * construa um algoritmo que calcule seu peso ideal,
 * usando a seguinte f�rmula: (72.7 * altura) - 58
 *
 * CALCULA PESO IDEAL
 *
 * A) -  Receba a altura da pessoa
 * B) - Multiplique a altura por 72.7
 * C) - Diminua 58 do resultado da multiplica��o
 * D) - Mostre o valor encontrado
 */

#include <stdio.h>

int main(){
	// Declara��o de Vari�veis int e float
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

	// Sa�da
	printf("Seu peso ideal � %.2f\n", peso_ideal);

	// Condicional para calcular faixas de peso
	if(peso_atual == peso_ideal){
		printf("Voc� est� no peso ideal");
	}
	else if(peso_atual > peso_ideal){
		printf("Voc� est� com sobrepeso!");
	}
	else if(peso_atual < peso_ideal){
		printf("Voc� est� abaixo do peso ideal");
	}
	else{
		printf("N�o sei o que digitar aqui...rsrs");
	}

	return 0;
}
