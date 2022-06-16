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
	// Declarando variavel em C com 50 caracteres
	char nome[50];

	// Sa�da de Dados
	printf("Qual � o seu nome? \n");
	// Para Receber uma string via teclado, utilizamos o gets
	gets (nome);
	// Usamos %s para dizer que o dado recebido ser� do tipo STRING
	printf("Seu nome � %s", nome);

	return 0;
}
