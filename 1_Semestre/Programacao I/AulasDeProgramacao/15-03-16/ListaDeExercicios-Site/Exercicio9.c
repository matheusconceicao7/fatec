/**9. Escreva um programa que receba um valor em metros e o converta para milímetros.**/

#include <stdio.h>

int main(void){
    int valorMetros, valorMilimetros;
    printf("Digite um valor em metros para converter em milimetros: ");
    scanf("%d", &valorMetros);
    valorMilimetros = valorMetros * 1000;
    printf("\n\nA conversao resulta em: %d milimetros.", valorMilimetros);
}
