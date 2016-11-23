/**
EL_20) Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos
e retorna também por parâmetro esse tempo em horas, minutos e segundos.
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void tempo(int segundosEntrada, int *horas, int *minutos, int *segundos){
        *horas = segundosEntrada / 3600;
        *minutos = (segundosEntrada % 3600) / 60;
        *segundos = (segundosEntrada % 3600) % 60;
    }

int main()
{
    int segundosEntrada, horas, minutos, segundos;
    printf("Digite o tempo da empresa em segundos: ");
    scanf("%i", &segundosEntrada);

    tempo(segundosEntrada, &horas, &minutos, &segundos);

    printf("Horas: %i\n", horas);
    printf("Minutos: %i\n", minutos);
    printf("Segundos: %i\n", segundos);
    return 0;
}
