#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y){
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

main(){
	int x,y;
	printf("Insira o numero x: ");
	scanf("%d", &x);
	printf("Insira o numero y: ");
	scanf("%d", &y);
	printf("\nAntes x = %d e y = %d\n", x, y);
	troca(&x, &y);
	printf("\nDepois x = %d e y = %d\n\n", x, y);
	system("pause");
}
