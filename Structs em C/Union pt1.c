// Biblioteca de Entrada e Saídas Padrão
#include <stdio.h>

// Biblioteca para manipulação de Strings
#include <string.h>

/*
 * Union separa e utiliza apenas o espaço da maior variável
 * Isto significa que a cada nova execução, o valor antigo será sobrescrito pelo novo
 */

// Definindo uma UNION
union pessoa{
	char nome[100];
	int idade;
};

// Programa Principal
int main(){
	// "Chamando" a union criada anteriormente
	union pessoa pes;
	
	// Obtendo dados
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
