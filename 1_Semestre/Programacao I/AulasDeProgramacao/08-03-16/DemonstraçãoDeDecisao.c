#include <stdio.h>

int main(void){
    int x;
    printf("Digite o valor:");
    scanf("%d",&x);

    if(x>10)
        printf("\n\nO valor de X e maior que 10.");
    else
        printf("\n\nO valor de X e menor ou igual a 10.");
}
