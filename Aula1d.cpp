#include <stdio.h>
#include <stdlib.h>

void main()
{
    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);
    if ((nota >= 0.0) && (nota <= 10.0))
    {
        printf("Nota v�lida!\n");
        if(nota >= 7.0)
        {
            printf("Passou direto.\n");
        }
        else
        {
            printf("N�o passou direto.\n");
        }
    }
    else
    {
        printf("Nota inv�lida!\n");
    }
    getch();
}

