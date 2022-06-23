#include <stdio.h>

/*
 * Prot�tipo de fun��es s�o utilizadas para indicar ao programa principal,
 * quais s�o as fun��es que utilizaremos dentro dele e onde est�o declaradas.
 */
// prot�tipo de fun��es(assinatura das fun��es - tipo de retorno, nome, par�metros de entrada)
int soma(int num1, int num2);
void mensagem();

int main(){
	int n1, n2, ret;

	printf("Informe o 1� n�mero: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o 2� n�mero: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret = soma(n1, n2);
	printf("A soma de %d + %d � %d\n", n1, n2, ret);

	mensagem();
	return 0;
}

int soma(int num1, int num2){
	return num1 + num2;
}
void mensagem(){
	printf("Seja bem vindo!");
}
