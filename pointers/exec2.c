#include <stdio.h>

/*
Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar
o resultado de seus cálculos. Escreva uma função hm que converta minutos em horas␕
e␕minutos.
A função recebe um inteiro t e os endereços de duas variáveis inteiras,
digamos h e m, e atribui valores não negativos a essas variáveis de modo que tenhamos
m < 60 e 60 h + m = t. Escreva também uma função main que use a função hm.
*/

void hm(int *t, int *h, int *m){

	*h = *t / 60;

	*m = *t % 60;

}

int main(){

	int t = 0;
	int h = 0;
	int m = 0;

	printf("entre com um tempo total: ");
	scanf("%d", &t);

	hm(&t, &h, &m);

	printf("horas: %d\n", h);
	printf("minutos: %d\n", m);

	return 0;
}
