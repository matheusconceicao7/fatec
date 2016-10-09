#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, j;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Resultado:\n");

    printf("O");
    for(i = 1; i<=numero; i++){
        printf("-");
    }
    printf("O\n");

    for(j=2; j<numero; j++){
        printf("-");
        for(i=1;i<=numero;i++){
            printf(" ");
        }
        printf("-\n");
    }

    printf("O");
    for(i = 1; i<=numero; i++){
        printf("-");
    }
    printf("O\n");

    return 0;
}
