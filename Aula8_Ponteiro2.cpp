#include <stdio.h>
#include <stdlib.h>

main(){
	printf("Char:         %lu byte\n", sizeof(char));
	printf("Int:          %lu bytes\n", sizeof(int));
	printf("Float:        %lu bytes\n", sizeof(float));
	printf("Double:       %lu bytes\n", sizeof(double));
	printf("Unsigned Int: %lu bytes\n", sizeof(unsigned int));
	system("pause");
}
