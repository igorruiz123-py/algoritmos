#include <stdio.h>
#include <string.h>

/*
Interprete os elementos do vetor
70 65 67 73 76 32 67 79 77 79 32 50 43 50 46
como caracteres. Qual o resultado?
*/

int main(){

	unsigned char vetor[] = {70, 65, 67, 73, 76, 32, 67, 79, 77, 79, 32, 50, 43, 50, 46};

	for (int i = 0; i < strlen(vetor); i++){

		printf("%u = %c\n", vetor[i], vetor[i]);
	}

	for(int j = 0; j < strlen(vetor); j++){

		printf("%c", vetor[j]);
	}

	printf("\n");

	return 0;

}
