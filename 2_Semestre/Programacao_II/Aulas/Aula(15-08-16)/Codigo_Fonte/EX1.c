#include <stdio.h>
int main(void)
{
 int i=0;
 int j=0;
 int num=0;

    printf("Digite um valor:");
    scanf("%d", &num);
    printf("Resultado:\n");

    for(i=1;i<=num;i++){
            for(j=1;j<=i;j++){
                printf("*");

            }
            printf("\n");
    }
}


