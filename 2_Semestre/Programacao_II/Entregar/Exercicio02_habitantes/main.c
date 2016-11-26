#include <stdio.h>
#include <stdlib.h>

void menu() {
    system("cls");
    printf("* PESQUISA SOBRE OS HABITANTES DE UMA CIDADE *\n");
    printf("Este programa apresenta as seguintes funcionalidades:\n");
    printf("1. Cadastrar um novo habitante\n");
    printf("2. Pesquisar cadastro de habitante\n");
    printf("3. Sair do programa\n");
    printf("Digite a opcao desejada: ");
}

void cadastraHabitante() {

    system("cls");
    printf("")
}

int main() {

    typedef struct {
        char nome [50];
        int idade;
        char sexo;
        float salario;
        int qtdeFilhos;
    } tipoHabitante;

    char opcao='0';
    do {
        menu();
        fflush(stdin);

        scanf("%c", &opcao);
        switch(opcao) {
        case '1': {
            break;
        }
        case '2': {
            break;
        }
        case '3': {
            printf("Saindo do programa...");
            exit(0);
        }
        default: {
            printf("Opcao invalida!\n");
        }
        }
    } while(opcao != '3');
    return 0;
}
