#include <stdio.h>

/*
 * enum -> Enumeração, similar ao enumerate do Python
 */


enum dias_da_semana{
	segunda,  // indice 0
	terca,    // indice 1
	quarta,   // indice 2
	quinta,   // indice 3
	sexta,    // indice 4
	sabado,   // indice 5
	domingo   // indice 6
};

int main(){

	enum dias_da_semana d1, d2;

	d1 = segunda;

	d2 = 0;

	if (d1 == d2){
		printf("Os dias são iguais\n");
	}
	else{
		printf("Os dias não são iguais.\n");
	}

	return 0;
}
