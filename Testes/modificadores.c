#include <stdio.h>

int main () {
     
    int numeroSinal = 3000000000; //excede o limite de int normal
    unsigned int numeroSemSinal = 3000000000;
    int numeronormal = 2147483647; // numero máximo de int
    long int numeroGrande = 2147483647;

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);
    printf("Numero normal (int): %d\n", numeronormal);
    printf("Numero Grande (long int): %ld\n", numeroGrande);

    return 0;
}