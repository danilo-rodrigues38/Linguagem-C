#include <stdio.h>
#include <conio.h>

int soma(int a, int b)
{return a + b;
}

main()
{
	int a = 0, b = 0, result = 0;
	printf("Vamos somar dois valores!\n");
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	result = soma(a, b);
	printf("O resultado da soma e: %d", result);
	
	getch();
}
