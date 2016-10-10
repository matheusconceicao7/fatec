    /**
    Um professor de Matemática solicitou que você faça para ele um programa que realiza operações com matrizes.
    O limite deste programa será realizar operações com matrizes de tamanho máximo 10x10. Logo, o usuário poderá
    escolher as dimensões da(s) matriz(es) limitado ao tamanho 10x10.

    Este programa deverá permitir realizar as seguintes operações com matrizes:
    1. Igualdade entre matrizes (A = B)
    2. Adição entre matrizes (A + B)
    3. Subtração entre matrizes (A - B)
    4. Multiplicação entre matrizes (A * B)
    5. Sair
    Para as operações 1, 2, 3 e 4, você deverá solicitar ao usuário que o mesmo entre com as dimensões das duas
    matrizes (matriz A e matriz B). Caso as dimensões vejam válidas para realizar a operação, na sequência você
    deverá solicitar ao usuário que entre com os valores das duas matrizes. Uma vez obtidos os valores das matrizes,
     a operação escolhida deve ser realizada e o resultado deve ser apresentado na tela.

    Para a realização deste exercício o aluno deverá OBRIGATORIAMENTE:
    1) Todas as entradas de dados devem ser tratadas e caso a informação digitada pelo usuário não seja válida
    para realizar a operação, informar o usuário com mensagem de erro.

    Autor: Lucas Costa
    Autor: Matheus da Costa Conceição
    **/

    #include <stdio.h>
    #include <stdlib.h>
    #include <conio.h>

    #define LINHA 10
    #define COLUNA 10

    int pedeOrdem(int *linhasA, int *colunasA, int *linhasB, int *colunasB) {
        //Pede ao usuario a quantidade de linhas e colunas de cada matriz
        printf("Digite a quantidade de linhas da matriz A:");
        scanf("%d", linhasA);
        if(*linhasA > 10) {
            printf("\nA quantidade nao pode ser maior que 10!");
            return 1;
        } else {
            printf("Digite a quantidade de colunas da matriz A:");
            scanf("%d", colunasA);
            if(*colunasA > 10) {
                printf("\nA quantidade nao pode ser maior que 10!");
                return 1;
            } else {
                system("cls");
                printf("Digite a quantidade de linhas da matriz B:");
                scanf("%d", linhasB);
                if(*linhasB > 10) {
                    printf("\nA quantidade nao pode ser maior que 10!");
                    return 1;
                } else {
                    printf("Digite a quantidade de colunas da matriz B:");
                    scanf("%d", colunasB);
                    if(*colunasB > 10) {
                        printf("\nA quantidade nao pode ser maior que 10!");
                        return 1;
                    } else {
                        system("cls");
                    }
                }
            }
        }
    }

    int entraMatrizes(int *linhasA, int *colunasA, int *linhasB, int *colunasB, int *matrizA[LINHA][COLUNA], int *matrizB[LINHA][COLUNA]) {
        int i,j;
        //Verifica se o tamanho das matrizes nao ultrapassa o maximo declarado
        if(*linhasA <= 10 && *linhasB <= 10 && *colunasA <= 10 && *colunasB <= 10) {
            //Verifica se eh possivel realizar a operacao
            if(*linhasA == *linhasB && *colunasA == *colunasB) {
                //Pede ao usuario os dados da matriz A
                printf("Entre com a matriz A:\n");
                for(i = 0; i < *linhasA; i++) {
                    for(j = 0; j < *colunasA; j++) {
                        printf("Matriz A [%d][%d]: ", i, j);
                        scanf("%p", &matrizA[i][j]);
                    }
                }
                system("cls");
                printf("Entre com a matriz B:\n");
                //Pede ao usuario os dados da matriz B
                for(i = 0; i < *linhasB; i++) {
                    for(j = 0; j < *colunasB; j++) {
                        printf("Matriz B [%d][%d]: ", i, j);
                        scanf("%p", &matrizB[i][j]);
                    }
                }
                system("cls");
            } else {
                if(*linhasA != *linhasB)
                    printf("Ambas as matrizes devem possuir a mesma quantidade de linhas\n");
                if(*colunasA != *colunasB)
                    printf("Ambas as matrizes devem possuir a mesma quantidade de colunas\n");
                return 1;
            }
        } else {
            printf("A ordem da matriz nao pode ser maior que 10!\n");
            return 1;
        }
    }

    int entraMatrizesMultiplicacao(int *linhasA, int *colunasA, int *linhasB, int *colunasB, int *matrizA[LINHA][COLUNA], int *matrizB[LINHA][COLUNA]) {
        int i,j;
        //Verifica se o tamanho das matrizes nao ultrapassa o maximo declarado
        if(*linhasA <= 10 && *linhasB <= 10 && *colunasA <= 10 && *colunasB <= 10) {
            //Verifica se eh possivel realizar a operacao
            if(*colunasA == *linhasB) {
                //Pede ao usuario os dados da matriz A
                printf("Entre com a matriz A:\n");
                for(i = 0; i < *linhasA; i++) {
                    for(j = 0; j < *colunasA; j++) {
                        printf("Matriz A [%d][%d]: ", i, j);
                        scanf("%p", &matrizA[i][j]);
                    }
                }
                system("cls");
                printf("Entre com a matriz B:\n");
                //Pede ao usuario os dados da matriz B
                for(i = 0; i < *linhasB; i++) {
                    for(j = 0; j < *colunasB; j++) {
                        printf("Matriz B [%d][%d]: ", i, j);
                        scanf("%p", &matrizB[i][j]);
                    }
                }
                system("cls");
            } else {
                printf("O numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda!\n");
                return 1;
            }
        } else {
            printf("A ordem da matriz nao pode ser maior que 10!\n");
            return 1;
        }
    }

    void defineMatrizResultado(int *linhasResultado, int *colunasResultado, int *linhasA, int *colunasA) {
        //Configura tamanho da matriz resultado
        *linhasResultado = *linhasA;
        *colunasResultado = *colunasA;
    }

    void defineMatrizResultadoMultiplicacao(int *linhasResultado, int *colunasResultado, int *linhasA, int *colunasB) {
        //Configura tamanho da matriz resultado
        *linhasResultado = *linhasA;
        *colunasResultado = *colunasB;
    }

    int main() {
        int linhasA, colunasA, linhasB, colunasB, linhasResultado, colunasResultado, diferente, i, j, k;
        char opcao;
        int matrizA[LINHA][COLUNA], matrizB[LINHA][COLUNA], matrizResultado[LINHA][COLUNA];
        //Menu de escolha de operacoes
        do {
            diferente = 0;

            system("cls");
            printf("-----------------------------------------------\n");
            printf("1. Igualdade entre matrizes (A = B)\n");
            printf("2. Adicao entre matrizes (A + B)\n");
            printf("3. Subtracao entre matrizes (A - B)\n");
            printf("4. Multiplicacao entre matrizes (A * B)\n");
            printf("5. Sair\n");
            printf("-----------------------------------------------\n");
            printf("Digite a opcao: ");
            fflush(stdin);
            scanf("%c", &opcao);
            system("cls");

            switch(opcao) {
                case('1'): {
                    if(pedeOrdem(&linhasA, &colunasA, &linhasB, &colunasB) == 1)
                        break;
                    if(entraMatrizes(&linhasA, &colunasA, &linhasB, &colunasB, &matrizA, &matrizB) == 1)
                        break;

                    defineMatrizResultado(&linhasResultado, &colunasResultado, &linhasA, &colunasA);

                    //Compara as matrizes
                    printf("Resultado:\n");
                    for(i = 0; i < linhasResultado; i++) {
                        for(j = 0; j < colunasResultado; j++) {
                            if(matrizA[i][j] != matrizB[i][j]) {
                                diferente = 1;
                            }
                        }
                        printf("\n");
                    }
                    if(diferente != 1) {
                        printf("As matrizes sao iguais!\n");
                    } else {
                        printf("As matrizes sao diferentes!\n");
                    }
                    break;
                }
                case('2'): {
                    if(pedeOrdem(&linhasA, &colunasA, &linhasB, &colunasB) == 1)
                        break;
                    if(entraMatrizes(&linhasA, &colunasA, &linhasB, &colunasB, &matrizA, &matrizB) == 1)
                        break;

                    defineMatrizResultado(&linhasResultado, &colunasResultado, &linhasA, &colunasA);

                    //Calcula e exibe matriz resultado
                    printf("Resultado:\n");
                    for(i = 0; i < linhasResultado; i++) {
                        for(j = 0; j < colunasResultado; j++) {
                            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
                            printf("%d\t", matrizResultado[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }
                case('3'): {
                    if(pedeOrdem(&linhasA, &colunasA, &linhasB, &colunasB) == 1)
                        break;
                    if(entraMatrizes(&linhasA, &colunasA, &linhasB, &colunasB, &matrizA, &matrizB) == 1)
                        break;

                    defineMatrizResultado(&linhasResultado, &colunasResultado, &linhasA, &colunasA);

                    //Calcula e exibe matriz resultado
                    printf("Resultado:\n");
                    for(i = 0; i < linhasResultado; i++) {
                        for(j = 0; j < colunasResultado; j++) {
                            matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
                            printf("%d\t", matrizResultado[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }
                case('4'): {
                    if(pedeOrdem(&linhasA, &colunasA, &linhasB, &colunasB) == 1)
                        break;
                    if(entraMatrizesMultiplicacao(&linhasA, &colunasA, &linhasB, &colunasB, &matrizA, &matrizB) == 1)
                        break;
                    defineMatrizResultadoMultiplicacao(&linhasResultado, &colunasResultado, &linhasA, &colunasA);

                    //Loop matriz resultado
                    for(i = 0; i < linhasResultado; i++) {
                        for(j = 0; j < linhasResultado; j++) {
                            for(k = 0; k < colunasA; k++){
                                matrizResultado[i][j] = 0;
                                matrizResultado[i][j] = matrizResultado[i][j] + (matrizA[i][k] * matrizB[k][j]);
                            }
                        }
                    }
                    for(i = 0; i < linhasResultado; i++){
                        for(j = 0; j < colunasResultado; j++){
                            printf("%d\t", matrizResultado[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }
                case('5'): {
                    printf("Saindo do programa!");
                    exit(0);
                }
                default: {
                    printf("Opcao invalida!\n");

                }
            }
            printf("\nPressione alguma tecla para voltar ao menu...");
            getch();
        } while(opcao != 5);
        return 0;
    }
