/**
EL_22) Escreva um programa que retorne o número do quadrante (1,2,3 ou 4) através de uma função chamada VERIFICA_QUADRANTE,
que deve receber um valor para x e um valor para y.
**/

#include <stdio.h>
#include <stdlib.h>

int verificaQuadrante(int x, int y) {
    if(x > 0 && y > 0)
        return 1;
    else if(x < 0 && y > 0)
        return 2;
    else if(x < 0 && y < 0)
        return 3;
    else if (x > 0 && y < 0)
        return 4;
    else
        return -1;
}

int main() {
    int x, y;
    printf("Digite o valor em X: ");
    scanf("%d", &x);
    printf("Digite o valor em Y: ");
    scanf("%d", &y);
    if(verificaQuadrante(x,y) == -1) {
        printf("O ponto nao esta em nenhum dos quadrantes!\n");
    } else {
        printf("O ponto esta no %do quadrante!\n", verificaQuadrante(x,y));

    }
    return 0;
}
