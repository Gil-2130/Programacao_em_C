/*
 * Tipos de Dados - Numéricos => inteiros e reais
 */

// importando biblioteca de entrada e saida de dados
#include <stdio.h>

// Criando programa
int main(){
	// declarando variável do tipo Int
	int nota1, nota2;		// 7, 80, -1

	// Declarando variável do tipo Float/Real
	float media; 		// 7.5, 85.9, -25.5

	// Declarando variavel do tipo Float/Real(2) -- Não muito utilizado
	//double numero_dbl; 		//7.5, 89.9, -25,5

	// Entrada de Dados
	printf("\nDigite a primeira nota: ");
	scanf("%d", &nota1);
	printf("\nDigite a segunda nota: ");
	scanf("%d", &nota2);

	// Processamento
	media = (nota1 + nota2) / 2;

	// Saída
	printf("\nA média do aluno é %.2f", media);

	return 0;

}
