#include <stdio.h>
#include <stdlib.h>

main(){
	int *pont;
	int valor = 200;
	// Pontiros s�o vari�veis que guardam um determinado endere�o de mem�ria.
	// Em geral, o ponteiro aponta para o endere�o de mem�ria de alguma vari�vel.
	// Operador de endere�o: &
	// Operador de conte�do: *
	
	pont = &valor;
											// Sa�da
	printf("Valor: %d\n", *pont);			// Valor: 200
	printf("Enderece: %p\n", pont);			// Endere�o: 000000000062FE14
	
	*pont = 500;
	
	printf("Valor alterado: %d\n", *pont);	// Valor alterado: 500
	printf("Endere�o: %p\n", pont);			// Endere�o: 000000000062FE14
	
	system("pause");
}

