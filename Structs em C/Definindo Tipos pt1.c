// Biblioteca de Entradas e Saídas Padrão
#include <stdio.h>

// Biblioteca de Manipulação de STRINGS
#include <string.h>

// Struct -> Estrutura

// Definindo uma STRUCT(estrutura)
struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nasc;
};

// Programa Principal
int main(){
	
	// "Chamando" a Struct criada anteriormente
	struct st_aluno aluno1;
	
	// Obtendo Dados de matrícula
	printf("Informe a matr�cula do aluno: \n");
	fflush(stdout);
	fgets(aluno1.matricula, 10, stdin);
	
	// Obtendo o nome do Aluno
	printf("Informe o nome do aluno: \n");
	fflush(stdout);
	fgets(aluno1.nome, 100, stdin);
	
	// Obtendo os Dados do curso
	printf("Informe o curso desejado: \n");
	fflush(stdout);
	fgets(aluno1.curso, 50, stdin);

	printf("Informe o seu ano de nascimento: \n");
	fflush(stdout);
	scanf("%d", &aluno1.ano_nasc);

	printf("========= Dados do Aluno ========\n");
	printf("Matr�cula: %s\n", aluno1.matricula);
	printf("Nome: %s\n", aluno1.nome);
	printf("Curso: %s\n", aluno1.curso);
	printf("Ano Nasc: %d\n", aluno1.ano_nasc);

	return 0;
}
