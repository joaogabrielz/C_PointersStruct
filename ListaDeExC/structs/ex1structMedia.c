#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[100];
	int matricula;
	float n1, n2;
	
}Aluno;

#define QTD_ALUNOS 2
//Define qntd_alunos = 3;
main(){
	Aluno alunos[QTD_ALUNOS];
	int i;
	
	printf("Dados: nome(sem espaco), matricula, nota1, nota2 \n");
	for(i=0; i < QTD_ALUNOS ; i++){
		printf("\nInforme os dados do aluno (%i): \n", i+1);
		printf("Nome: \n");
		scanf("%s", &alunos[i].nome);
		printf("Matricula: \n");
		scanf("%d", &alunos[i].matricula);
		printf("Nota1: \n");
		scanf("%d", &alunos[i].n1);
		printf("Nota2: \n");
		scanf("%d", &alunos[i].n2);
	}
	
	printf("\nMatricula\tNome\tMedia\n");
	for(i=0; i < QTD_ALUNOS; i++){
		printf("%d \t\t %s \t %1.2f\n", alunos[i].matricula, alunos[i].nome, ((alunos[i].n1 + alunos[i].n2) /2));
	}
	
	getchar();
	return 0;
}
