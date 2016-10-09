#include <stdio.h>

int main(void){
    char ra[13];
    float notas[3], soma = 0, media = 0;
    int i=0;

    printf("Digite o RA do aluno: ");
    scanf("%s", ra);
    printf("\nAgora digite as notas do aluno (%s): ", ra);
    for(i=0; i<3; i++){
        printf("\nNota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    printf("\n--------------------Relatorio---------------------\n");
    printf("RA do aluno: %s\n", ra);
    for(i=0;i<3;i++){
        printf("\nNota %d: %2.2f", i+1, notas[i]);
        soma = soma + notas[i];
    }
    media = soma / 3;
    printf("\nMedia: %2.2f", media);
    printf("\n---------------------------------------------------\n");
}
