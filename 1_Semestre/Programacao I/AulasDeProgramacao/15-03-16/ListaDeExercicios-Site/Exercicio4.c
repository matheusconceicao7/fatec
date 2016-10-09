/**4. Escreva um programa que receba um número qualquer e mostre o seu dobro.**/

#include <stdio.h>

int main(void){
    int numeroQualquer;

    printf("Digite um numero qualquer e lhe mostrarei seu dobro: ");
    scanf("%d", &numeroQualquer);
    printf("\n\nO dobro de %d eh: %d",numeroQualquer, (numeroQualquer*2));
}
