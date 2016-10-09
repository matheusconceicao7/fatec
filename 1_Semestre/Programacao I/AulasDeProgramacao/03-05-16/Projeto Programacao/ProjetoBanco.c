#include <stdio.h>

int main(void){
    char opcao;
    float saldo = 500, valorDeposito;
    int valorSaque;
    for(;;){
        fflush(stdin);
        printf("--------------Menu de Operacoes----------------\n");
        printf("1. Saque\n");
        printf("2. Deposito\n");
        printf("3. Consultar saldo\n");
        printf("4. Encerrar\n");
        printf("-----------------------------------------------\n");
        printf("Digite o numero da operacao desejada: ");
        scanf("%c", &opcao);
        switch(opcao){
            case('1'):{
                printf("\nEsta maquina libera apenas notas de 5, 10, 20 e 50\n");
                printf("Digite a quantia que deseja sacar: ");
                scanf("%d", &valorSaque);
                if(valorSaque <= saldo && valorSaque > 0){
                    if(valorSaque % 5 == 0){
                        saldo = saldo - valorSaque;
                        printf("\nSaque efetuado com sucesso!\n");
                        printf("Seu saldo eh de: R$ %2.2f.\n", saldo);
                    }else{
                        printf("\nValor impossivel de ser sacado.\n");
                    }
                }else if(valorSaque < 0){
                    printf("\nImpossivel realizar um saque negativo!\n");
                }else{
                    printf("\nSaldo insuficiente para saque!\n");
                }
                break;
            }
            case('2'):{
                printf("\nDigite a quantia que deseja depositar (maximo R$ 5000): ");
                scanf("%f", &valorDeposito);
                if(valorDeposito <= 5000){
                    saldo = saldo + valorDeposito;
                    printf("\nDeposito efetuado com sucesso!\n");
                    printf("Seu saldo agora eh: R$ %2.2f.\n", saldo);
                }else{
                    printf("\nValor maximo excedido!\n");
                }
                break;
            }
            case('3'):{
                printf("\nSeu saldo eh: R$ %2.2f.\n", saldo);
                break;
            }
            case('4'):{
                printf("Obrigado pela preferencia!");
                exit(1);
            }
            default:{
                printf("Opcao invalida!\n");
            }
        }
    }
}
