#include <stdio.h>

int main() {
    int variavel;

    printf("Digite um valor:\n");
    scanf("%d", &variavel);

    switch (variavel){
        case 1:
        printf("Código a ser executado se a variável foi == 1\n");
        //Código a ser executado se a variável foi == 1
        break;

        case 2:
        printf("Código a ser executado se a variável foi == 2\n");
        //Código a ser executado se a variável foi == 2
        break;// importante para parar o código

        default:
        printf("Código a ser executado se a variável não for igual a nenhum dos casos\n");
}
}
