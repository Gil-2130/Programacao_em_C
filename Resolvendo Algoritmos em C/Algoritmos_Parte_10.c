/*
 * Tendo como dados de entrada; a altura e sexo de uma pessoa,
 * construa um algoritmo que calcule seu peso ideal,
 * utilizando as seguintes f�rmulas:
 * P/Homens; (72.7 * altura) - 58
 * P/Mulheres; (62.1 * altura) - 44.7
 *
 * Receba altura
 * Receba sexo
 * se sexo == 'M' ou sexo == 'm' ent�o
 * 		peso_ideal = (72.7 * altura) - 58
 * se sexo == 'F' ou sexo == 'f' ent�o
 *		peso_ideal = (62.1 * altura) - 44.7
 * escrever peso_ideal
 *
 */

#include <stdio.h>

int main(){

	float altura, peso_ideal;
	char sexo;

	printf("Informe a sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);
	getchar(); // ou gets(stdin) em ambos os casos funcionar�

	printf("Informe o seu sexo[M/F] ");
	fflush(stdout);
	scanf("%c", &sexo);

	if (sexo == 'm' || sexo == 'M'){
		peso_ideal = (72.7 * altura) - 58;
		printf("Voc� � do sexo masculino, ");
		printf("Seu peso ideal � %.2f", peso_ideal);
	}
	else if (sexo == 'f' || sexo == 'F'){
		peso_ideal = (62.1 * altura) - 44.7;
		printf("Voc� � do sexo feminino, ");
		printf("Seu peso ideal � %.2f", peso_ideal);
	}
	else if (sexo != 'f' || sexo != 'F' || sexo != 'm' || sexo != 'M'){
		printf("Op��o inv�lida");
	}
	else{
		printf("Op��o Inv�lida!");
	}


	return 0;
}
