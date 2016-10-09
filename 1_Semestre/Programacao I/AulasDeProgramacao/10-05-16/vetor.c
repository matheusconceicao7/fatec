#include <stdio.h>

int main(void){
    int vetor[5];
    vetor[0] = 3;
    vetor[1] = 5;
    vetor[2] = 4;
    vetor[3] = 9;
    printf("Valor = %d\n", vetor[1]);
    printf("Digite o valor: ");
    scanf("%d", &vetor[4]);
    printf("%d\n", vetor[4]);
}
