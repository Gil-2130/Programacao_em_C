// Biblioteca de entrada e saída de dados
#include <stdio.h>

/*
 * Protótipo de funções são utilizadas para indicar ao programa principal,
 * quais são as funções que utilizaremos dentro dele e onde estão declaradas.
 */

// protótipo de funções(assinatura das funções - tipo de retorno, nome, parâmetros de entrada)
int soma(int num1, int num2);
void mensagem();

int main(){
	
	int n1, n2, ret;

	printf("Informe o 1º número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o 2º número: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret = soma(n1, n2);
	printf("A soma de %d + %d é %d\n", n1, n2, ret);

	mensagem();
	return 0;
}

int soma(int num1, int num2){
	return num1 + num2;
}
void mensagem(){
	printf("Seja bem vindo!");
}
