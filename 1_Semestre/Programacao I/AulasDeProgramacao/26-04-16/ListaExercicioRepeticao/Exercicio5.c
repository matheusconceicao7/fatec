/**5) Escreva um programa que calcule a média dos números digitados pelo usuário,
se eles forem pares. Termine a leitura se o usuário digitar zero.
**/

#include <stdio.h>

int main(void){
    int numero, qtde = 0, soma = 0;
    float media;

    do{
        printf("Digite um numero (Digite 0 para terminar): ");
        scanf("%d", &numero);
        if(numero % 2 == 0 && numero != 0){
            soma = soma + numero;
            qtde++;

        }
    }while(numero != 0);

    media = soma / qtde;

    printf("A media dos numeros pares eh: %2.2f", media);
}
