#include <stdio.h>

void incrementa(int* valor){
	printf("Antes de incrementar:\n");
	printf("O contador vale %d.\n", *valor);
	printf("O endere�o de mem�ria � %d\n", valor);

	printf("Depois de incrementar:\n");
	printf("O contador agora vale %d.\n", 2 + (*valor));
	printf("O endere�o de mem�ria � %d\n", valor);
}

int main(){
	int contador = 10;

	incrementa(&contador);
	printf("O contador agora vale %d\n", contador);
	printf(" endere�o de mem�ria � %d\n", &contador);

	return 0;
}
