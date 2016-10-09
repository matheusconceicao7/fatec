#include <stdio.h>

int main(void){
    float nota[10][5], somaTotal = 0, mediaSala = 0;
    int i=0,j=0;

    for(i=0; i<10; i++){
        nota[i][3] = 0;
    }

    printf("Digite as notas dos 10 alunos da sala...\n");
    for(i = 0; i<10; i++){
        for(j = 0; j<3; j++){
            fflush(stdin);
            printf("Nota %d do aluno %d: ",j+1, i+1);
            scanf("%f", &nota[i][j]);
            nota[i][3] = nota[i][3] + nota[i][j];
            nota[i][4] = nota[i][3] / 3;
        }
        printf("\n");
    }

    printf("-----------Nota 1---Nota 2---Nota 3---Media-------\n");
    for(i = 0; i<10; i++){
        printf("Aluno %d: ", i+1);
        for(j=0; j<3; j++){
            printf("|  %2.2f  ", nota[i][j]);
        }
        printf("|  %2.2f  ", nota[i][4]);
    printf("|\n");
    somaTotal = somaTotal + nota[i][4];
    }
    mediaSala = somaTotal / 10;
    printf("\nA media da sala foi: %2.2f.", mediaSala);
}
