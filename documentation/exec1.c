
/*
Escreva a documentação correta da função abaixo.
*/


/*
A função abaixo recebe um vetor v[1...n] e o valor n > 0  do número de elementos
que compõem o vetor e devolve o valor da soma x do vetor.
*/
int soma (int n, int v[]){

	int i, x = 0;

	for (i = 0; i < n; i++){

		x += v[i];
	}

	return x;
}

