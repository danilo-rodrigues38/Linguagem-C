#include <stdio.h>
#include <stdlib.h>

void main()
{
    // declaração de variáveis
    float a, b, media;
    
    // Solicita entrada de dados ao usuário
    printf("Entre com dois números A e B: ");
    
    // Os caracteres %f para indicar que a entrada de dados é do tipo inteiro
    // O caracter & serve para capiturar o valor recebido pelo teclado e
    // endereçar para o local onde será armazenado na memória
    scanf("%f %f", &a, &b);
    
    media = (a + b) / 2;
    printf("A média entre %.2f e %.2f é %.2f", a, b, media);
}

