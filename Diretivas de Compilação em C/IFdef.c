#include <stdio.h>

#ifndef PI
	#define PI 3.14567
#endif

int main(){
	// Vari�vel
	int valor = 5;

	valor = 467;

	printf("O valor � %d\n", valor);

	printf("PI vale %f\n", PI);

	//O c�digo abaixo s� ser� executado se a constante tiver sido definida
#ifdef PI
	printf("O valor de PI � %f\n", PI);
#endif

	return 0;
}

