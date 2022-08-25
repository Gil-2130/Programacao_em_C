// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

// Programa Principal
int main(){
	
	// Criando arquivo
	FILE *arq;
	
	// Criando variável do tipo caractere com até 10 posições/indices
	char fruta[10];

	// Abrindo o arquivo(se ele existir) no modo de edição/escrita.
	arq = fopen("frutas.txt", "w");

	// Condicional para adicionar texto/caracteres ao nosso arquivo
	if (arq){

		// Obtendo dados
		printf("Informe uma fruta, ou 0 para sair: \n");
		fflush(stdout);
		
		// Usando fgets para obter os dados do tipo caractere e adicionar ao arquivo
		fgets(fruta, 10, stdin); // stdin = standard input = entrada padrão de dados

		// Laço para percorrer e adicionar elementos para nosso arquivo  enquanto o elemento digitado for diferente de zero.
		while (fruta[0] != '0'){
			
			// fputs "coloca" os elementos fruta no arquivo
			fputs(fruta, arq);
			printf("Informe uma fruta, ou 0 para sair: \n");
			fflush(stdout);
			fgets(fruta, 10, stdin);
		}

	}
	
	else {
		printf("Não foi posível criar o arquivo.");
	}
	return 0;
}
