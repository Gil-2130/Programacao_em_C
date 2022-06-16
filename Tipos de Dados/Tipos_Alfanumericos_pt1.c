/*
 * Tipos de Dados - Alfanum�ricos
 * 		- Characteres;
 * 		- Strings*;
 *
 * 	Na linguagem C, n�o existe o tipo de dado String.
 *
 * 	Ex; String => "asdfghert" tudo que estiver dentro de aspas duplas
 *
 * 	Ex caractere => 's'  tudo que estiver dentro de aspas simples
 */

#include <stdio.h>

int main(){
	// Declarando variavel do tipo caractere
	char opcao;

	// Sa�da de dados
	printf("Informe a op��o: \n");
	printf("A - Saldo da conta. \n");
	printf("B - Extrato da conta. \n");
	printf("C - Limite da conta. \n");

	// Entrada de dados
	scanf("%c", &opcao);

	// Condicional if
	if(opcao == 'A'){
		printf("Seu saldo � ...\n");
	}
	else if(opcao == 'B'){
		printf("Extrato da conta:...\n");
	}
	else if(opcao == 'C'){
		printf("Limite da conta:...\n");
	}
	else{
		printf("Op��o inv�lida...\n");
	}

	// Gerando alfabeto atrav�s de c�digo alfanum�rico da tabela ASCII
	for(int i = 97; i <= 122 ; i +=1){
		printf("Dicion�rio Alfanum�rico: \n");
		printf("Imprimindo em Decimal; %d\n", i);
		printf("Imprimindo em Caractere; %c\n", i);
	}

	return 0;
}
