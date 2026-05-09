#include <stdio.h>
#include <stdlib.h>

/*
De␜na um registro empregado para armazenar os dados (nome, data de nasci-
mento, número do documento de identidade, data de admissão, salário) de um em-
pregado de sua empresa.
De␜na um vetor de empregados para armazenar todos os
empregados de sua empresa.
*/

struct data {

	int dia;
	int mes;
	int ano;
};

struct empregado {

	char nome[32];
	struct data data_nascimento;
	int identidade;
	struct data data_admissao;
	float salario;
};

void cadastro_dados(char *nome, struct data *dn, int *identidade, struct data *da, float *salario){

	printf("entre com o nome: ");
	fgets(nome, 32, stdin);

	printf("\n");

	printf("digite a data de nascimento do empregado\n");
	printf("dia: ");
	scanf("%d", &dn->dia);
	printf("mes: ");
	scanf("%d", &dn->mes);
	printf("ano: ");
	scanf("%d", &dn->ano);

	printf("\n");

	printf("digite o numero de identidade: ");
	scanf("%d", identidade);

	printf("\n");

	printf("digite a data de admissao do empregado\n");
	printf("dia: ");
        scanf("%d", &da->dia);
        printf("mes: ");
        scanf("%d", &da->mes);
        printf("ano: ");
        scanf("%d", &da->ano);

	printf("\n");

	printf("digite o salario do empregado: ");
	scanf("%f", salario);

	getchar();
}

int main(void){

	int total_empregados = 0;

	printf("Entre com o numero total de empregados: ");
	scanf("%d", &total_empregados);

	getchar();

	printf("\n");

	struct empregado vetor_empregados[total_empregados];

	for (int i = 0; i < total_empregados; i++){

		cadastro_dados(
			vetor_empregados[i].nome,
			&vetor_empregados[i].data_nascimento,
			&vetor_empregados[i].identidade,
			&vetor_empregados[i].data_admissao,
			&vetor_empregados[i].salario
		);
	}

	printf("\n");

	for (int j = 0; j < total_empregados; j++){

		printf("nome: %s\n", vetor_empregados[j].nome);

		printf(
			"data de nascimento: %d/%d/%d\n", 
			vetor_empregados[j].data_nascimento.dia, 
			vetor_empregados[j].data_nascimento.mes, 
			vetor_empregados[j].data_nascimento.ano
		);

		printf("identidade: %d\n", vetor_empregados[j].identidade);

		printf("data de admissao: %d/%d/%d\n", 
			vetor_empregados[j].data_admissao.dia, 
			vetor_empregados[j].data_admissao.mes, 
			vetor_empregados[j].data_admissao.ano
		);

		printf("salario: %.2f\n", vetor_empregados[j].salario);
	}

	return 0;
}
