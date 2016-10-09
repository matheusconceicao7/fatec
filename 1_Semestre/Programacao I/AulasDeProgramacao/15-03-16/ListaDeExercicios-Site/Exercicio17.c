/**17. Escreva um programa que calcule a área de um círculo de raio r, testando se o valor do raio é menor que zero.
**/

#include <stdio.h>

int main(void){
    float area, raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    if(raio < 0){
        printf("Raio invalido!");
    }
    area = 3.1415 * raio;
    printf("A area do circulo eh: %2.2f",area);
}
