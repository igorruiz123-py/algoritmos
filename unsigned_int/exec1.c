#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

/*
Escreva um programa que receba um número
natural n e imprima as potências n² , n³ , n⁴ , n⁵
O programa só deve parar quando
não for possível armazenar uma potência em um unsigned int.
*/


int main(){

	unsigned int x = 1;
	unsigned int n = 0;
	unsigned int i = 2;

	printf("Entre com um numero natural: ");
	scanf("%u", &n);

	x = n * n;

	while (true){

		printf("%u ^ %u = %u \n", n, i, x);

		if (x > UINT_MAX / n){

			printf("overflow\n");
			break;
		}

		x = x * n;
		i++;
	}

	return 0;
}


