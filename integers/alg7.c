#include <stdio.h>
#include <stdlib.h>

// 9.  Dados n e dois números inteiros positivos i e j diferentes de 0, 
// imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos. 


int ReadIntType(int *number){

    char buffer[32];
    char *endptr;

    fgets(buffer, sizeof(buffer), stdin);

    long value = strtol(buffer, &endptr, 10);

    if (endptr == buffer){
        return 0;
    }

    *number = (int)value;

    return 1;
}


int PrintMultiplesOfIandJ(int n, int i, int j){

    if (n <= 0 || i <= 0 || j <= 0){
        return 0;
    }

    for (int k = 0; k <= n; k++){

        if (k % i == 0 || k % j == 0){
            printf("%d \n", k);
        }
    }

    return 1;
}

int main(){

    int n;
    int j;
    int i;

    printf("Enter n: ");

    if (ReadIntType(&n) == 0){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    printf("Enter i: ");

    if (ReadIntType(&i) == 0){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    printf("Enter j: ");

    if (ReadIntType(&j) == 0){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    if (PrintMultiplesOfIandJ(n, i, j) == 0){
        printf("ERROR (PrintMultiplesOfIandJ) \n");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);

}