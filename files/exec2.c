#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Suponha dado um arquivo contendo código C com comentários.
Escreva um
programa que leia esse arquivo, remova os comentários, e grave o código ␐limpo␑ em
outro arquivo.
*/


int main(void){

	FILE *entrada = fopen("main.c", "r");

	if (entrada == NULL){

		fprintf(stderr, "erro ao abrir arquivo main.c\n");
		exit(EXIT_FAILURE);
	}

	char buffer[1024];

	FILE *saida = fopen("copia_main.c" , "w");

	if (saida == NULL){

		fprintf(stderr, "erro ao abrir aquivo copia_main.c\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(buffer, 1024, entrada)){

		char *comentario = strstr(buffer, "//");

		if (comentario != NULL){

			*comentario = '\0';
		}

		fprintf(saida, "%s", buffer);
	}

	fclose(entrada);
	fclose(saida);

	return 0;
}
