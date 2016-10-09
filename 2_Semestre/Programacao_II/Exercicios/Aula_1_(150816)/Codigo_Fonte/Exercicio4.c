 #include <stdio.h>

int main(void)
{

    int numero, i, j, k;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Resultado:\n");

    for(i=numero; i>=1; i--)
    {
        for(j=1; j<=(numero-i); j++)
        {
            printf(" ");
        }
        for(k=i; k>=1; k--)
        {
            printf("*");
            if((k-1 > 0)){
                printf(" ");
            }
        }
        printf("\n");
    }
}
