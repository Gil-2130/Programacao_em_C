// Importando biblioteca de entrada e sa�da padr�o
#include <stdio.h>

// Programa Principal
int main(){
	// Criando arquivo
	FILE *arq;
	// Crinado vari�vel do tipo caractere com at� 10 posi��es/indices
	char fruta[10];

	// Abrindo o arquivo(se ele existir) no modo de edi��o/escrita.
	arq = fopen("frutas.txt", "w");

	// Condicional para adicionar texto/caracteres ao nosso arquivo
	if (arq){

		// Obtendo dados
		printf("Informe uma fruta, ou 0 para sair: \n");
		fflush(stdout);
		// Usando fgets para obter os dados do tipo caractere e adicionar ao arquivo
		fgets(fruta, 10, stdin); // stdin = standard input = entrada padr�o de dados

		// La�o para percorrer e adicionar elementos para nosso arquivo  enquanto o elemento digitado for diferente de zero.
		while (fruta[0] != '0'){
			// fputs "coloca" os elementos fruta no arquivo
			fputs(fruta, arq);
			printf("Informe uma fruta, ou 0 para sair: \n");
			fflush(stdout);
			fgets(fruta, 10, stdin);
		}

	}
	else {
		printf("N�o foi pos�vel criar o arquivo.");
	}
	return 0;
}
