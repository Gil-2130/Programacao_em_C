// Importando biblioteca de entrada e sa�da padr�o
#include <stdio.h>

// Programa principal
int main(){
	// Criando arquivo no sistema
	FILE *arq;

	/* fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
	 *
	 * w = abrir o arquivo para escrita, se ele n�o existir ent�o ser� criado.
	 * mas se o mesmo existir, ele ser� sobrescrito(muito cuidado ao usar este comando).
	 *
	 * r = abrir o arquivo apenas para leitura(n�o � poss�vel editar o arquivo)
	 *
	 * wa = abrir o arquivo para edi��o de conte�do(se o arquivo j� existir, o conte�do ser� adicionado nas linhas abaixo)
	 *
	 * Sempre que finalizar a edi��o, deve-se salvar e encerrar a conx�o do arquivo para n�o perder dados
	 */

	arq = fopen("arquivo.txt", "w");

	return 0;
}
