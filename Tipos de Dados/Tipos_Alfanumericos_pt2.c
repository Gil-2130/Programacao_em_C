/*
 * Tipos de Dados - Alfanuméricos
 * 		- Characteres;
 * 		- Strings*;
 *
 * 	Na linguagem C, não existe o tipo de dado String.
 *
 * 	Ex; String => "asdfghert" tudo que estiver dentro de aspas duplas.
 *
 * 	Ex; Caractere => 's'  tudo que estiver dentro de aspas simples.
 *
 */


// Biblioeca de entrada e saída de dados
#include <stdio.h>

int main(){
	
	// Declarando variavel em C com 50 caracteres
	char nome[50];

	// Saída de Dados
	printf("Qual é o seu nome? \n");
	// Para Receber uma string via teclado, utilizamos o gets
	gets (nome);
	// Usamos %s para dizer que o dado recebido será do tipo STRING
	printf("Seu nome é %s", nome);

	return 0;
}
