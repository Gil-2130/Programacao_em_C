#include <stdio.h>

int main(){
	int idade;
	printf("Qual � a sua idade?\n");
	scanf("%d", &idade);

	if(idade <= 18){
		printf("voc� � jovem\n");
	}
	else if(idade > 18 && idade < 50){
		printf("voc� � adulto\n");
	}
	else{
		printf("Voc� � idoso\n");
	}

	printf("\nSua idade � %d", idade);

	return 0;
}
