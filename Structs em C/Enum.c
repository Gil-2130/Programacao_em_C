// Biblioteca de Entrada e Saídas Padrão
#include <stdio.h>

/*
 * enum -> Enumeração, similar ao enumerate do Python
 */

// Enum é semelhante ao ENUMERATE do Python
enum dias_da_semana{
	segunda,  // indice 0
	terca,    // indice 1
	quarta,   // indice 2
	quinta,   // indice 3
	sexta,    // indice 4
	sabado,   // indice 5
	domingo   // indice 6
};

// Programa Principal
int main(){

	enum dias_da_semana d1, d2;

	d1 = segunda;

	d2 = 0;
	
	// Condicionais
	if (d1 == d2){
		printf("Os dias são iguais\n");
	}
	else{
		printf("Os dias não são iguais.\n");
	}

	return 0;
}
