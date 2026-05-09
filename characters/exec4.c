#include <stdio.h>

/*
Faça um código que:

leia um caractere
se for letra minúscula, transforme em maiúscula
se for maiúscula, transforme em minúscula
senão, não altera
*/

// 91 ... 122 -> minusculas
// 65 ... 90 -> maiusculas

int main(){

	unsigned char letra;

	printf("Entre com uma letra: ");
	scanf(" %c", &letra);

	printf("letra: %c\n", letra);

	if (letra >= 91 && letra <= 122){

		unsigned char letra_minuscula = letra - 32;
		printf("letra minuscula: %c\n", letra_minuscula);
	}

	else if (letra >= 65 && letra <= 90){

		unsigned char letra_maiuscula = letra + 32;
		printf("letra em maiuscula: %c\n", letra_maiuscula);
	}


	return 0;
}
