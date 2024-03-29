// Biblioteca de Entrada e Saídas Padrão
#include <stdio.h>

// Biblioteca para manipulação de Strings
#include <string.h>

// Criando Estrutura Referente a contato
struct st_contato{
	
	// Criando variáveis, seus tipos e Tamanhos
	char nome[100];
	char telefone[15];
	char email[50];
	int ano_nasc;
};

// Criando Estrutura referente á Agenda
struct st_agenda{
	struct st_contato contatos[100];
}agenda;

// Programa Principal
int main(){
	
	// Laço
	for (int i = 0; i < 2; i++){
		
		// Obtendo o nome do usuário
		printf("Informe o nome: ");
		fflush(stdout);
		fgets(agenda.contatos[i].nome, 100, stdin);
		
		// Obtendo o telefone do Usuário
		printf("Informe o telefone: ");
		fflush(stdout);
		fgets(agenda.contatos[i].telefone, 15, stdin);
		
		// Obtendo o E-mail do usuário
		printf("Informe o e-mail: ");
		fflush(stdout);
		fgets(agenda.contatos[i].email, 50, stdin);
		
		// Obtendo o ano de nascimento do usuário
		printf("Informe ano de nascimento: ");
		fflush(stdout);
		scanf("%d", &agenda.contatos[i].ano_nasc);
		getchar();

	}

	// Laço
	for (int i = 0; i < 2; i++){
		/* Na saída do print, será imprimido uma linha em branco,
		 * que pode se tornar desagradável.
		 * Para evitar essa linha em branco, usamos a função strtok junto com \n
		 * para não ser impresso o espaço em branco;
		 * printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n");
		 */
		
		// Saída dos Dados
		printf("========== Dados da Agenda ========== \n");
		printf("========== %dº Contato ========= \n", (i + 1));
		printf("Nome: %s\n", agenda.contatos[i].nome);
		printf("telefone: %s\n", agenda.contatos[i].telefone);
		printf("Email: %s\n", agenda.contatos[i].email);
		printf("Ano de Nascimento: %d\n", agenda.contatos[i].ano_nasc);
	}

	return 0;
}
