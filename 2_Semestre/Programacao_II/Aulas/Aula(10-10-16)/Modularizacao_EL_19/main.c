/**
EL_19) Tendo como dados de entrada a altura e o sexo de uma pessoa, faça um programa que calcule seu
peso ideal, utilizando as seguintes fórmulas:

Para homens: (72.7*h) - 58
Para mulheres: (62.1 *h) - 44.7

(h = altura)
**/

#include <stdio.h>
#include <stdlib.h>

float pesoIdeal(float h, char sexo){
    if(sexo == 'm' || sexo == 'M')
        return (72.7*h) - 58;
    else if(sexo == 'f' || sexo == 'F')
        return (62.1*h) - 44.7;
    else
        return 0;
}

int main()
{
    char sexo;
    float altura;
    printf("Digite o sexo da pessoa a ter o peso calculado (m/f): ");
    fflush(stdin);
    scanf("%c", &sexo);
    printf("Digite a altura da pessoa a ter o peso calculado: ");
    scanf("%f", &altura);
    system("cls");
    if(pesoIdeal(altura, sexo) != 0){
        printf("O peso ideal da pessoa eh: %.2f", pesoIdeal(altura, sexo));
    }else{
        printf("Sexo invalido");
    }
    return 0;
}
