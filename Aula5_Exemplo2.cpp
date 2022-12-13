#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	struct Alunos {
		char nome[30];
		float matematica, fisica, media;
	};
	
	struct Alunos estudante[5];
	
	int cont;
	
	for(cont = 0; cont < 5; cont++){
		fflush(stdin);
		printf("\nNome do aluno %d: ", cont + 1);
		gets(estudante[cont].nome);
		printf("Nota de matematica: ");
		scanf("%f", &estudante[cont].matematica);
		printf("Nota de fisica: ");
		scanf("%f", &estudante[cont].fisica);
		estudante[cont].media = (estudante[cont].matematica + estudante[cont].fisica) / 2;
	}
	
	printf("\nExibindo nome e media:\n");
	
	for(cont = 0; cont < 5; cont++){
		printf("\nAluno %d\n", cont + 1);
		printf("Nome : %s\n", estudante[cont].nome);
		printf("Endereco Memoria: %p\n", estudante[cont].nome);
		printf("Media: %.2f\n", estudante[cont].media);
	}
	system("pause");
}

