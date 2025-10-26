#include <stdio.h>

int main() {
    // Carta 1: Brasília
    char estado1[] = "A";//Letra para criar sequência
    char codigo1[] = "A01";// código para criar sequência
    char nomeCidade1[] = "Brasília";// cidade escolhida por ter apenas 1 nome
    unsigned long int populacao1 = 3094325; 
    float area1 = 5802.00;// em km²
    float pib1 = 2179000000000.0; // PIB em reais
    int pontosTuristicos1 = 25; 

    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float SuperPoder1;
    SuperPoder1 = (float) populacao1 + (float) area1 + (float) (pib1 / 1000000000) + (float) pontosTuristicos1 + (float) pibPerCapita1 - (float) densidadePopulacional1 ;

    // Carta 2: Paraná
    char estado2[] = "B"; 
    char codigo2[] = "B02"; 
    char nomeCidade2[] = "Curitiba"; 
    unsigned long int populacao2 = 1963726; 
    float area2 = 434.89;// em km²
    float pib2 = 103700000000.0; // PIB em reais
    int pontosTuristicos2 = 40; 

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    float SuperPoder2;
    SuperPoder2 = (float) populacao2 + (float) area2 + (float) (pib2 / 1000000000) + (float) pontosTuristicos2 + (float) pibPerCapita2 - (float) densidadePopulacional2 ;

    // Exibição da Carta 1
    printf("\n==== Carta 1 ====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1 / 1000000000); // dividi para diminuir a quantide de números exibidos transformando em bilhões
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder da carta 1 é %.2f\n", SuperPoder1);


    // Exibição da Carta 2
    printf("\n==== Carta 2 ====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2 / 1000000000);// dividi para diminuir a quantide de números exibidos transformando em bilhões
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder da carta 2 é %.2f\n", SuperPoder2);

    //Batalha SuperTrunfo
     printf("\n==== Batalha Super Trunfo ====\n");
     printf("População- Carta 1 venceu: %d\n", populacao1 > populacao2);
     printf("Área- Carta 1 venceu: %d\n", area1 > area2);
     printf("Pib- Carta 1 venceu: %d\n", pib1 > pib2);
     printf("Pontos turísticos- Carta 1 venceu: %d\n", pontosTuristicos1 > pontosTuristicos2);
     printf("Densidade Populacional- Carta 1 venceu: %d\n", densidadePopulacional1 < densidadePopulacional2);
     printf("Pib per capita- Carta 1 venceu: %d\n", pibPerCapita1 > pibPerCapita2);
     printf("Super Poder- Carta 1 venceu: %d\n", SuperPoder1 > SuperPoder2);

     printf("\n 1 para verdadeiro e 0 para falso \n");

    return 0;
}