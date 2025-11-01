#include <stdio.h>

int main() {
  int idade;
  printf("Digite sua idade: ");
    scanf("%d", &idade);

idade >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n"); //veradeiro : falso

  return 0;
}