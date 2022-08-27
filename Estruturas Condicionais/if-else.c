/* 
If e else

// Importando biblioteca padrão de entrada e saída de dados

*/

#include <stdio.h>

// Programa principal
int main(){
	int idade;
	printf("Qual é a sua idade?\n");
	scanf("%d", &idade);

	if(idade <= 18){
		printf("você é jovem\n");
	}
	else if(idade > 18 && idade < 50){
		printf("você é adulto\n");
	}
	else{
		printf("Você é idoso\n");
	}

	printf("\nSua idade é %d", idade);

	return 0;
}
