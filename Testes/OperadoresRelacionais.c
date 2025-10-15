#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    int x = 5;
    float y = 5.0;
    char c = 'a';

    int num = 10;
    float result = 10.2;


    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x >=c %d\n", x >= c);
    printf("O valor de ASCII de %c é %d: \n", c,c);

    int comparison = (float)num == result;

    printf("num == result: %d\n", comparison);


    return 0;
}