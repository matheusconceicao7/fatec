/**
6) Escreva um programa que calcule a �rea de v�rios c�rculos de raio r, at� que o usu�rio digite "n".
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
