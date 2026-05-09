#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que receba uma string e imprima o número de ocorrências
de cada caractere na string.
*/

void imprimir_ocorrencias(char *s){

	int i = 0;

	int freq[256] = {0};

	while(s[i] != '\0'){

		freq[(unsigned char)s[i]]++;

		i++;
	}

	for (int j = 0; j < 256; j++){

		if (freq[j] > 0){

			printf("%c = %d\n", j, freq[j]);
		}
	}

}

int main(void){

	char s[100];

	printf("digite uma string: ");
	fgets(s, 100, stdin);

	imprimir_ocorrencias(s);

	return 0;
}
