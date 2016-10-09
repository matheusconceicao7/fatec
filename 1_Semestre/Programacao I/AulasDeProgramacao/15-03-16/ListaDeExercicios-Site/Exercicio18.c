/**18. Escreva um programa que receba um número inteiro do teclado
e diga se ele é par. Dica: Um número é par se o resto da divisão dele por 2 for zero.**/

int main(void){
    int numero;

    printf("Digite um numero e lhe direi se este eh par ou impar: ");
    scanf("%d", &numero);
    if(numero%2==0){
        printf("O numero eh par!");
    }else{
        printf("O numero eh impar!");
    }
}
