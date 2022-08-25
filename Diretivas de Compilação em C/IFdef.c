// Biblioteca de entrada(input) e saída(output) padrão
#include <stdio.h>

#ifndef PI
	#define PI 3.14567
#endif

int main(){
	// Variável
	int valor = 5;

	valor = 467;

	printf("O valor é %d\n", valor);

	printf("PI vale %f\n", PI);
	

	//O código abaixo só será executado se a constante tiver sido definida
	#ifdef PI
	printf("O valor de PI é %f\n", PI);
	
#endif

	return 0;
}

