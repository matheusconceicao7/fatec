/**12. Escreva um programa que informe a categoria de um jogador de futebol, considerando sua idade:
infantil (até 13 anos), juvenil (até 17 anos) ou sênior (acima de 17 anos).
**/

int main(void){
    int idade;
    printf("Digite a idade do jogador de futebol: ");
    scanf("%i",&idade);

    if(idade>17){
        printf("\nA categoria do jogador eh Senior");
    } else if (idade > 13 && idade <= 17) {
        printf("\nA categoria do jogador eh Juvenil");
    } else {
        printf("\nA categoria do jogador eh Infantil");
    }
}
