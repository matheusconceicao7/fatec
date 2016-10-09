/**3. Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.**/

#include <stdio.h>

int main(void){
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite dois numeros para realizar operacoes basicas com eles:\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%d",&numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("\n\nAqui estao as operacoes realizadas com os numeros digitados:\n\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);
}
