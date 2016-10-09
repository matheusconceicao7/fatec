/**19. Escreva um programa que calcule a velocidade de queda de um corpo em função do tempo,
partindo da velocidade zero. Dica: Use equações de aceleração da Física.
**/

int main(void){
    float vf, t;

    printf("Calcular a velocidade de queda em funcao do tempo\n");
    printf("-------------------------------------------------------------------\n");
    printf("Digite o tempo em segundos que o objeto ficara em queda livre: ");
    scanf("%f",&t);

    vf = 10*t;

    printf("\n\nA velocidade final do corpo eh: %2.2f m/s", vf);
}
