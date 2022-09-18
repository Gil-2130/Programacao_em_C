// Biblioteca de Entrada e Saídas padrão 
#include <stdio.h>

// Biblioteca para manipulação de Strings
#include <string.h>

// Criando uma STRUCT(Estrutura)
struct st_aluno{
	char nome[50];
	char curso[100];
	char matricula[10];
	int ano_nasc;
}aluno1;

// Programa Principal
int main(){
	
	// Obtendo o nome do Cliente
	printf("Informe o nome do aluno: \n");
	fflush(stdout);
	fgets(aluno1.nome, 50, stdin);
	
	// Obtendo o nome do curso desejado
	printf("Informe o curso desejado: \n");
	fflush(stdout);
	fgets(aluno1.curso,  100, stdin);
	
	// Obtendo o código de matrícula do aluno
	printf("Informe a matrícula do aluno: ");
	fflush(stdout);
	fgets(aluno1.matricula, 10, stdin);

	// Obtendo o ano de nascimento do usuário
	printf("Informe o Ano de nascimento do aluno: \n");
	fflush(stdout);
	scanf("%d", &aluno1.ano_nasc);
	
	// Imprimindo Resultados
	printf("========= Dados do ALuno ========= \n");
	printf("Nome: %s\n", aluno1.nome);
	printf("Ano Nasc: %d\n", aluno1.ano_nasc);
	printf("Curso: %s\n", aluno1.curso);
	printf("Matrícula: %s\n", aluno1.matricula);

	return 0;
	
}
