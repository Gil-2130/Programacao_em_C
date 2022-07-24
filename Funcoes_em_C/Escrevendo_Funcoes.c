/*
 * Escrevendo funções
 *
 * Tipo de retorno;
 * nome;
 * parâmetros de entrada (opcional);
 * implementação;
 * retorno (opcional)
 *
 */

// Importando biblioteca de entrada e saída padrão
#include <stdio.h>

// função vazia (sem retorno)
void mensagem(){
	printf("Olá Mundo");
}

// Função de soma
int soma(int num1, int num2){
	return num1 + num2;
	// ou
//  int res = num1 + num2;
//	return res;
}

void proximo_char(char caractere){
	printf("%c", caractere + 1);
}

//Programa principal(este será executado primeiro antes dos outros)
int main(){
	printf("Olá...teste");
	return 0; // Significa executado com sucesso. Qualquer valor diferente disso, significa foi executado sem sucesso.
}
