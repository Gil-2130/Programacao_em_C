// Biblioteca de Entrada e Saídas padrão
#include <stdio.h>

int main(){
	
	// Vetores e Strings
	char nome[50];
	printf("Qual é o seu nome? ");
	fflush(stdout);
	gets(nome);
	printf("Olá %s\n", nome);

	// Vetores e Caracteres
	char letras[26];
	
	// Criando contador
	int cont = 0;
	
	// Criando laço(para criar alfabeto ASCII)
	for(int i = 97; i <=122; i++){
		letras[cont] = i;
		cont= cont + 1;
	}
	// Imprimindo o Alfabeto e seus valores decimais
	for(int i = 0; i < 26; i++){
		printf("%d = %c\n", letras[i], letras[i]);
	}
	
	return 0;
}
