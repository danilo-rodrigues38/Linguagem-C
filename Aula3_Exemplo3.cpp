#include <stdio.h>
#include <conio.h>

float converte(float c)
{
	float f;
	f = 1.8 * c + 32;
	return f;
}

main()
{
	float t1;
	float t2;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &t1);
	t2 = converte(t1);
	printf("A temperatura em Fahrenheit e: %.2f\n", t2);
	
	getch();
}
