#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 10.  Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos. 
// Exemplo: 120 é triangular, pois 4.5.6 = 120.
// Dado um inteiro não-negativo n, verificar se n é triangular. 

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


int CheckTriangularNumber(int const number){

    if (number <= 0){
        return -1;
    }

    for (int i = 1; i < number; i++){

        if (i * (i + 1) * (i + 2)  == number){
            return true;
        }

    }

    return false;
}

int main(){

    int number;

    printf("Enter number: ");

    if (ReadIntType(&number) == -1){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    int result = CheckTriangularNumber(number);

    if (result == -1){
        printf("ERROR (CheckTriangularNumber) \n");
        exit(EXIT_FAILURE);
    }

    else if (result == true){
        printf("%d is triangular \n", number);
        exit(EXIT_SUCCESS);
    }

    else if (result == false){
        printf("%d is not triangular \n", number);
        exit(EXIT_SUCCESS);
    }

    return 0;
    
}