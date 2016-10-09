#include <stdio.h>

int main(void){
    char nome[30];
    char idade[2];
    char fone[9];
    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o telefone: ");
    gets(fone);
    printf("Digite a idade: ");
    gets(idade);
    printf("\nAgenda***\n");
    printf("-------------------------\n");
    printf("Nome: %s\n", nome);
    printf("Fone: %s\n", fone);
    printf("Idade: %s\n", idade);
}
