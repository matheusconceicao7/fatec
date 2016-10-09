#include <stdio.h>

int main(void){
    int numero, i, j;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Resultado:\n");

    for(i=1;i<=numero;i++){
        for(j=numero;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}
