#include <stdio.h>

union numeros{
	int num1, num2, num3, num4, num5;
}n;

int main(){

	int soma = 0;

	n.num1 = 1;
	soma = soma + n.num1;
	printf("O valor de Num1 � %d\n", n.num1);

	n.num2 = 3;
	soma = soma + n.num2;
	printf("O valor de Num2 � %d\n", n.num2);

	n.num3 = 5;
	soma = soma + n.num3;
	printf("O valor de Num3 � %d\n", n.num3);

	n.num4 = 7;
	soma = soma + n.num4;
	printf("O valor de Num4 � %d\n", n.num4);

	n.num5 = 9;
	soma = soma + n.num5;
	printf("O valor de Num5 � %d\n", n.num5);

	printf("A soma vale %d\n", soma);
	printf("'n' est� ocupando %ld bytes de mem�ria", sizeof(n));

	return 0;
}
