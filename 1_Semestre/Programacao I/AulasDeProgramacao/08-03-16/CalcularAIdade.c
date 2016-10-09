#include <stdio.h>

int main(void){
    int idade, mes, anoNascimento;
    int anoAtual = 2016;

    printf("Digite o ano que voce nasceu: ");
    scanf("%d",&anoNascimento);

    printf("Agora digite o mes (numero) que voce nasceu:");
    scanf("%d", &mes);

    if(mes >= 3)
        idade = (anoAtual - 1) - anoNascimento;
    else
        idade = anoAtual - anoNascimento;

    if(idade >= 18)
        printf("\n\nVoce possui %d anos e eh maior de idade.",idade);
    else
        printf("\n\nVoce possui %d anos e eh menor de idade.",idade);
}
