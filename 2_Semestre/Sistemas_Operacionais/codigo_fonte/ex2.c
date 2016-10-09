#include <stdio.h>

int main(void){
	int vetor[5];
	for(int i = 0; i < 5; i++){
		printf("Digite um numero para colocar na posicao %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	for(int i = 0; i < 5; i++){
		printf("Vetor [%d]: %d\n", i, vetor[i]);
	}
}
