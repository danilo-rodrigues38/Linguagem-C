#include <stdio.h>
#include <stdlib.h>

void main()
{
    // declaração de variáveis
    float a, b, media;
    
    // Solicita entrada de dados ao usuário
    printf("Digite o 1º valor: ");
    
    // Os caracteres %d para indicar que a entrada de dados é do tipo inteiro
    // O caracter & serve para capiturar o valor recebido pelo teclado e
    // endereçar para o local onde será armazenado na memória
    scanf("%f", &a);
    printf("Digite o 2º valor: ");
    scanf("%f", &b);
    media = (a + b) / 2;
    printf("A média é %.2f", media);
}

// %d -> para int
// %f -> para float
// %c -> para um único caractere
// %s -> para uma cadeia de caractere
