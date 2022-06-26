// Importando biblioteca padrão de entrada e saída de dados
#include <stdio.h>

// Criando função para incrementar contador
void incrementa(int* valor){ // O "*" indica que a variavel irá receber o endereço de memória que aponta para um valor
							 // do tipo correspondente


	printf("01) - Antes de incrementar,\n");
	printf("01) - O contador vale %d.\n", (*valor));
	printf("01) - O endereço de memória é %d\n", valor);
	printf("\n");

	printf("02) - Depois de incrementar,\n");
	//valor++; Incrementa após a execução e impressão do valor antigo
	//valor--; Decrementa após a execução e exibição do valor antigo
	//++valor; Incrementa antes da execução e em seguida será mostrado o novo valor
	//--valor; Decrementa antes da execução e em seguida será mostrado o novo valor


	//*valor = *valor + 2;
	printf("02) - O contador vale %d.\n", (++*valor));
	printf("02) - O contador vale %d.\n", 2 + (*valor));
	printf("02) - O endereço de memória é %d\n", valor);
	printf("\n");
}

// Programa principal
int main(){
	// Criando contador
	int contador = 10;
	incrementa(&contador);
	printf("03) - Antes de incrementar,\n");
	printf("03) - Agora contador vale %d.\n", contador);
	printf("03) - O endereço de memória é %d\n", &contador);

	return 0;
}
