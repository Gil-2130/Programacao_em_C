// Biblioteca de Entrada e Saídas Padrão
#include <stdio.h>

// Biblioteca de Manipulação de Strings
#include <string.h>

// Criando STRUCT(Estrutura)
struct st_aluno{
	char nome[100];
	char curso[50];
	char matricula[10];
	int ano_nasc;
}alunos[5]; //Array com 05 elementos(nesse caso; alunos)

// Programa Principal
int main(){
	// array com 10 elementos(nesse caso; alunos)
  //struct st_aluno alunos[05] -- Neste caso precisamos criar um laço para preencher o array

	// Laço para obter os dados
	for (int i = 0; i < 5; i++){
		
		// Obtendo nome do Aluno
		printf("informe o nome do aluno: \n");
		fflush(stdout);
		fgets(alunos[i].nome, 100, stdin);
		
		// Obtendo o nome do curso desejado
		printf("Informe o curso desejado: \n");
		fflush(stdout);
		fgets(alunos[i].curso, 50, stdin);

		// Obtendo a matrícula
		printf("Informe a matrícula; \n");
		fflush(stdout);
		fgets(alunos[i].matricula, 10, stdin);

		printf("informe o ano de nascimento: \n");
		fflush(stdout);
		scanf("%d", &alunos[i].ano_nasc);

		getchar();

	}
	// Laço para ler os dados do array criado
	for (int i = 0; i < 5; i++){

		// imprimindo Resultados
		printf("========== Dados do Aluno ========= \n", (i + 1));
		printf("Nome: %s\n", alunos[1].nome);
		printf("Curso: %s\n", alunos[1].curso);
		printf("Matrícula: %s\n", alunos[1].matricula);
		printf("Ano Nasc.: %d", alunos[1].ano_nasc);
	}

	return 0;
}
