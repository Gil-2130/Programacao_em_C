/*
 * Tendo como dados de entrada; a altura e sexo de uma pessoa,
 * construa um algoritmo que calcule seu peso ideal,
 * utilizando as seguintes fórmulas:
 *
 * 	P/Homens; (72.7 * altura) - 58
 *	P/Mulheres; (62.1 * altura) - 44.7
 *
 * Receba altura
 * Receba sexo
 * 	se sexo == 'M' ou sexo == 'm' então
 * 		peso_ideal = (72.7 * altura) - 58
 * 	se sexo == 'F' ou sexo == 'f' então
 *		peso_ideal = (62.1 * altura) - 44.7
 * 	escrever peso_ideal
 *
 */

// Biblioteca de entrada e saídas padrão
#include <stdio.h>

// Programa Principal
int main(){
	
	// Declarando Variáveis
	float altura, peso_ideal;
	char sexo;
	
	// Obtendo a altura do usuário
	printf("Informe a sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);
	getchar(); // ou gets(stdin) em ambos os casos funcionará
	
	// Obtendo o sexo do usuário
	printf("Informe o seu sexo[M/F] ");
	fflush(stdout);
	scanf("%c", &sexo);
	
	// Condicional para sexo masculino
	if (sexo == 'm' || sexo == 'M'){
		peso_ideal = (72.7 * altura) - 58;
		printf("Você é do sexo masculino, ");
		printf("Seu peso ideal é %.2f", peso_ideal);
	}
	else if (sexo == 'f' || sexo == 'F'){
		peso_ideal = (62.1 * altura) - 44.7;
		printf("Você é do sexo feminino, ");
		printf("Seu peso ideal é %.2f", peso_ideal);
	}
	
	else if (sexo != 'f' || sexo != 'F' || sexo != 'm' || sexo != 'M'){
		printf("Opção inválida");
	}
	
	else{
		printf("Opção Inválida!");
	}


	return 0;
}
