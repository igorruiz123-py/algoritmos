#include <stdio.h>

/*
Escreva uma função que receba um número inteiro que representa um intervalo
de tempo medido em minutos e devolva o correspondente número de horas e minutos
(por exemplo, 131 minutos é o mesmo que 2 horas e 11 minutos). Use uma struct para
representar o par (horas, minutos).
*/

struct hm {

	int hora;
	int minuto;
};

void converter_hm(int t, struct hm *par){

	par->hora = t / 60;
	par->minuto = t % 60;
}

int main(){

	struct hm par;
	int t = 135;

	converter_hm(t, &par);

	printf("hora: %d\n", par.hora);
	printf("minuto: %d\n", par.minuto);

	return 0;
}
