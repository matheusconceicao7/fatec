/**
EL_16) Faça um programa em C que leia uma palavra pelo teclado e faça a impressão conforme o
exemplo a seguir para a palavra AMOR:

AMOR
AMO
AM
A
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 30

int main()
{
    char palavra[TAM];
    int i, letra;

    printf("Digite uma palavra: ");
    fflush(stdin);
    fgets(palavra, TAM, stdin);

    printf("\n");

    for(letra = (strlen(palavra)-1); letra > 0; letra--){
        for(i = 0; i < letra; i++){
            printf("%c", palavra[i]);
        }
        printf("\n");
    }
    return 0;
}
