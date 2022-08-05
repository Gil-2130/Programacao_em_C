#include <stdio.h>

int main(){
	
	FILE *arq;
	int num, resultado, soma = 0;

	arq = fopen("arquivo0.txt", "r");

	if (arq){
		while (!feof(arq)){
			resultado = fscanf(arq, "%d", &num);
			printf("Resulado: %d\n", resultado);

			if (resultado == 1){
				soma = soma + num;
			}
		}
	}
	else {
		printf("Não encontrei o arquivo.\n");
	}
	printf("A soma dos números encontrados é %d", soma);
	fclose(arq);

	return 0;
}
