#include <stdio.h>

int main(void){

    int num, i, j;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Resultado: \n");

    for(i=num;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
