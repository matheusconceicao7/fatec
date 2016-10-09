/**
EL_12) Faça um algoritmo e um programa capaz de ler uma matriz A de ordem 5x5, em seguida calcule a multiplicação
dos elementos da diagonal principal.
**/

#include <stdio.h>
#include <stdlib.h>

#define LINHA 5
#define COLUNA 5

int main()
{
    int matrizA[LINHA][COLUNA], linha, coluna, resultado = 1;

    //Ler matriz A
    printf("Entre com a matriz A 5x5:\n");
    for(linha = 0; linha < LINHA; linha++){
        for(coluna = 0; coluna < COLUNA; coluna++){
            printf("Matriz A [%d][%d]: ", linha, coluna);
            scanf("%d", &matrizA[linha][coluna]);
        }
    }

    //Pegar elementos da diagonal principal e multiplicar
    for(linha = 0; linha < LINHA; linha++){
        for(coluna = 0; coluna < COLUNA; coluna++){
            if(linha == coluna){
                resultado = resultado * matrizA[linha][coluna];
            }
        }
    }

    printf("\nResultado do produto dos elementos da diagonal principal: ");
    printf("%d", resultado);

    return 0;
}
