#include <stdio.h>

int main(void){
	int num1, num2, soma;
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	soma = num1 + num2;
	printf("A soma dos dois numeros eh: %d \n", soma);
}
