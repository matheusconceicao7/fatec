/**
8) Escreva um programa que sorteie os n�meros necess�rios para a MegaSena.
Dica: usar a gera��o de n�meros aleat�rios com rand( ).
**/

#include <stdio.h>
#include <time.h>

int main(void){
    int i, j;
    srand(time(NULL)); //srand()  eh a funcao para definir a semente da funcao rand(). Nesse caso utilizamos a hora atual.
    printf("Gerando numeros para o sorteio da Mega Sena:\n");
    for(i = 0; i<= 6; i++){
        printf("%d ", (1+ rand()%60)); //Numeros aleatorios de 1 a 60

        for(j = 0; j<=500507600; j++){

        }
    }
}
