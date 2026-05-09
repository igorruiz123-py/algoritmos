#include <stdio.h>
#include <stdlib.h>


/*
Escreva uma função que receba uma string s e inteiros não negativos i e j e
devolva a string que corresponde ao segmento s[i..j ].
Sua função não deve alocar novo espaço mas pode alterar a string s que recebeu.
*/

char *montar_string(char *s, int i, int j){

	int k = 0;

	while(i <= j){

		s[k] = s[i];

		k++;
		i++;
	}

	s[k] = '\0';

	return s;
}


int main(void){


	int i, j;
	char *s = malloc(100);

	if (s == NULL){

		perror("malloc");
		exit(EXIT_FAILURE);
	}

	printf("digite valor nao negativo para i: ");
	scanf("%d", &i);

	printf("digite valor nao negativo para j: ");
	scanf("%d", &j);

	if (i < 0 || j < 0){

		printf("i e j devem ser positivos\n");
		exit(EXIT_FAILURE);
	}

	getchar();

	printf("digite uma string: ");
	fgets(s, 100, stdin);

	s = montar_string(s, i, j);

	printf("nova string: %s\n", s);

	free(s);
	s = NULL;

	return 0;
}
