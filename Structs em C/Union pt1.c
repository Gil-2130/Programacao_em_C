#include <stdio.h>
#include <string.h>

/*
 * Union separa e utiliza apenas o espa�o da maior vari�vel
 * Isto significa que a cada nova execu��o, o valor antigo ser� sobrescrito pelo novo
 */
union pessoa{
	char nome[100];
	int idade;
};

int main(){

	union pessoa pes;

	printf("Insira o seu nome: \n");
	fflush(stdout);
	//fgets(pes.nome, 100, stdin);
	//strcpy(pes.nome, "giliard pereira")
	strcpy(pes.nome, fgets(pes.nome, 100, stdin));
	printf("Dados de %s\n", pes.nome);

	pes.idade = 39;
	printf("%s tem %d anos de idade\n", pes.nome, pes.idade);

	printf("A vari�vel 'pes' est� ocupando %ld bytes de mem�ria", sizeof(pes));


	return 0;
}
