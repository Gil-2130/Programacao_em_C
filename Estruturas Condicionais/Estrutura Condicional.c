/* Estrutura Condicional simples e composta.
 * No exemplo a seguir, usaremos uma aplicação de condicional simples, lembrando que será
 * executado um teste lógico em que, se o resultado for verdadeiro, ele trará uma resposta;
 * Caso contrário, retornará nada.
 *
 * Veja no exemplo que segue a situação de um jovem que verifica se poderá ou não tirar a
 * carteira de habilitação:
 */

// Importando biblioteca padrão de entrada e saída de dados
#include <stdio.h>

//int main(){
//	
//	int idade;
//	printf("\nDigite a sua idade: ");
//	scanf("%d", &idade);
//
//	if (idade >= 18){
//		printf("Você pode tirar sua habilitação, você é maior de idade");
//	}
//	else
//		printf("Você não pode tirar sua habilitação");
//
//	return 0;
//}

int main(){
	
	float orcamento;

	printf("\nDigite o valor do orçamento para viagem:\n");
	scanf("%f", &orcamento);

	if(orcamento > 10000){
		printf("Você pode fazer uma viagem internacional");
	}

	else if(orcamento == 10000){
		printf("Recomendo que faça sua viagem nacionalmente.");
	}

	else
		printf("Fique em casa!!");

	return 0;
}
