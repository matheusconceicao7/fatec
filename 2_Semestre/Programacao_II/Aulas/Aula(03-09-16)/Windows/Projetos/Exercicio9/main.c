/**EL_09) Faça um algoritmo e um programa que leia 500 números reais do teclado e armazene em um vetor.
Encontre e imprima o menor e o maior valor do vetor.**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vetor[500], numeroMaior=0, numeroMenor=9999, memoria;

    printf("Digite 500 numeros reais do teclado: \n");

    for(i=0; i<500; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vetor[i]);
        memoria = vetor[i];
        if(memoria > numeroMaior){
            numeroMaior = memoria;
        }else if(memoria < numeroMenor){
            numeroMenor = memoria;
        }
    }
    printf("O menor numero eh: %d\n", numeroMenor);
    printf("O maior numero eh: %d\n", numeroMaior);
    return 0;
}
