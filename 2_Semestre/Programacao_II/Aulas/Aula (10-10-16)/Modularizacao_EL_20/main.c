/**
EL_20) Fa�a uma fun��o que recebe por par�metro o tempo de dura��o de uma f�brica expressa em segundos
e retorna tamb�m por par�metro esse tempo em horas, minutos e segundos.
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
