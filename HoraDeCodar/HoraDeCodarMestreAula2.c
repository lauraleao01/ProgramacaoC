#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparação;

    //Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Número entre 1 e 100

    //Início do jogo
    printf("Bem-vindo ao jogo maior,menor ou igual!\n");
    printf("Escolha um número e o tipo de comparação:\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação (M/N/I): ");
    scanf(" %c", &tipoComparação);

    printf("Escolha um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);

    //exibir número do computador
    printf("Número do computador: %d\n", numeroComputador);

        switch (tipoComparação)
        {
            case 'M':
            case 'm':
            printf("Você escolheu maior.\n");
            resultado = (numeroJogador > numeroComputador) ? 1 : 0;
            break;

            case 'N':
            case 'n':
            printf("Você escolheu menor.\n");
            resultado = (numeroJogador < numeroComputador) ? 1 : 0;
            break;

            case 'I':
            case 'i':
            printf("Você escolheu igual.\n");
            resultado = (numeroJogador == numeroComputador) ? 1 : 0;
            break;

            default:
                printf("Opção inválida!\n");
        }

        printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

        if (resultado ==1){
            printf("Parabéns! Você ganhou!\n");
        }
        else
        {
            printf("Que pena! Você perdeu!\n");
        }
}