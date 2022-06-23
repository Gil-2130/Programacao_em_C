/*
 * Usando fun��es
 *
 * main -> principal(ser� executado primeiro)
 */

// Importando biblioteca de entrada e sa�da padr�o
#include <stdio.h>

// fun��o vazia (sem retorno)
void mensagem(){
	printf("Ol� Mundo\n");
}

// Fun��o de soma
int soma(int num1, int num2){
	return num1 + num2;
	// ou
//  int res = num1 + num2;
//	return res;
}

void proximo_char(char caractere){
	printf("%c", caractere + 1);
}

//Programa principal(este ser� executado primeiro antes dos outros)
int main(){
	// Imprimindo msg principal
	printf("Ol�...\n");


	// FUN��O MENSAGEM -> imprimindo a fun��o mensagem(void) criada anteriormente
	mensagem();


	// FUN��O SOMA -> Realizando c�lculo e imprimindo resultados
	int retorno = soma(4, 6);
	printf("O retorno da opera��o � %d\n", retorno);
	// OU
	printf("Retorno = %d\n", soma(5, 15));



	// FUN��O PROXIMO_CHAR -> Imprimindo caracteres
	char caractere = 'a';
	proximo_char(caractere);


	return 0; // Significa executado com sucesso. Qualquer valor diferente disso, significa foi executado sem sucesso.
}
