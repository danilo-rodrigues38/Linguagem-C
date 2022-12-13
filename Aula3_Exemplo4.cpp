#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void preenche(int *vetor){
	int i;
	printf("\nGerando um vetor com %d inteiros:\n", TAM);
	for (i = 0; i < TAM; i++)
	scanf("%d", &vetor[i]);
	getchar();
}

void mostra(int *vetor){
	int i;
	printf("\nVetor:\n");
	for (i = 0; i < TAM; i++)
		printf("%d\t", vetor[i]);
	getchar();
}

main()
{
	int vetor[TAM];
	preenche(vetor);
	mostra(vetor);
}
