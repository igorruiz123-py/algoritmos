#include <stdio.h>

/*
Escreva um fragmento de código que receba dois caracteres (sem sinal) via teclado
e diga se o primeiro vem antes ou depois do segundo na tabela ISO 8859-1.
*/


int main(){

	unsigned char char1;
	unsigned char char2;

	printf("Entre um caracter: ");
	scanf(" %c", &char1);

	printf("Entre com um outro caracter: ");
	scanf(" %c", &char2);

	if (char1 > char2){

		printf("char1 vem depois que char2 ta tabela ISO 8859-1\n");
	}

	else if (char1 == char2){

		printf("char1 e char2 possuem o mesmo valor na tabela ISO 8859-1\n");
	}

	else {

		printf("char1 vem antes que char2 na tabela ISO 8859-1\n");
	}

	printf("valor numerico do char1: %u\n", char1);
	printf("valor numerico do char2: %u\n", char2);

	return 0;

}
