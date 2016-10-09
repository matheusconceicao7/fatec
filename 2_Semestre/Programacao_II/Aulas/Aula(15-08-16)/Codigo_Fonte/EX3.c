#include <stdio.h>

int main(void)
{
    int num, i,j,k;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Resultado: \n");

    for(i=1; i<=num; i++)
    {
        j=num-i;
        while(j>=1)
        {
            printf(" ");
            j--;
        }
        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
