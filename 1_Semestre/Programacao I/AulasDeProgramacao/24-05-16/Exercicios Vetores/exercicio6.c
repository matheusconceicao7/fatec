#include <stdio.h>

int main(void){
    int numeros[10];
    int i, soma = 0;

    for(i = 0; i<10; i++){
        printf("Digite o numero da posicao %d: ", i+1);
        scanf("%d", &numeros[i]);
        printf("\n");
        soma = soma + numeros[i];
    }
    printf("A soma dos numeros digitados resulta em: %d.\n", soma);
}
