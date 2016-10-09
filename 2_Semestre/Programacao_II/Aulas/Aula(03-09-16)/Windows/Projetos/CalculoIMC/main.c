#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char continuar;
    float peso, altura, soma = 0, media, vimc[1000];
    int contador = 0;

    do{
        system("cls");
        printf("Digite seu peso: ");
        scanf("%f", &peso);

        printf("Digite sua altura: ");
        scanf("%f", &altura);

        vimc[contador] = peso / pow(altura,2);
        soma += vimc[contador];
        contador++;

        printf("Deseja calcular mais IMCs? (S/N): ");
        fflush(stdin);
        scanf("%c", &continuar);

    }while(((continuar == 's') || (continuar == 'S')) && (contador < 1000));

    if(contador == 1000){
        printf("O limite maximo de valores para inserir eh 1000!\n");
    }

    media = soma / contador;
    printf("A media dos IMCs inseridos eh: %.3f", media);
    return 0;
}
