// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

// Programa principal
int main(){
	
	// Criando arquivo no sistema
	FILE *arq;

	/* fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
	 *
	 * w = abrir o arquivo para escrita, se ele não existir então será criado.
	 * mas se o mesmo existir, ele será sobrescrito(muito cuidado ao usar este comando).
	 *
	 * r = abrir o arquivo apenas para leitura(não é possível editar o arquivo)
	 *
	 * wa = abrir o arquivo para edição de conteúdo(se o arquivo já existir, o conteúdo será adicionado nas linhas abaixo)
	 *
	 * Sempre que finalizar a edição, deve-se salvar e encerrar a conxão do arquivo para não perder dados
	 */

	arq = fopen("arquivo.txt", "w");

	return 0;
}
