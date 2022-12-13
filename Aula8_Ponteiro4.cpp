#include <stdio.h>
#include <stdlib.h>
int i;

float media(int n, float *vnotas){
	float m = 0, soma = 0;
	for(i = 0; i < n; i++){
		soma = soma + vnotas[i];
	}
	m = soma / n;
	return m;
}

void mostra(int t, float *vnotas){
	for (i = 0; i < t; i++){
		printf("Valor: %.1f\n", vnotas[i]);
		printf("Endereco de memoria: %p\n\n", &vnotas[i]);
	}
	system("pause");
}

main(){
	float vnotas[5];
	float media_notas;
	int tam;
	for(i = 0; i < 5; i++){
		printf("Dagite os valores das notas: ");
		scanf("%f", &vnotas[i]);
	}
	media_notas = media(5, vnotas);
	printf("\nMedia = %.1f\n\n", media_notas);
	
	tam = sizeof(vnotas)/sizeof(vnotas[0]);
	printf("\nTamanho do Vetor = %d \n\n", tam);
	
	mostra(tam, vnotas);
	
	system("pause");
}

