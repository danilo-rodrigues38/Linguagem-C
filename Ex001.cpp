#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float jurosComposto(float c, float i, float n)
{
	float m;
	m = c * pow(1 + (i / 100), (n * 0.0833333));
	return m;
}

main ()
{
	float resp; // Resposta
	float c; // Capital investido
	float i; // Taxa de juros
	float j; // Total dos juros no periodo
	int n; // Prazo ou período
	
	printf("\nPROGRAMA PARA CALCULO DE JUROS COMPOSTO\n");
	printf("---------------------------------------\n");
	printf("\nQual o valor do capital a ser calculado: R$ ");
	scanf("%f", &c);
	printf("Qual a taxa de juros ao ano para calculo: ");
	scanf("%f", &i);
	printf("Qual o prazo em meses a ser calculado: ");
	scanf("%d", &n);
	
	resp = jurosComposto(c, i, n);
	j = resp - c;
	
	printf("\nCapital de R$ %.2f\nJuros de %.2f porcento ao ano.\nPrazo de %d meses.\n", c, i, n);
	printf("Valor total dos juros no periodo R$ %.2f\n", j);
	printf("\nO valor total e R$ %.2f.\n\n", resp);
	system("pause");
}

