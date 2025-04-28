#include <stdio.h>

int main() {
    printf("Super Trunfo\n");

    // Carta 1
    char estado1[127], carta1[127], cidade1[127];
    unsigned long int populacao1;
    float area1, pib1;
    int npt1;
    float densidade1, percapita1, superpoder1;

    printf("Carta 1:\n");
    printf("Sua carta é de qual estado brasileiro?: ");
    scanf("%s", estado1);
    printf("Qual o código da sua carta?: ");
    scanf("%s", carta1);
    printf("Qual o nome da sua cidade?: ");
    scanf("%s", cidade1);
    printf("Qual a população da cidade?: ");
    scanf("%lu", &populacao1);
    printf("Qual a área aproximada desta cidade?: ");
    scanf("%f", &area1);
    printf("Qual o PIB respectivo desta cidade?: ");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos há nesta cidade?: ");
    scanf("%d", &npt1);

    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + npt1 + percapita1 + (1.0 / densidade1);

    printf("\n------------------------------------------------\n");
    printf("Resumo da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", percapita1);
    printf("------------------------------------------------\n");

    // Carta 2
    char estado2[127], carta2[127], cidade2[127];
    unsigned long int populacao2;
    float area2, pib2;
    int npt2;
    float densidade2, percapita2, superpoder2;

    printf("\nCarta 2:\n");
    printf("Sua carta é de qual estado brasileiro?: ");
    scanf("%s", estado2);
    printf("Qual o código da sua carta?: ");
    scanf("%s", carta2);
    printf("Qual o nome da sua cidade?: ");
    scanf("%s", cidade2);
    printf("Qual a população da cidade?: ");
    scanf("%lu", &populacao2);
    printf("Qual a área aproximada desta cidade?: ");
    scanf("%f", &area2);
    printf("Qual o PIB respectivo desta cidade?: ");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos há nesta cidade?: ");
    scanf("%d", &npt2);

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + npt2 + percapita2 + (1.0 / densidade2);

    printf("\n------------------------------------------------\n");
    printf("Resumo da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", percapita2);
    printf("------------------------------------------------\n");

    // Comparações
    printf("\nComparação de Cartas:\n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu \n");
    } else {
        printf("População: Carta 2 venceu \n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu \n");
    } else {
        printf("Área: Carta 2 venceu \n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu \n");
    } else {
        printf("PIB: Carta 2 venceu \n");
    }

    if (npt1 > npt2) {
        printf("Pontos Turísticos: Carta 1 venceu \n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu \n");
    }

    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu \n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu \n");
    }

    if (percapita1 > percapita2) {
        printf("PIB per Capita: Carta 1 venceu \n");
    } else {
        printf("PIB per Capita: Carta 2 venceu \n");
    }

    if (superpoder1 > superpoder2) {
        printf("Super Poder: Carta 1 venceu \n");
    } else {
        printf("Super Poder: Carta 2 venceu \n");
    }

    return 0;
}
