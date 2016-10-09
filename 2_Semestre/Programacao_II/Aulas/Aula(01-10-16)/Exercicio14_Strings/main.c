/**

EL_14) Escreva um programa em C que conte o número de vogais presentes em uma string informada
via teclado por um usuário. Observação: as letras podem estar grafadas em caixa alta ou caixa
baixa.
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
int main()
{
    char treco[TAM];
    int percorre, contador = 0;
    printf("Digite uma frase/palavra (max. 100 caracteres): ");
    fgets(treco, TAM, stdin);

    for(percorre = 0; percorre < strlen(treco); percorre++){
        /**if(treco[percorre] == 'a' || treco[percorre] == 'A' ||
           treco[percorre] == 'e' || treco[percorre] == 'E' ||
           treco[percorre] == 'i' || treco[percorre] == 'I' ||
           treco[percorre] == 'o' || treco[percorre] == 'O' ||
           treco[percorre] == 'u' || treco[percorre] == 'U'){
            contador++;
        }**/
        if(strchr("aeiouAEIOU",treco[percorre]) != NULL){
            contador++;
        }
    }

    system("cls");
    printf("\nA quantidade de vogais da string digitada eh: %d", contador);

    return 0;
}
