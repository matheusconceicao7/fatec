#include <stdio.h>

int main(void){
    char nome[30];
    printf("Digite seu nome: ");
    scanf("%s", nome); //Para strings, por convencao, nao se usa `&` para o scanf
    //scanf apenas le strings ate o primeiro espaco
    printf("Seu nome: %s.\n", nome);
    fflush(stdin);
    printf("Digite seu nome novamente: ");
    gets(nome);
    printf("Seu nome: %s", nome);
}
