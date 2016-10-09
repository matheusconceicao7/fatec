/**
Faca um algoritmo e um programa capaz de ler em um vetor A um numero nao previamente determinado
de valores interios positivos. Esses valores devem ser fornecidos pelo usuario ate que ele entre
um valor especial. Depois de ler esses valores, copie-os para um outro betor B. Essa copia deve
ser feita de forma que o valor armazenado no primeiro elemento do vetor A seja copiado para o ultimo
elemento do vetor B. O segundo elemento do vetor A seja copiado para o penultimo elemento do vetor B.
E assim por diante.
**/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100
int main()
{
    int vetorA[TAM], vetorB[TAM], contadorA = 0, contadorB = TAM-1;

    do{
        system("cls");
        printf("Digite um numero para armazenar no vetor A (numero negativo para terminar): ");
        scanf("%d", &vetorA[contadorA]);
        contadorA++;
    }while(vetorA[contadorA-1] >=0 && contadorA < TAM);

    if(contadorA == TAM){
        printf("Limite de valores excedido!\n");
    }

    for(contadorA = 0; contadorA < TAM; contadorA++){
        vetorB[contadorB] = vetorA[contadorA];
        contadorB--;
        printf("Vetor A [%d]: %d\n", contadorA, vetorA[contadorA]);
    }

    for(contadorB = 0; contadorB < TAM; contadorB++){
        printf("Vetor B [%d]: %d\n", contadorB, vetorB[contadorB]);

    }
    return 0;
}
