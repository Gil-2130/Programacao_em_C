// Estruturas de Decisão if, else, else if em C
//						 se, então, então se


// Importando biblioteca de entrada e saída de dados
#include <stdio.h>

// Programa Principal
int main(){
	// Declarando Variáveis
	int idade;

	// Imprimindo msg
	printf("\nQual é a sua idade? ");

	// Solicitando dados ao usuário
	scanf("%d", &idade);

	// Condicionais
	if(idade < 18){
		printf("você é jovem");
	}
	else if(idade > 18 && idade < 50){
		printf("você é adulto");
	}
	else{
		printf("Você é idoso");
	}
	
	// print fora da condicional
	printf("Sua idade é %d", idade);

	return 0;
}

