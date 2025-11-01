#include <stdio.h>

int main() {
  int opcao;
  float saldo = 1000.0;
  char banco[50];
  char agencia[50];
  char conta[50];
  float valor;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ %f\n",saldo);
      break;

    case 2:
      printf("Digite o banco que você deseja depositar:\n");
      scanf("%s", banco);
      printf("Digite a agencia que você deseja depositar:\n");
      scanf("%s", agencia);
      printf("Digite a conta que você deseja depositar:\n");
      scanf("%s", conta);
      break;

    case 3:
      printf("Digite o valor que você deseja sacar:\n");
      scanf("%f", &valor);  
      break;

    default:
      printf("Opção inválida\n");
  }

  return 0;
}