/*
 * IFndef - Diretiva de Compilação
 */

// Biblioteca padrão
#include <stdio.h>

// Criando Constante - Valor não pode ser alterado
//#define PI 3.14567

//Uso do IFndef (se determinada variável não tiver sido definida, então ela será criada
#ifndef PI
#define PI 3.14567
#endif

int main(){
	
	// Criando Variável (valor pode ser alterado a qualquer momento durante a execução
	int valor = 5;
	printf("O valor é %d\n", valor);

	valor = 450;

	printf("Agora o valor é %d\n", valor);
	printf("PI vale %.2f\n", PI * 2); // Podemos fazer alguma operação com o valor mas nuca alterá-lo

	return 0;
}
