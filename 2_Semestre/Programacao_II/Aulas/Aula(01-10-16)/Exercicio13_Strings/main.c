/**
EL_13) Escreva um programa em C que leia uma string (no máximo 50 caracteres) via teclado e informe a quantidade
de letras “a” presentes na string (podendo ser maiúscula ou minúscula).
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 50

int main()
{
    char treco[TAMANHO], percorre, contador = 0;
    printf("Digite uma frase/palavra (max. 50 caracteres): ");
    fflush(stdin);
    fgets(treco, TAMANHO, stdin);

    for(percorre = 0; percorre < strlen(treco); percorre++){
        if(treco[percorre] == 'a' || treco[percorre] == 'A'){
            contador++;
        }
    }
    system("cls");
    printf("\nA quantidade de letras 'a'/'A' da string digitada eh: %d", contador);
    return 0;
}
