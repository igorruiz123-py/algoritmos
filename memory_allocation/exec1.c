#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um inteiro positivo n seguido de n números inteiros
e imprima esses n números em ordem invertida (primeiro o último, depois o penúltimo
etc.). O seu programa não deve impor quaisquer restrições ao valor de n.
*/

int main(void){

    int n = 0;

    printf("entre com valor de n: ");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){

        printf("entre com um valor: ");
        scanf("%d", &vetor[i]);
    }

    int j = n -1;

    while(j >= 0){

        printf("%d\n", vetor[j]);

        j--;
    }

    free(vetor);
    vetor = NULL;

    return 0;
}