#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva um programa que faça uma cópia de um arquivo.
*/

int main(void){

	FILE *entrada = fopen("file.txt", "r");

	if (entrada == NULL){

		fprintf(stderr, "erro ao abrir o arquivo\n");
		exit(EXIT_FAILURE);
	}

	size_t capacidade = 16;
	size_t tamanho = 0;

	char *buffer = malloc(capacidade);

	if (buffer == NULL){

		fprintf(stderr, "erro ao alocar memoria na heap\n");
		exit(EXIT_FAILURE);
	}

	buffer[0] = '\0';

	while(fgets(buffer + tamanho, capacidade - tamanho, entrada)){

		tamanho += strlen(buffer + tamanho);

		if (buffer[tamanho - 1] == '\n'){

			break;
		}

		capacidade *= 2;

		char *temp = realloc(buffer, capacidade);

		buffer = temp;

	}

	FILE *saida = fopen("copia_file.txt", "w");

	if (saida == NULL){

		fprintf(stderr, "erro ao abrir arquivo copia\n");
		exit(EXIT_FAILURE);
	}

	fprintf(saida, "%s\n", buffer);

	fprintf(stdout, "copia criada\n");

	fclose(entrada);
	fclose(saida);
	free(buffer);

	return 0;
}

