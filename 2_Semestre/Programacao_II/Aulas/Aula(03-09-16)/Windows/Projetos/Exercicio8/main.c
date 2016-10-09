/**Faça um algoritmo e um programa capaz de ler 100 valores e armazená-los em um vetor A. Depois ler mais outros
100 valores e armazená-los em um vetor B. Faça com que um vetor C armazene a soma dos vetores A e B. O primeiro
elemento do vetor C deve armazenar a soma do primeiro elemento do vetor A com o primeiro elemento do vetor B.
O segundo elemento do vetor C deve armazenar a soma do segundo elemento do vetor A com o segundo elemento do vetor
 B. E assim por diante.**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vetorA[100], vetorB[100], vetorC[100];

    printf("Digite 100 numeros para armazenar no vetor A: \n");

    for(i = 0; i < 100; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vetorA[i]);
        //vetorA[i] = i; // -> Usado para teste
    }

    printf("Digite 100 numeros para armazenar no vetor B: \n");

    for(i = 0; i < 100; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vetorB[i]);
        //vetorB[i] = i; // ->Usado para teste
    }

    for(i = 0; i < 100; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("Vetor C [%d] = %d\n", i, vetorC[i]);
    }
    return 0;
}
