#include <stdio.h>
#include <stdlib.h>

// Vetor de 5 temperaturas. Determinar a média e a maior temperatura.
main()
{
	float temp[5];
	float soma, media, maior;
	int i;
	soma = 0;
	for (i = 0; i < 5; i++)
	{
		printf("Digite uma temperatura: ");
		scanf("%f", &temp[i]);
	}
	maior = temp[0];
	for (i = 0; i < 5; i++)
	{
		soma = soma + temp[i];
		if (temp[i] > maior)
			maior = temp[i];
	}
	media = soma / 5;
	printf("\nA media das temperaturas e igual a %.2f\n", media);
	printf("\nA maior temperatura e igual a %.2f\n", maior);
	
	system("pause");
}
