/**
6) Escreva um programa que calcule a área de vários círculos de raio r, até que o usuário digite "n".
**/

#include <stdio.h>
#include <math.h>

int main(void){
    float area, raio;
    char escolha;
    for(;;){
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);

        area = 3.14 * pow(raio,2);

        printf("\nArea = %2.2f\n", area);

        printf("Deseja continuar? (S/N): ");
        scanf("%s", &escolha);

        switch(escolha){
            case('s'):{
                continue;
            }
            case('n'):{
                exit(1);
            }
        }
    }
}
