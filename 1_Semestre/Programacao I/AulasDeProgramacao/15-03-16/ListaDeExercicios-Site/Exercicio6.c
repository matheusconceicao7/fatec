/**6. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.**/

#include <stdio.h>

int main(void){
    float real, dolar;
    printf("Cotacao do dolar em relacao ao real: 3,76\n\n");
    printf("Digite o valor em reais que deseja converter para dolar: ");
    scanf("%f", &real);
    dolar = real * 3.76;
    printf("\n\nO resultado da conversao eh: %2.2f dolares", dolar);
}
