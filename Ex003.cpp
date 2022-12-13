#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float financiamento(float vp, float i, float n)
{
	float pmt;
	float j = i / 100;
	pmt = vp * ((j * pow(1 + j, n)) / (pow(1 + j, n) - 1));
	return pmt;
}

void tabela(float vp, float resp,float i, int n){
	int cont;
	float j = i / 100;
	float valor = vp;
	float parce = resp;
	float juros = valor * j;
	float amort = parce - juros;
	float saldo = valor - amort;
	for (cont = 0; cont < n; cont++){
		printf("%2d   ", cont + 1);
		printf("%8.2f   ", resp);
		printf("%8.2f   ", juros);
		printf("%9.2f   ", amort);
		printf("%10.2f   ", saldo);
		valor = saldo;
		juros = valor * j;
		amort = parce - juros;
		saldo = valor - amort;
		printf("\n");
	}
}

main ()
{
	float resp; // Resposta
	float vp;   // Valor financiado
	float i;    // Taxa de juros
	int n;      // Prazo ou período em meses
	
	printf("\n   PROGRAMA PARA CALCULO DE PRESTACAO MENSAL DE FINANCIAMENTO   \n");
	printf("------------------------------------------------------------------\n");
	printf("\nQual o valor valor financiado: R$ ");
	scanf("%f", &vp);
	printf("Qual a taxa de juros ao mes para calculo: ");
	scanf("%f", &i);
	printf("Qual o prazo em meses a ser calculado: ");
	scanf("%d", &n);
	
	resp = financiamento(vp, i, n);
		
	printf("\nValor financiado:       R$ %.2f", vp);
	printf("\nTaxa de Juros mensal:   %.2f", i);
	printf("\nPrazo do financiamento: %d meses.\n", n);
	printf("\nO valor da prestacao mensal e de R$ %.2f\n\n", resp);
	tabela(vp, resp, i, n);
	system("pause");
}

