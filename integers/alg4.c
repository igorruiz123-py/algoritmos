#include <stdio.h>
#include <stdlib.h>

// 4.  Dados um inteiro não-negativo x e um inteiro não-negativo n, calcular x ** n.

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

int CalculateSquareofXOverN(int x, int n, int *square){

    if (x <= 0 || n <= 0){
        return 0;
    }

    *square = 1;

    for (int i = 0; i < n; i++){

        *square = *square * x;
    }

    return 1;
}

int main(){

    int x;
    int n;
    int square;

    printf("Enter x: ");

    if (ReadIntType(&x) == 0){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    printf("Enter n: ");

    if (ReadIntType(&n) == 0){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    if (CalculateSquareofXOverN(x, n, &square) == 0){
        printf("ERROR (CalculateSquareofXOverN) \n");
        exit(EXIT_FAILURE);
    }

    printf("%d \n", square);

    return 0;
}

