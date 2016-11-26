#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_CPF 20
#define TAM_NOME 50
#define TAM_AUX 20

typedef struct {
    char cpf[TAM_CPF];
    char nome[TAM_NOME];
    float totalSalarioAnual;
    float totalDescontosAnual;
} PessoaFisica;

void menu() {
    system("cls");
    printf("PROGRAMA IMPOSTO DE RENDA\n");
    printf("--------------------------------\n");
    printf("(1) Cadastrar pessoa fisica\n");
    printf("(2) Calcular imposto de renda\n");
    printf("(3) Sair\n");
    printf("--------------------------------\n");
    printf("Digite a opcao desejada: ");
}

void limpaVetor(PessoaFisica p) {
    //Limpar vetores de char
    int i;
    for(i = 0; i < TAM_CPF; i++) {
        p.cpf[i] = '\0';
    }
    for(i = 0; i < TAM_NOME; i++) {
        p.nome[i] = '\0';
    }
}

void cadastrarPF() {
    FILE *arq;
    PessoaFisica pf;

    limpaVetor(pf);

    system("cls");

    //Solicitando que o usuario entre com as informacoes de pf
    printf("Digite seu CPF: ");
    fflush(stdin);
    fgets(pf.cpf, 20, stdin);

    printf("Digite seu nome: ");
    fflush(stdin);
    fgets(pf.nome, 50, stdin);

    printf("Digite o total de salario anual: ");
    scanf("%f", &pf.totalSalarioAnual);

    printf("Digite o total de descontos anual: ");
    scanf("%f", &pf.totalDescontosAnual);

    arq = fopen("DB_PF.dat", "a+");

    if(arq == NULL) {
        printf("\nERRO - Nao foi possivel abrir o arquivo");
    } else {
        fwrite(&pf, sizeof(PessoaFisica), 1, arq);

        if(ferror(arq) == 0) {
            printf("\nRegistro gravado com sucesso.");
        } else {
            printf("\nErro. Nao foi possivel gravar registro no arquivo.");
        }

        //Fechando o arquivo
        fclose(arq);
    }
}

void calcularIRPF() {
    char aux[TAM_AUX];
    FILE *arq;
    PessoaFisica pf;
    int encontrei = 0;
    float salarioBase, aliquotaIRPF, irpf;

    system("cls");

    //Solicitar ao usuario que digite o CPF
    printf("Digite o CPF para o qual deseja calcular o IRPF: ");
    fflush(stdin);
    fgets(aux, TAM_AUX, stdin);

    //Abrindo o arquivo
    arq = fopen("DB_PF.dat","r");
    if(arq == NULL) {
        printf("Erro. Nao foi possivel abrir o arquivo.\n");
    } else {
        fread(&pf, sizeof(PessoaFisica), 1, arq);
        if(ferror(arq) == 0) {
            printf("Registro lido com sucesso\n");
        } else {
            printf("Erro. Nao foi possivel ler o registro no arquivo\n");
        }
        while(!feof(arq)) {
            //Verifica se o CPF digitado e igual ao do registro
            if(strcmp(pf.cpf, aux) == 0) {
                encontrei = 1;

                system("cls");

                //1o passo - Calcular salario base
                salarioBase = pf.totalSalarioAnual - pf.totalDescontosAnual;
                //2o passo - Calcular imposto
                if(salarioBase <= 21453.24) {
                    aliquotaIRPF = 0.0;
                } else if(salarioBase > 21453.24 && salarioBase <= 32151.48) {
                    aliquotaIRPF = 0.075;
                } else if(salarioBase > 32151.48 && salarioBase <= 42869.16) {
                    aliquotaIRPF = 0.15;
                } else if(salarioBase > 42869.16 && salarioBase <= 53565.72) {
                    aliquotaIRPF = 0.225;
                } else {
                    aliquotaIRPF = 0.275;
                }
                irpf = salarioBase * aliquotaIRPF;

                printf("CPF: %s\n", pf.cpf);
                printf("Nome do cidadao: %s\n", pf.nome);
                printf("Salario nual: %2.2f\n", pf.totalSalarioAnual);
                printf("Total descontos anual: %2.2f\n", pf.totalDescontosAnual);
                printf("Salario base: %2.2f\n", salarioBase);
                printf("IRPF (R$): %2.2f\n", irpf);

                getc(stdin);
                break;
            } else {
                //Lendo o proximo registro
                fread(&pf, sizeof(PessoaFisica), 1, arq);
                if(ferror(arq) == 0) {
                    printf("\nRegistro lido com sucesso");
                } else {
                    printf("Erro. Nao foi possivel ler o registro no arquivo\n");
                }
            }
        }
        if(encontrei == 0) {
            system("cls");
            printf("Registro nao encontrado.");
            fflush(stdin);
            getc(stdin);
        }
        fclose(arq);
    }
}

int main() {
    char opcao;
    do {
        menu();
        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao) {
        case('1'): {
            cadastrarPF();
            break;
        }
        case('2'): {
            calcularIRPF();
            break;
        }
        case('3'): {
            break;
        }
        default: {
            printf("Erro - Opcao invalida. Digite novamente...\n");
            fflush(stdin);
            getc(stdin);
        }
        }
    } while(opcao != '3');
    return 0;
}
