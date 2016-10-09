#include <stdio.h>

int main(void){
    int matriz[2][3];
    int i,j;

    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            printf("Digite o valor: ");
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }
    printf("\n");
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
