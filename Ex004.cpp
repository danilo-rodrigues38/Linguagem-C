#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define tam 10

float vetor[tam];
int cont;
float val;
float maior;
float menor;
float soma;
float media;
float num;
float desvpadrao, dp;
bool encontrar = false;

void espacador() {
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}

void gerador(float *vetor) {
	printf("\n\n****** Item 1 do exercicio 4. ******");
	printf("\nGerando um vetor com %d posicoes.\n", tam);
	for (cont = 0; cont < tam; cont++) {
		printf("Digite um numero para a posicao %d: ", cont);
		scanf("%f", &val);
		vetor[cont] = val;
	}
	printf("\n");
}

void valor(float *vetor) {
	printf("\n\n****** Item 2 do exercicio 4. ******");
	printf("\nValor: ");
	for (cont = 0; cont < tam; cont++) {
		printf("%7.2f", vetor[cont]);
	}
}

void chave () {
	printf("\nChave: ");
	for (cont = 0; cont < tam; cont++) {
		printf("%7d", cont);
	}
	printf("\n");
}

float maiorvalor(float *vetor) {
	printf("\n\n****** Item 3 do exercicio 4. ******");
	for (cont = 0; cont < tam; cont++) {
		if (cont == 0) {
			maior = vetor[cont];
		}else if (vetor[cont] > maior) {
			maior = vetor[cont];
		}
	}
	return maior;
}

float menorvalor(float *vetor) {
	printf("\n\n****** Item 4 do exercicio 4. ******");
	for (cont = 0; cont < tam; cont++) {
		if (cont == 0) {
			menor = vetor[cont];
		} else if (vetor[cont] < menor) {
			menor = vetor[cont];
		}
	}
	return menor;
}

float mediaDosValores(float *vetor) {
	printf("\n\n****** Item 5 do exercicio 4. ******");
	for (cont = 0; cont < tam; cont++) {
		soma += vetor[cont];
	}
	printf("\nA soma dos valores do vetor e %.2f.", soma);
	media = soma / tam;
	return media;
}

float desvioPadrao(float *vetor) {
	float mediaDP;
	for (cont =0; cont < tam; cont++){
		mediaDP += pow((vetor[cont] - media), 2);
	}
	dp = (mediaDP / 10);
	return dp;
}

float localizarNumero(float *vetor, float num) {
	bool achou = false;
	for (cont = 0; cont < tam; cont++) {
		if (vetor[cont] == num) {
			achou = true;
		}
	}
	return achou;
}

main() {
	gerador(vetor);
	
	espacador();
	valor(vetor);
	chave();
	
	espacador();
	maior = maiorvalor(vetor);
	printf("\nO maior valor encontrado no vetor foi %.2f.\n", maior);
	
	espacador();
	menor = menorvalor(vetor);
	printf("\nO menor valor encontrado no vetor foi %.2f.\n", menor);
	
	espacador();
	media = mediaDosValores(vetor);
	printf("\nA media dos valores do vetor e %.2f.\n", media);
	
	espacador();
	printf("\n\n****** Item 6 do exercicio 4. ******");
	desvpadrao = desvioPadrao(vetor);
	printf("\nO desvio padrao dos valores amazenados no vetor e: %f", desvpadrao);
	
	espacador();
	printf("\n\n****** Item 7 do exercicio 4. ******");
	printf("\nDigite um valor para busca: ");
	scanf("%f", &num);
	encontrar = localizarNumero(vetor, num);
	if (encontrar == true) {
		printf("\nO numero %.1f, foi encontrado!", num);
	} else {
		printf("\nO numero %.1f, nao foi encontrado!", num);
	}
	
	printf("\n\nFIM DO PROGRAMA!");
	
	system("pause");
}

