/**4) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
   a) média do salário da população;
   b) média do número de filhos;
   c) maior salário;
   d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.**/

#include <stdio.h>

int main(void){
    float salario = 0, somaSalario = 0, mediaSalario = 0, mediaFilhos = 0, maiorSalario = 0, percentual = 0, qtdeSalarioBaixo = 0;
    int numeroFilhos = 0, somaFilhos = 0, qtdeHabitante = 0;
    for( ; ; ){
       printf("Digite o salario do habitante: ");
       scanf("%f", &salario);
       if(salario < 0){
            break;
       }
       somaSalario = somaSalario + salario;
       if(salario > maiorSalario){
            maiorSalario = salario;
       }
       if(salario <= 100){
            qtdeSalarioBaixo++;
       }

       printf("\nDigite o numero de filhos do habitante: ");
       scanf("%d", &numeroFilhos);
       somaFilhos = somaFilhos + numeroFilhos;

       qtdeHabitante++;

       printf("----------------------------------------\n");
    }
    mediaSalario = somaSalario / qtdeHabitante;
    mediaFilhos = somaFilhos / qtdeHabitante;
    percentual = (qtdeSalarioBaixo / qtdeHabitante) * 100;

    printf("\n------------------------------------------------\n");
    printf("a) Media do salario da populacao: R$ %2.2f.\n", mediaSalario);
    printf("b) Media do numero de filhos: %2.2f.\n", mediaFilhos);
    printf("c) Maior salario: R$ %2.2f.\n", maiorSalario);
    printf("d) Percentual de pessoas com salario menor que R$100: %2.2f porcento.\n", percentual);
}
