/**
1) Escreva um programa de controle de senha que dê 3 chances de acerto ao usuário;
se ele não conseguir, avise que o cartão foi bloqueado.
**/

#include <stdio.h>

int main(void){
    int senha, senhaCorreta = 1234, tentativa = 0;
    do{
        printf("Digite a senha de 4 digitos do cartao (Tentativa: %d / 3): ", tentativa+1);
        scanf("%d", &senha);
    if(senha == senhaCorreta){
        printf("\nSenha Correta!");
        break;
    }
    tentativa++;
    }while(tentativa < 3);
    if(tentativa>=3)
        printf("Cartao bloqueado!");

}
