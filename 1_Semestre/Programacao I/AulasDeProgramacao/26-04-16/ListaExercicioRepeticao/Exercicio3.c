/**
3) Escreva um programa que lê 5 valores e conta quantos destes valores são negativos,
mostrando esta informação no final.
**/

#include <stdio.h>

int main(void){
    int entrada = 0, contador = 0, i;

    for(i = 0; i <= 4; i++){
        printf("Digite um numero: ");
        scanf("%d", &entrada);
        if(entrada < 0){
            contador++;
        }
    }
    printf("\nDurante a execucao foram digitados %d numeros negativos.", contador);
}
