#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,contaImpar=0, testeQuadrado=0, numeroImpar=1;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Resultado: \n");

    while(testeQuadrado<numero){
        contaImpar++;
        testeQuadrado=testeQuadrado+numeroImpar;
        numeroImpar=numeroImpar+2;
    }

    if((testeQuadrado) != numero){
        printf("O numero digitado nao eh um quadrado perfeito!\n");
    }else{
        printf("O numero digitado eh um quadrado perfeito.\nSua raiz eh: %d\n", contaImpar);
    }

    return 0;
}
