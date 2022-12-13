#include <stdio.h>
#include <stdlib.h>
#define TAM 10000

int vetor[TAM];
int i;

void input() {
	printf("\nGerando um vetor com %d inteiros aleatorios:\n", TAM);
	for(i = 0; i < TAM; i++)
	{
		vetor[i] = rand() % 100;
		printf("%d\t", vetor[i]);
	}
	getchar();
}

void mostra() {
	printf("\nVetor:\n");
	for(i = 0; i < TAM; i++)
		printf("%d\t", vetor[i]);
	getchar();
}

bool buscar(int busca) {
	bool achou = false;
	for(i = 0; i < TAM; i++)
	{
		if(vetor[i] == busca)
			achou = true;
	}
	return achou;
}

main()
{
	int busca;
    bool encontr = false;
	input();
    mostra();
    printf("Entre com um valor para busca: \n");
    scanf("%d", &busca);
    encontr = buscar(busca);
    if(encontr == true)
    	printf("Valor %d encontrado\n", busca);
    else
    	printf("Valor %d nao encontrado\n", busca);
}

