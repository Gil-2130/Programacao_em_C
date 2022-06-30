#include <stdio.h>
#include <string.h>

struct st_contato{
	char nome[100];
	char telefone[15];
	char email[50];
	int ano_nasc;
};

struct st_agenda{
	struct st_contato contatos[100];
}agenda;

int main(){

	for (int i = 0; i < 2; i++){
		printf("Informe o nome: ");
		fflush(stdout);
		fgets(agenda.contatos[i].nome, 100, stdin);

		printf("Informe o telefone: ");
		fflush(stdout);
		fgets(agenda.contatos[i].telefone, 15, stdin);

		printf("Informe o e-mail: ");
		fflush(stdout);
		fgets(agenda.contatos[i].email, 50, stdin);

		printf("Informe ano de nascimento: ");
		fflush(stdout);
		scanf("%d", &agenda.contatos[i].ano_nasc);
		getchar();

	}

	for (int i = 0; i < 2; i++){
		/* Na sa�da do print, ser� imprimido uma linha em branco,
		 * que pode se tornar desagrad�vel.
		 * Para evitar essa linha em branco, usamos a fun��o strtok junto com \n
		 * para n�o ser impresso o espa�o em branco;
		 * printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n");
		 */

		printf("========== Dados da Agenda ========== \n");
		printf("========== %d� Contato ========= \n", (i + 1));
		printf("Nome: %s\n", agenda.contatos[i].nome);
		printf("telefone: %s\n", agenda.contatos[i].telefone);
		printf("Email: %s\n", agenda.contatos[i].email);
		printf("Ano de Nascimento: %d\n", agenda.contatos[i].ano_nasc);
	}

	return 0;
}
