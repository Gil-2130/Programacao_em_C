// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

// Criando programa Principal
int main(){
	
	FILE *arq;

	char c;
	arq = fopen("arquivo.txt", "r");

	if (arq){
		while((c = getc(arq)) != EOF){ // End Of File
			printf("%c", c);
		}
	}
	
	else {
		printf("Não encontrei o arquivo");
	}
	fclose(arq);

	return 0;
}
