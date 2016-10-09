#include <stdio.h>

int main(void){
    char opcao;

    printf("MENU DE REFEICOES\n");
    printf("----------------------\n");
    printf("1.Picanha\n");
    printf("2.Lasanha\n");
    printf("3.Temaki\n");
    printf("4.File\n");
    printf("\n");
    printf("Escolha o prato: ");
    scanf("%c", &opcao);
    switch(opcao){
        case('1'):{
            printf("Escolheu picanha!\n");
            break;
        }
        case('2'):{
            printf("Escolheu lasanha!\n");
            break;
        }
        case('3'):{
            printf("Escolheu temaki!\n");
            break;
        }
        case('4'):{
            printf("Escolheu file!\n");
            break;
        }
        default:{
            printf("Opcao invalida!\n");
        }
    }
}
