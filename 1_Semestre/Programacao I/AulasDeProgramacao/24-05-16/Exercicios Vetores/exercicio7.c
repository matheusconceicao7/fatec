#include <stdio.h>

int main(void){
    char jogo[3][3];
    int i=0, j=0;

    for(i = 0; i<3; i++){
        for(j=0; j<3; j++){
            jogo[i][j] = 'x';
        }
    }

    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            printf("|   %c   ", jogo[i][j]);
        }
        printf("|\n");
    }
}
