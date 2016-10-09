/**5. Dadas as medidas de uma sala, informe sua área.**/

#include <stdio.h>

int main(void){
    int comprimento, largura, area;
    printf("Digite as dimensoes da sala para calcular a area:\n\n");
    printf("Comprimento: ");
    scanf("%d",&comprimento);
    printf("\nLargura: ");
    scanf("%d",&largura);
    area = comprimento * largura;
    printf("A area da sala eh: %d metros quadrados",area);
}
