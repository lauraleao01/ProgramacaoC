#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

int main() {
    int opção;
    int numeroSecreto,palpite;

    printf("Menu Principal:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opção);

    switch(opção) {
        case 1:
           srand(time(0));
           numeroSecreto = rand() % 10;
           printf("Digite um número de 0 a 9: ");
           scanf("%d", &palpite);
    
           if(palpite == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto!\n");
           } else {
            printf("Que pena! O número secreto era %d.\n", numeroSecreto);
            printf("Numero secreto %d\n", numeroSecreto);
          } 
        break;

        case 2:
        printf("Regras do Jogo:\n");
        printf("1. O computador escolherá um número secreto entre 0 e 9.\n");
        printf("2. Você deve tentar adivinhar o número secreto.\n");
        printf("3. Se você acertar, você vence!\n");
        printf("4. Se errar, o número secreto será revelado.\n");
        break;

        case 3:
        printf("Saindo do programa. Até mais!\n");
        break;     

        default:
        printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        break;


    }
}