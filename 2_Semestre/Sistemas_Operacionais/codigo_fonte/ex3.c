#include <stdio.h>

int main(void){
	int aluno, nota;
	float  matriz[5][3];
	for(aluno = 0; aluno < 5; aluno++){
		for(nota = 0; nota < 3; nota++){
			printf("Digite a nota %d do aluno %d: ", nota+1, aluno+1);
			scanf("%f", &matriz[aluno][nota]);
		}
	}
	for(aluno = 0; aluno < 5; aluno++){
		printf("\nAluno %d: \n", aluno+1);
		for(nota = 0; nota < 3; nota++){
			printf("Nota %d: %2.2f ", nota+1, matriz[aluno][nota]);
		}
	}
	printf("\n");
}
