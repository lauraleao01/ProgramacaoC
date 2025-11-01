#include <stdio.h>

int main() {
  int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
  int maior;

 num1 > num2 ? (maior = num1) : (maior = num2);

  printf("O maior número é: %d\n", maior);

  return 0;
}