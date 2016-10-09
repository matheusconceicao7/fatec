/**
7) Escreva um programa que receba 10 números inteiros do teclado e diga quantos são pares e quantos são ímpares.
**/

#include <stdio.h>

int main(void){
    int i, numero, contadorPar = 0, contadorImpar = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero % 2 == 0){
            contadorPar++;
        }else{
            contadorImpar++;
        }
    }
    printf("\n----------------------------------------------------------\n");
    printf("\nForam digitados %d numeros pares e %d numeros impares.", contadorPar, contadorImpar);
}
