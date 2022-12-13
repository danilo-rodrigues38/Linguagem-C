#include <stdio.h>
#include <stdlib.h>
#define tam 10

void gerador(int *vetor) {
	int cont;
	int valor;
	printf("\nRecebendo %d valores...\n\n", tam);
	for (cont = 0; cont < tam; cont++) {
		printf("Digite o %d. valor: ", cont + 1);
		scanf("%d", &valor);
		vetor[cont] = valor;
		//vetor[cont] = rand() % 50;
		//printf("%d  ", vetor[cont]);
	}
	printf("\n");
}

void par(int *vetor) {
	int cont = 0;
	int total = 0;
	int npares[tam];
	printf("\nLocalizando os numeros pares.\n\n");
	for (cont = 0; cont < tam; cont++) {
		if (vetor[cont] % 2 == 0){
			printf("%d  ", vetor[cont]);
			total += 1;
		}
	}
	printf("\nO total de numeros pares localizado foi: %d", total);
}

main() {
	printf("\n  PROGRAMA PARA PREENCHER UM VETOR COM 10 POSICOES\n");
	printf("----------------------------------------------------\n");
	int vetor[tam];
	gerador(vetor);
	par(vetor);
	printf("\n\nFIM da execussao...\n\n");
	system("pause");
}

