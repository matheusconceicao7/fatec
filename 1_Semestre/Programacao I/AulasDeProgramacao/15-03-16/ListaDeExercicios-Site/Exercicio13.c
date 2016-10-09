/**13. Escreva um programa que diga qual é o maior de dois números distintos.
**/

#include <stdio.h>

int main(void){
    int numero1, numero2;

    printf("Digite dois numeros para compara-los:\n\n");
    printf("Primeiro numero: ");
    scanf("%d", &numero1);
    printf("\nSegundo numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        printf("O primeiro numero digitado (%d) eh o maior!",numero1);
    }else{
        printf("O segundo numero digitado (%d) eh o maior!",numero2);
    }
}
