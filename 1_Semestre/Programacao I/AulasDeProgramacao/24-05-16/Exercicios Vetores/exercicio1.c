#include <stdio.h>

int main(void){
    float notaAluno[3], soma = 0, media = 0;
    int i = 0;
    printf("Digite as 3 notas do aluno...\n");

    for(i=0;i<3;i++){
        printf("\nNota %d: ",i+1);
        scanf("%f", &notaAluno[i]);
    }
    printf("\nAs notas do aluno foram: \n");

    for(i=0;i<3;i++){
        soma = soma + notaAluno[i];
        printf("\nNota %d: %2.2f.", i+1, notaAluno[i]);
    }
    media = soma / 3;
    printf("\n\nA media desse aluno eh: %2.2f", media);
}
