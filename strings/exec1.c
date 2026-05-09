#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva uma função que receba um caractere c e devolva uma string que tem c
como único elemento.
*/

char *converter_char_para_string(char c){

    	char *string = malloc(2);

    	if (string == NULL){
        	perror("malloc");
		return NULL;
    	}

	string[0] = c;
	string[1] = '\0';

	return string;
}

int main(void){

	char c;

	printf("entre com um char: ");
	scanf(" %c", &c);

	char *string = converter_char_para_string(c);

	if (string == NULL){

		exit(EXIT_FAILURE);
	}

	printf("string: %s\n", string);

	free(string);
	string = NULL;

	return 0;
}


