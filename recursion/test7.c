#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>


/*Escreva uma função recursiva que receba um vetor[0, n - 1], o número
 de elementos do vetor n > 0 e imprima seus elementos*/


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


void imprimir_vetor(int v[], int n){

	if (n == 0){
		
		return;
	}	

	fprintf(stdout, "%d\n", v[n - 1]);

	imprimir_vetor(v, n - 1);

}

int main(void){


	int n = 0;

	fprintf(stdout, "Entre com o numero n de elementos do vetor n > 0: ");

	if (ler_inteiro(&n) == -1){
	
		fprintf(stderr, "fatal error: n deve ser um numero\n");
		exit(EXIT_FAILURE);
	}

	if (n <= 0){

                fprintf(stderr, "fatal error: n deve ser maior que zero\n");
                exit(EXIT_FAILURE);
        }

	int v[n];

	for (int i = 0; i < n; i++){
	
	
		fprintf(stdout, "Entre com um numero: ");

		if (ler_inteiro(&v[i]) == - 1){
		
			fprintf(stderr, "fatal error: entre com um numero\n");
			exit(EXIT_FAILURE);
		}
	}

	imprimir_vetor(v, n);

	return EXIT_SUCCESS;
}




















