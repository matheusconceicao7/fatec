/**
EL_18) Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume:
v = 4/3.PI .R^3

**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volumeEsfera(float raio){
    return 4.0/3.0*M_PI*pow(raio,3);
}

int main()
{
    float raio;
    printf("Digite o raio de uma esfera para calcular seu volume: ");
    scanf("%f", &raio);

    printf("O volume eh: %f", volumeEsfera(raio));
    return 0;
}
