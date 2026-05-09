#include <stdio.h>
#include <stdlib.h>

// Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares. 

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

int PrintFirstOddNumbers(const int limit){

    if (limit <= 0){
        return 0;
    }

    for (int i = 0; i < limit; i++){

        if (i % 2 != 0){

            printf("%d \n", i);
        }
    }

    return 1;
}

int main(){

    int number;

    printf("Enter number: ");

    if (ReadIntType(&number) == 0){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    if (PrintFirstOddNumbers(number) == 0){
        printf("ERROR (PrintFirstOddNumbers) \n");
        exit(EXIT_FAILURE);
    }

    return 0;
}