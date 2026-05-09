#include <stdio.h>
#include <stdlib.h>

// 7.  Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.

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

int PrintSumOfFirstEvenNumbers(const int limit){

    int sum = 0;

    for (int i = 0; i < limit; i++){

        if (i % 2 == 0){

            sum = sum + i;

        }

    }

    printf("%d \n", sum);

    return 1;
}

int main(){

    int number;

    printf("Enter number: ");

    if (ReadIntType(&number) == 0){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    PrintSumOfFirstEvenNumbers(number);

    return 0;

}