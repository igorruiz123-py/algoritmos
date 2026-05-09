#include <stdio.h>
#include <stdlib.h>

// 1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados. 

int PrintSquaredSequence(const int limit){

    if (limit <= 0){
        return 0;
    }

    int num;

    for (int i = 0; i < limit; i++){

        num = i * i;
        
        printf("%d \n", num);

    }

    return 1;
}

int ReadIntType(int *num){

    char buffer[32];
    char *endptr;

    fgets(buffer, sizeof(buffer), stdin);

    int number = strtol(buffer, &endptr, 10);

    if (endptr == buffer){
        return 0;
    }

    *num = (int)number;

    return 1;
}

int main(){

    int limit;

    printf("Enter limit number: ");
    
    if (ReadIntType(&limit) == 0){
        printf("Error (ReadIntType) \n");
        exit(EXIT_FAILURE);
    }

   if (PrintSquaredSequence(limit) == 0){
        printf("Error (PrintSquaredSequence) \n");
        exit(EXIT_FAILURE);
   }

    return 0;
}