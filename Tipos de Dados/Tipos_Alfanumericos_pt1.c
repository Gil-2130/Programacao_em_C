/*
 * Tipos de Dados - Alfanuméricos
 * 		- Characteres;
 * 		- Strings*;
 *
 * 	Na linguagem C, não existe o tipo de dado String.
 *
 * 	Ex; String => "asdfghert" tudo que estiver dentro de aspas duplas
 *
 * 	Ex caractere => 's'  tudo que estiver dentro de aspas simples
 *
 */

// Biblioteca de entrada e saída de dados
#include <stdio.h>

int main(){
	// Declarando variavel do tipo caractere
	char opcao;

	// Saída de dados
	printf("Informe a opção: \n");
	printf("A - Saldo da conta. \n");
	printf("B - Extrato da conta. \n");
	printf("C - Limite da conta. \n");

	// Entrada de dados
	fflush(stdout)  // use essa opção se o ECLIPSE imprimir a msg depois do scan
	scanf("%c", &opcao);

	// Condicional if
	if(opcao == 'A'){
		printf("Seu saldo é ...\n");
	}
	else if(opcao == 'B'){
		printf("Extrato da conta:...\n");
	}
	else if(opcao == 'C'){
		printf("Limite da conta:...\n");
	}
	else{
		printf("Opção inválida...\n");
	}

	// Gerando alfabeto através de código alfanumérico da tabela ASCII
	for(int i = 97; i <= 122 ; i +=1){
		printf("Dicionário Alfanumérico: \n");
		printf("Imprimindo em Decimal; %d\n", i);
		printf("Imprimindo em Caractere; %c\n", i);
	}

	return 0;
}
