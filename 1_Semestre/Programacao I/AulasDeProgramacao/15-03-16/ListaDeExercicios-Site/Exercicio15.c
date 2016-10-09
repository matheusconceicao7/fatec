/**15. Escreva um programa que calcule a média aritmética de três números digitados pelo usuário.
**/

int main(void){
    float n1,n2,n3,media;

    printf("Digite 3 numeros para calcular a media aritmetica:\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &n2);
    printf("\nDigite o terceiro numero: ");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    printf("\n\nA media dos 3 numeros digitados eh: %2.2f", media);
}
