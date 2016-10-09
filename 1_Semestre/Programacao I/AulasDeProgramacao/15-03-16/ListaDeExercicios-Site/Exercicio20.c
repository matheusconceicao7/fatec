/**20. Escreva um programa que calcule as raízes da equação do 2o grau (ax² + bx + c);
os valores de a, b e c são fornecidos pelo usuário (veja a proposta de resolução mais adiante).
**/

#include <stdio.h>
#include <math.h>

int main (void){

    int a,b,c,x1,x2;
    double delta;

    printf("Calculo de raizes da equacao do 2o grau\n");
    printf("----------------------------------------------------\n");
    printf("Digite o coeficiente 'a' da equacao: ");
    scanf("%i", &a);
    printf("\nDigite o coeficiente 'b' da equacao: ");
    scanf("%i",&b);
    printf("\nDigite o coeficiente 'c' da equacao: ");
    scanf("%i",&c);


    x1 = (-b+sqrt((b*b)-(4*a*c)))/2*a;
    x2 = (-b-sqrt((b*b)-(4*a*c)))/2*a;

    printf("\n\n As raizes da equacao sao: %i e %i ", x1, x2);
}
