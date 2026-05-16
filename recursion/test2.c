#include <stdio.h>

/*
Escreva uma função recursiva que receba um valor real  n > 0
e imprima n / 2 até que n <= 0
*/

void divide_by_2(float n){

	if (n <= 0.01){

		return;
	}

	else {

		printf("%.2f\n", n);
		divide_by_2(n / 2);
	}

}

int main(void){

	float n = 0;

	printf("Entre com um valor real n > 0: ");
	scanf("%f", &n);

	divide_by_2(n);

	return 0;
}
