/**11. Escreva um programa que resolva o seguinte problema: uma cópia “xerox” custa R$ 0,25 por folha,
mas acima de 100 folhas esse valor cai para R$ 0,20 por unidade. Dado o total de cópias, informe o valor a ser pago.**/

#include <stdio.h>

int main(void){
    int qtdeFolhas;
    float valorPago;

    printf("Digite a quantidade de folhas a serem copiadas: ");
    scanf("%i", &qtdeFolhas);

    if(qtdeFolhas > 100){
        valorPago = qtdeFolhas * 0.20;
    } else {
        valorPago = qtdeFolhas * 0.25;
    }

    printf("\n\nO valor da copia eh: %2.2f reais", valorPago);
}
