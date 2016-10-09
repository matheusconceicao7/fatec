/**14. Escreva um programa que teste uma dada senha.
**/

#include <stdio.h>

int main(void){
    int senha = 1234;
    int senhaDigitada = 0;

    do{
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);
        if(senhaDigitada!=senha)
            printf("\nSenha incorreta!\n\n");
    }while(senhaDigitada != senha);
    printf("\nSenha correta!");

}
