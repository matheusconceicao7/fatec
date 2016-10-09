/**
EL_15) Escreva um programa em C que leia uma string (no máximo 30 caracteres) via teclado.
Inverta a string e armazene em outra variável. Imprima as duas strings no vídeo.
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 30
int main()
{
    char treco[TAM], trecoInvertido[TAM];

    printf("Digite uma frase/palavra: ");
    fflush(stdin);
    fgets(treco, TAM, stdin);

    strncpy(trecoInvertido, treco, (strlen(treco)-1));

    strrev(trecoInvertido);

    printf("%s", treco);
    printf("%s", trecoInvertido);

    return 0;
}
