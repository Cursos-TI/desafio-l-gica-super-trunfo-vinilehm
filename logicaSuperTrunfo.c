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

    // Exibir menu
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha (1 a 7): ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", cidade1, cidade2);
    switch (opcao) {
        case 1:
            printf("População: %lu x %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Área: %.2f x %.2f km²\n", area1, area2);
            if (area1 > area2) printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("PIB: R$ %.2f x R$ %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos: %d x %d\n", npt1, npt2);
            if (npt1 > npt2) printf("Vencedor: %s\n", cidade1);
            else if (npt2 > npt1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Demográfica: %.2f x %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 6:
            printf("PIB per capita: R$ %.2f x R$ %.2f\n", percapita1, percapita2);
            if (percapita1 > percapita2) printf("Vencedor: %s\n", cidade1);
            else if (percapita2 > percapita1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 7:
            printf("Super Poder: %.2f x %.2f\n", superpoder1, superpoder2);
            if (superpoder1 > superpoder2) printf("Vencedor: %s\n", cidade1);
            else if (superpoder2 > superpoder1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
