/**
EL_10) Faça um algoritmo que leia uma matriz bidimensional 3x4, em seguida, calcule e mostre sua
transposta.
**/

#include <stdio.h>
#include <stdlib.h>

#define LINHA 3
#define COLUNA 4

int main()
{
    int matriz[LINHA][COLUNA], matrizTransp[COLUNA][LINHA], linha, coluna;

    printf("Entre com os valores da matriz 3x4:\n");

    //Ler matriz e transpor
    for(linha = 0; linha < LINHA; linha++){
        for(coluna = 0; coluna < COLUNA; coluna++){
            printf("Matriz [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
            matrizTransp[coluna][linha] = matriz[linha][coluna];
        }
    }

    //Percorrer matriz e transpor
    for(linha=0; linha < LINHA; linha++){
        for(coluna=0; coluna < COLUNA; coluna++){
            printf("Transposta [%d][%d]: %d\n", linha, coluna, matrizTransp[coluna][linha]);
        }
    }
    return 0;
}
