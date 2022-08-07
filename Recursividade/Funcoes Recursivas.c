/*

 * Funções Recursivas nada mais são do que funções criadas
 * para resolver problemas chamando elas mesmas.
 * Parece algo confuso mas é simples, algo semelhante a um loop com uma condição
 * de parada até que a condição seja atendida e o problema resolvido.
 
 */

#include <stdio.h>

int fib(int n){
	
	if (n == 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main(){

	int qtd;

	printf("Informe o tamnanho da sequência fibonacci: \n");
	fflush(stdout);
	scanf("%d", &qtd);

	for (int i = 0; i < qtd; i++){
		printf("%d ", fib(i + 1));
	}

	return 0;

}
