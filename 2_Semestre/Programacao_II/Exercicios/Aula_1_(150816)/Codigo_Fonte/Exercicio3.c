#include <stdio.h>

int main(void)
{
    int numero, i,j,k;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i=1; i<=numero; i++)
    {
        j=numero-i;
        while(j>0)
        {
            printf("_");
            j--;
        }
        for(k=1; k<=i; k++)
        {
            printf("*");
            if((k+1)<=i){
                printf("_");
            }
        }
        printf("\n");
    }
}
