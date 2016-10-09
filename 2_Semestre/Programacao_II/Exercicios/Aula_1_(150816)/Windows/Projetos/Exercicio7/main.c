#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, numero1, espaco, i, j, meio;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero < 3){
        printf("O numero digitado deve ser maior que 3!");
    }else{
        printf("Resultado:\n");
        numero1 = numero;
        meio = numero1/2;

        if(numero % 2 !=0){
            for(j=1; j<=numero1; j++){
                if(j <= meio+1){
                    for(espaco=1;espaco<j && espaco < meio+1;espaco++){ //imprime espacos para centralizar
                        printf(" ");
                    }
                    printf("O");
                    for(i=1;i<=numero-2;i++){ //Imprime espacos entre as bolinhas
                        printf(" ");
                    }
                    if(numero>1){ //Verifica se nao tera mais espacos, assim evita imprimir mais de uma bolinha (centro)
                        printf("O");
                    }
                    printf("\n");
                    numero = numero-2;
                }else{
                    for(espaco=1;espaco<j-numero-3;espaco++){ //imprime espacos para centralizar
                        printf(" ");
                    }
                    printf("O");
                    for(i=1;i<=numero+2;i++){ //Imprime espacos entre as bolinhas
                        printf(" ");
                    }
                        printf("O");
                    printf("\n");
                    numero = numero+2;
                }
            }
        }else{
            for(j=1; j<=numero1; j++){
                if(j <= meio+1){
                    for(espaco=1;espaco<j && espaco < meio;espaco++){ //imprime espacos para centralizar
                        printf(" ");
                    }
                    printf("O");
                    for(i=1;i<=numero-2;i++){ //Imprime espacos entre as bolinhas
                        printf(" ");
                    }
                        printf("O");

                    printf("\n");
                    numero = numero-2;
                }else{
                    for(espaco=1;espaco<j-numero-5;espaco++){ //imprime espacos para centralizar
                        printf(" ");
                    }
                    printf("O");
                    for(i=1;i<=numero+4;i++){ //Imprime espacos entre as bolinhas
                        printf(" ");
                    }
                        printf("O");

                    printf("\n");
                    numero = numero+2;
                }
            }
        }
    }
    return 0;
}
