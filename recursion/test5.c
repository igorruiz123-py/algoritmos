#include <stdio.h>
#include <stdlib.h>

/*
 Escreva uma função recursiva que recebe um valor n > 0 e imprima os
 os valores n - 1 impares decrescente no intervalo [0, n - 1]

 A recursão deve parar quando n = 0
 */

int ler_inteiro(int *n){

	char buffer[32];
    	char *endptr;

    	fgets(buffer, sizeof(buffer), stdin);

    	long value = strtol(buffer, &endptr, 10);

    	if (endptr == buffer){
        	return -1;
    	}

    	*n = (int)value;

	return 1;
}

void imprimir_impares(int n){

	if (n == 0){
	
		return;
	}

	if (n % 2 != 0){
	
		 fprintf(stdout, "valores impares: %d\n", n);
	}

	imprimir_impares(n - 1);

}

int main(void){

	int n = 0;

	printf("Entre com um valor n > 0: ");

	if (ler_inteiro(&n) == -1){

                fprintf(stderr, "fatal error: n deve ser um numero inteiro\n");
                exit(EXIT_FAILURE);
        }


	if (n <= 0){
	
		fprintf(stderr, "fatal error: n deve ser maior que 0\n");
		exit(EXIT_FAILURE);
	}


	imprimir_impares(n);

	return EXIT_SUCCESS;

}
