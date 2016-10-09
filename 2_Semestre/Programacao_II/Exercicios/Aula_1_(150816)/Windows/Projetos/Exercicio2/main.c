/*
2) Solicite ao usuario um numero e utilizando esse numero imprima a figura conforme exemplo abaixo:

Digite um numero: 5
Resultado:

*****
****
***
**
*

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l,c;

    printf("Digite um numero:");
    scanf("%d", &n); // -> & indica que voce esta passando para o scanf o endereco de variavel

    for(l=n; l>=1; l--) // Esse for faz a passagem de linha
    {
        for(c=1; c<=l; c++) // Esse for imprime os dados na linha
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
