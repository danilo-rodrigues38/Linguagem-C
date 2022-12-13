#include <stdio.h>
#include <stdlib.h>

void main()
{
    // declara��o de vari�veis
    float a, b, media;
    
    // Solicita entrada de dados ao usu�rio
    printf("Digite o 1� valor: ");
    
    // Os caracteres %d para indicar que a entrada de dados � do tipo inteiro
    // O caracter & serve para capiturar o valor recebido pelo teclado e
    // endere�ar para o local onde ser� armazenado na mem�ria
    scanf("%f", &a);
    printf("Digite o 2� valor: ");
    scanf("%f", &b);
    media = (a + b) / 2;
    printf("A m�dia � %.2f", media);
}

// %d -> para int
// %f -> para float
// %c -> para um �nico caractere
// %s -> para uma cadeia de caractere
