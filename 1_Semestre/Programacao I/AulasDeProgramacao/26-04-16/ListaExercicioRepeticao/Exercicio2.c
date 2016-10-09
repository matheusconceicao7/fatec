/**
2) Use o comando continue num programa de divisão que respeite a restrição de divisão por zero.
**/

#include <stdio.h>

int main(void){
    float numerador, denominador, resultado;
    for(;;){
        printf("Digite o numerador: ");
        scanf("%f", &numerador);
        printf("Digite o denominador: ");
        scanf("%f", &denominador);
        if(denominador == 0){
            printf("Denominador deve ser diferente de 0!\n\n");
            continue;
        }else{
        break;
        }
    }
    resultado = numerador / denominador;
    printf("\nO resultado da divisao eh: %2.2f", resultado);
}
