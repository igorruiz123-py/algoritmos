#include <stdio.h>

/*
Escreva uma função que receba dois structs do tipo dma, cada um representando
uma data válida, e devolva o número de dias que decorreram entre as duas datas.
*/

// Estou considerando que todos os mêses têm 30 dias e que todos os anos possuem 365 dias

struct dma {

	int dia;
	int mes;
	int ano;
};

int calcular_dias(struct dma *d1, struct dma *d2){

	int dif_anos = d1->ano - d2->ano;
	dif_anos = dif_anos * 365;

	int total_dias_d1 = d1->dia + (30 * d1->mes);

	int total_dias_d2 = d2->dia + (30 * d2->mes);

	int total_dias = (total_dias_d1 - total_dias_d2) + dif_anos;

	return total_dias;

}

int main(){

	struct dma d1;
	struct dma d2;

	d1.dia = 15;
	d1.mes = 5;
	d1.ano = 2026;

	d2.dia = 10;
	d2.mes = 5;
	d2.ano = 2026;

	int total = calcular_dias(&d1, &d2);

	printf("total de dias: %d\n", total);

	return 0;
}
