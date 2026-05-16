#include <stdio.h>

/*
Faça uma função recursiva que receba um valor n > 0 e imprima seu valor n - 1
até que n = 0
*/

int count_down(int n){

	if (n == 0){

		return n;
	}

	else {

		printf("%d\n", n);
		count_down(n - 1);
	}

}

int main(void){

	int n = 0;

	printf("Entre com um valor n > 0: ");
	scanf("%d", &n);

	count_down(n);

	return 0;
}
