#include <stdio.h>

int main(void)
{
    int numero, i, j, meio;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Resultado:\n");

    meio = numero/2 + 1;
    for(i=1; i<=numero; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j>meio){
                for(j=meio;j>=i;j--){
                    printf("*");
                }
            }else{
            printf("*");
            }
        }
        printf("\n");
    }
}
