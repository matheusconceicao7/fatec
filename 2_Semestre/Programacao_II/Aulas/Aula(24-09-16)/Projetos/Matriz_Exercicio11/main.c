/**EL_11) Faça um algoritmo e um programa capaz de ler uma matriz A e uma matriz B com três linha e
cinco colunas, em seguida faça a soma das matrizes e armazene na matriz C.**/

#include <stdio.h>
#include <stdlib.h>

#define LINHA 3
#define COLUNA 5

int main()
{
    int matrizA[LINHA][COLUNA], matrizB[LINHA][COLUNA], matrizC[LINHA][COLUNA], linha, coluna;

    //Ler matriz A
    for(linha = 0; linha < LINHA; linha++){
        for(coluna = 0; coluna < COLUNA; coluna++){
            printf("Matriz A [%d] [%d]: ",linha,coluna);
            scanf("%d", &matrizA[linha][coluna]);
        }
    }

    printf("\n");

    //Ler matriz B
    for(linha = 0; linha < LINHA; linha++){
        for(coluna = 0; coluna < COLUNA; coluna++){
            printf("Matriz B [%d] [%d]: ",linha,coluna);
            scanf("%d", &matrizB[linha][coluna]);
        }
    }

    printf("\n");

    //Somar matriz A e matriz B
    printf("Matriz C: \n");
    for(linha = 0; linha < LINHA; linha++){
        for(coluna = 0; coluna < COLUNA; coluna++){
            matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
            printf("[%d][%d]: %d ", linha, coluna, matrizC[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
