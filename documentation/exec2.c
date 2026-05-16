/*
Escreva a documentação correta da função abaixo.
*/

/*
A função abaixo recebe um vetor v[1...n], o valor da quantidade de elementos
n > 0 do vetor e um valor x ∈  v[1...n] e devolve a soma J > 0 de 1 em 1
até que j seja j < n e v[j] ≠ x
*/
int onde (int x, int v[], int n){

	int j = 0;

	while (j < n && v[j] != x){

		j += 1;
	}

	return j;
}
