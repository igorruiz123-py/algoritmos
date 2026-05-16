#include <stdio.h>

/*Escreva uma função recursiva que receba um valor n > 0 e imprima os valores
 n - 1 pares decrescente no intervalo [0, n - 1]

 A recursão deve parar quando n = 0 
 */

void imprimir_pares(int n){

	if (n == 0){
	
		return;
	}
	
	if (n % 2 == 0){
	
		printf("valor: %d\n", n);
	}

	imprimir_pares(n - 1);
}

int main(void){

	int n = 0;

	printf("Entre com um valor n > 0: ");
	scanf("%d", &n);

	imprimir_pares(n);

	return 0;
}
