#include <stdio.h>

void main()
{
    int cont;
    printf("   TABOADA   ");
    printf("\n-------------\n");
    for(cont =1; cont <= 10; cont++)
    {
        printf("%d x 5 = %d\n", cont, (cont * 5));
    }
    printf("\nFIM");
    getchar();
}