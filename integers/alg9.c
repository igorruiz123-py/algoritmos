#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 11.  Dado um inteiro positivo n, verificar se n é primo. 

int ReadIntType(int *number){

    char buffer[32];
    char *endptr;

    fgets(buffer, sizeof(buffer), stdin);

    long value = strtol(buffer, &endptr, 10);

    if (endptr == buffer){
        return -1;
    }

    *number = (int)value;

    return 1;
}

int CheckPrimeNumber(int const number){

    if (number <= 0){
        return -1;
    }

    else if (number == 1){
        return false;
    }

    for (int i = 2; i < number; i++){

        if (number % i == 0){
            return false;
            break;
        }

    }

    return true;

}

int main(){

    int number;

    printf("Enter number: ");

    if (ReadIntType(&number) == -1){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    int result = CheckPrimeNumber(number);

    if (result == -1){
        printf("ERROR (CheckPrimeNumber) \n");
        exit(EXIT_FAILURE);
    }

    else if (result == true){
        printf("%d is prime \n", number);
        exit(EXIT_SUCCESS);
    }

    else if (result == false){
        printf("%d is not prime \n", number);
        exit(EXIT_SUCCESS);
    }
}