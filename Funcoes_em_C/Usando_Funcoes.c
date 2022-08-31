/*
 * Usando funções
 *
 * main -> principal(será executado primeiro)
 */


// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

// função vazia (sem retorno)
void mensagem(){
	
	printf("Olá Mundo\n");
}

// Função de soma
int soma(int num1, int num2){
	return num1 + num2;
	// ou
//  int res = num1 + num2;
//	return res;
}

void proximo_char(char caractere){
	printf("%c", caractere + 1);
	
}

//Programa principal(este será executado primeiro antes dos outros)
int main(){
	// Imprimindo msg principal
	printf("Olá...\n");

	// FUNÇÃO MENSAGEM -> imprimindo a função mensagem(void) criada anteriormente
	mensagem();

	// FUNÇÃO SOMA -> Realizando cálculo e imprimindo resultados
	int retorno = soma(4, 6);
	printf("O retorno da operação é %d\n", retorno);
	// OU
	printf("Retorno = %d\n", soma(5, 15));



	// FUNÇÃO PROXIMO_CHAR -> Imprimindo caracteres
	char caractere = 'a';
	proximo_char(caractere);


	return 0; // Significa executado com sucesso. Qualquer valor diferente disso, significa foi executado sem sucesso.
}
