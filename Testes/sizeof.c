#include <stdio.h>

int main () {

    /* sizeof() retorna size_t; use %zu para imprimir portavelmente */
    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de long int: %zu bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %zu bytes\n", sizeof(long long int));
    printf("Tamanho de double: %zu bytes\n", sizeof(double));
    printf("Tamanho de long double: %zu bytes\n", sizeof(long double));
    printf("Tamanho de short int: %zu bytes\n", sizeof(short int));

    return 0;
}