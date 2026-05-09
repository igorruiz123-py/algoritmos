#include <stdio.h>
#include <stdlib.h>

// 2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos. 

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

int CalculateSumOfFirstNumbers(const int limit, int *sum){

    if (limit <= 0){
        return 0;
    }

    *sum = 0;

    for (int i = 0; i < limit; i++){

        *sum = *sum + i;

    }

    return 1;
}

int main(){

    int number;
    int sum;

    printf("Enter number: ");

    if (ReadIntType(&number) == 0){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    if (CalculateSumOfFirstNumbers(number, &sum) == 0){
        printf("ERROR (CalculateSumOfFirstNumbers) \n");
        exit(EXIT_FAILURE);
    }

    printf("%d \n", sum);

    return 0;
}

