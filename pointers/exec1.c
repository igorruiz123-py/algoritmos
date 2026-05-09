#include <stdio.h>

/*
Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços
de duas variáveis inteiras, digamos min e max, e deposite nestas variáveis o valor de um
elemento mínimo e o valor de um elemento máximo do vetor. Escreva também uma
função main que use a função mm.
*/

void mm(int *vetor, int *v1, int *v2){

	int max = vetor[0];
	int min = vetor[1];

	for (int i = 0; vetor[i] != '\0'; i++){

		if (vetor[i] > max){

			max = vetor[i];
		}

		else if (vetor[i] < min){

			min = vetor[i];
		}
	}

	*v1 = max;

	*v2 = min;
}

int main(){

	int vetor[5] = {1, 2, 3, 4, 5};
	int v1 = 0;
	int v2 = 0;

	mm(vetor, &v1, &v2);

	printf("%d\n", v1);
	printf("%d\n", v2);

	return 0;
}
