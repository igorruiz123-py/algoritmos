#include <stdio.h>

/*
Escreva uma função recursiva que receba um valor inteiro n > 0
e devolva a soma x de n - 1, ate que n = 0
*/

int soma(int n){

	int x = 0;

	if (n == 0){

		return x;
	}

	else {

		x = n + soma(n - 1);
	}

	return x;
}

int main(void){

	int n = 0;

	printf("Entre com um valor inteiro n > 0: ");
	scanf("%d", &n);

	int x = soma(n);

	printf("soma: %d\n", x);

	return 0;
}


