#include <stdio.h>

int main () {

    printf("Tamaho de int: %u bytes\n", sizeof(int));
    printf("Tamaho de long int: %u bytes\n", sizeof(long int));
    printf("Tamaho de long long int: %u bytes\n", sizeof(long long int));
    printf("Tamaho de double: %u bytes\n", sizeof(double));
    printf("Tamaho de long double: %u bytes\n", sizeof(long double));

    return 0;
}