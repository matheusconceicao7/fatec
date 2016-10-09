#include <stdio.h>

int main(void){
    char ladoDireito[30][3];
    char ladoEsquerdo[30][3];
    int i=0, j=0, k=0;

    for(i=0;i<30;i++){
        for(j=0;j<3;j++){
            ladoDireito[i][j] = 'x';
            ladoEsquerdo[i][j] = 'x';
        }
    }

    printf("---LADO ESQUERDO---|CORREDOR|----LADO DIREITO----\n");
    for(i = 0; i<30; i++){
        for(j=0;j<3;j++){
            printf("|%c| ",ladoEsquerdo[i][j]);
        }
        printf("          |  |          ");
        for(j=0;j<3;j++){
            printf("|%c| ",ladoDireito[i][j]);
        }
        printf("\n");
    }
}
