#include <stdio.h>
#include <stdlib.h>

main(){
	int *pont;
	int valor = 200;
	// Pontiros são variáveis que guardam um determinado endereço de memória.
	// Em geral, o ponteiro aponta para o endereço de memória de alguma variável.
	// Operador de endereço: &
	// Operador de conteúdo: *
	
	pont = &valor;
											// Saída
	printf("Valor: %d\n", *pont);			// Valor: 200
	printf("Enderece: %p\n", pont);			// Endereço: 000000000062FE14
	
	*pont = 500;
	
	printf("Valor alterado: %d\n", *pont);	// Valor alterado: 500
	printf("Endereço: %p\n", pont);			// Endereço: 000000000062FE14
	
	system("pause");
}

