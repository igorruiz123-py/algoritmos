#include <stdio.h>
#include <stdlib.h>

// 8.  Dado um inteiro não-negativo n, determinar n! 

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

int CalculateFatorialOfN(int *number){

    if (*number <= 0){
        return 0;
    }

    int aux = *number;

    *number = 1;

    for (int i = 1; i <= aux; i++){

        *number = *number * i;

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

    if (CalculateFatorialOfN(&number) == 0){
        printf("ERROR (CalculateFatorialOfN) \n");
        exit(EXIT_FAILURE);
    }

    printf("%d \n", number);

    exit(EXIT_SUCCESS);

    return 0;
}