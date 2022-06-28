// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

int main(){
	FILE *arq;
	char nome[10], *resultado;

	arq = fopen("arquivo.txt", "r");

	if (arq){
		while (!feof(arq)){ // feof -  file End of File
			resultado = fgets(nome, 10, arq);
			printf("Resultado : %d\n", resultado);
			if (resultado){
				printf("%s\n", nome);
			}
		}
	}
	else {
		printf("Não achei o arquivo");
	}
	fclose(arq);
	return 0;
}
