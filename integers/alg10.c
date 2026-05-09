#include <stdio.h>
#include <stdlib.h>

/*
14.  Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos (1) 
através de uma seqüência de números naturais que passou a ser conhecida como seqüência de Fibonacci (2). 
O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência: 

Faça um programa que, dado n, calcula Fn. 
*/

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

int PrintFibonacciSequence(int const number){

    if (number <= 0){
        return -1;
    }

    int a = 0;
    int b = 1;
    int c = 0;

    printf("%d \n", a);
    printf("%d \n", b);

    for (int i = 0; i < number; i++){

        c = a + b;
        a = b;
        b = c;

        printf("%d \n", c);
    }

    return 1;
}

int main(){

    int number;

    printf("Enter number: ");

    if (ReadIntType(&number) == -1){
        printf("ERROR (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

    if (PrintFibonacciSequence(number) == -1){
        printf("ERROR (PrintFibonacciSequence) \n");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
    return 0;
}