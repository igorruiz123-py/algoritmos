#include <stdio.h>

/*
Escreva um programa que exiba na tela do monitor os símbolos grá␜cos dos
caracteres (sem sinal) 32 a 255.
*/

int main(){

	unsigned char i = 32;

	for (int j = 32; j <= 255; j++){

		printf("%u = %c\n", i, i);
		i++;
	}

	return 0;
}
