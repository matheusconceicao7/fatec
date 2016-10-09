#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, linha, i=1, meio;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Resultado: \n");

    meio = numero / 2;
    if(numero % 2 != 0){
        for(linha = 1; linha <= numero; linha++){
            if(linha<=meio+1){
                for(i = 1; i<=linha && i<=meio+1 ;i++){
                    printf("*");
                }
            }else{
                for(i=1; i <= numero-linha+1; i++){
                    printf("*");
                }
            }
            printf("\n");
        }
    }else{
        for(linha = 1; linha <= numero; linha++){
            if(linha<=meio+1){
                for(i = 1; i<=linha && i<=meio ;i++){
                    printf("*");
                }
            }else{
                for(i=1; i <= numero-linha+1; i++){
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
