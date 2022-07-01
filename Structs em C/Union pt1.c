#include <stdio.h>
#include <string.h>

/*
 * Union separa e utiliza apenas o espaço da maior variável
 * Isto significa que a cada nova execução, o valor antigo será sobrescrito pelo novo
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

	printf("A variável 'pes' está ocupando %ld bytes de memória", sizeof(pes));


	return 0;
}
