#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <errno.h>

/*
 Escreva uma função recursiva que receba um valor inteiro  n > 0 e devolva seu fatorial
 */

int ler_inteiro(int *n){

	char buffer[32];
	char *endptr;

	if (fgets(buffer, sizeof(buffer), stdin) == NULL){
	
		return -1;
	}

	long valor = strtol(buffer, &endptr, 10);

	if (endptr == buffer){
	
		return -1;
	}

	while (isspace((unsigned char)*endptr)){
	
		endptr++;
	}

	if (*endptr != '\0'){
	
		return -1;
	}

	if (errno == ERANGE){
	
		return -1;
	}

	if (valor > INT_MAX || valor < INT_MIN){
	
		return -1;
	}

	*n = (int)valor;

	return 1;
}

int fatorial(int n){

	if (n == 0){
	
		return 1;
	}

	n = n * fatorial(n - 1);

	return n;
}

int main(void){

	int n = 0;

	fprintf(stdout, "Entre com um valor n > 0: ");

	if (ler_inteiro(&n) == -1){
	
		fprintf(stderr, "fatal error: n deve ser um numero inteiro\n");
		exit(EXIT_FAILURE);
	}

	if (n <= 0){
	
		fprintf(stdout, "fatal error: n deve ser um numero inteiro maior que 0\n");
		exit(EXIT_FAILURE);
	}

	int x = fatorial(n);

	fprintf(stdout, "fatorial de %d: %d\n", n, x);

	return EXIT_SUCCESS;
}
