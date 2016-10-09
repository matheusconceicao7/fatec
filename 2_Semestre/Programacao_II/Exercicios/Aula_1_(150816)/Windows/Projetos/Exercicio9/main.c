#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numeroCartaoCredito,divisao,contadigito;
    printf("Digite o numero do cartao de credito: ");
    scanf("%lf", &numeroCartaoCredito);

    divisao =  numeroCartaoCredito;

    for(contadigito=1;divisao>=10;contadigito++){
            divisao=divisao/10;
    }

    printf("%lf", contadigito);

    if(contadigito == 16){

    }else{
        printf("Numero de cartao de credito invalido!");
    }
    return 0;
}
