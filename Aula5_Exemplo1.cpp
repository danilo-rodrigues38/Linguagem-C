#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ficha {
	int matricula;
	float media;
	char nome[30];
};

main()
{
	struct ficha aluno;
	printf("Digite a matricula: ");
	scanf("%d", &aluno.matricula);
	printf("Digite a media: ");
	scanf("%f", &aluno.media);
	printf("Digite o nome: ");
	fflush(stdin);
	gets(aluno.nome);
	printf("\n\nMatricula = %d\n", aluno.matricula);
	printf("Media: %.2f\n", aluno.media);
	printf("Nome: %s\n\n", aluno.nome);
	system("pause");
}

