#include <stdio.h>
#include <stdlib.h>

void main()
{
    // declara��o de vari�veis
    float a, b, media;
    
    // Solicita entrada de dados ao usu�rio
    printf("Entre com dois n�meros A e B: ");
    
    // Os caracteres %f para indicar que a entrada de dados � do tipo inteiro
    // O caracter & serve para capiturar o valor recebido pelo teclado e
    // endere�ar para o local onde ser� armazenado na mem�ria
    scanf("%f %f", &a, &b);
    
    media = (a + b) / 2;
    printf("A m�dia entre %.2f e %.2f � %.2f", a, b, media);
}

