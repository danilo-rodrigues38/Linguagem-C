#include <stdio.h>
#include <stdlib.h>
#define TAM 10000

void input(int *vetor) {
	int i;
	printf("\nGerando um vetor com %d inteiros aleatorios:\n", TAM);
	for(i = 0; i < TAM; i++) {
		vetor[i] = rand() % 100;
		printf("%d\t", vetor[i]);
	}
	getchar();
}

void mostra(int *vetor) {
	int i;
	printf("\nVetor:\n");
	for(i = 0; i < TAM; i++)
		printf("%d\t", vetor[i]);
	getchar();
}

bool buscar(int *vetor, int busca) {
	int i;
	bool achou = false;
	for(i = 0; i < TAM; i++) {
		if(vetor[i] == busca)
			achou = true;
	}
	return achou;
}

main()
{
    int vetor[TAM];
    int busca;
    bool encontr = false;
    input(vetor);
    mostra(vetor);
    printf("Entre com um valor para busca: \n");
    scanf("%d", &busca);
    encontr = buscar(vetor, busca);
    if(encontr == true)
    	printf("Valor %d encontrado\n", busca);
    else
    	printf("Valor %d nao encontrado\n", busca);
}

