#include <stdio.h>

int main () {
     
    int numeroSinal = 3000000000; //excede o limite de int normal
    unsigned int numeroSemSinal = 3000000000;
    int numeronormal = 2147483647; // numero máximo de int
    long int numeroGrande = 2147483648; // Valor maior que o máximo de int
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
    unsigned long int largePositiveNumber = 4000000000;
    unsigned int numeroPositivo = 4000000000;


    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);
    printf("Numero normal (int): %d\n", numeronormal);
    printf("Numero Grande (long int): %ld\n", numeroGrande);
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
    printf("Número positivo grande: %lu\n", largePositiveNumber);
    printf("Número positivo: %u\n", numeroPositivo);

    return 0;
}