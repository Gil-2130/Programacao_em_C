// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

// Crinado função que incremente um número
void incrementa(int* valor){
	
	printf("Antes de incrementar:\n");
	printf("O contador vale %d.\n", *valor);
	printf("O endereço de memória é %d\n", valor);

	printf("Depois de incrementar:\n");
	printf("O contador agora vale %d.\n", 2 + (*valor));
	printf("O endereço de memória é %d\n", valor);
}

int main(){
	// Criando Variável Contador
	int contador = 10;
	
	// Chamando a função criada anteriormente e aplicando ela ao nosso contador
	incrementa(&contador);
	printf("O contador agora vale %d\n", contador);
	printf(" endereço de memória é %d\n", &contador);

	return 0;
}
