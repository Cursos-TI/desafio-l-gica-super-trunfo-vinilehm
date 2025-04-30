#include <stdio.h>

int main() {
    // Dados Carta 1
    char cidade1[127], cidade2[127];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int npt1, npt2;
    float densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2;

    // Entrada carta 1
    printf("Carta 1 - Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &npt1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + npt1 + percapita1 + (1.0 / densidade1);

    // Entrada carta 2
    printf("\nCarta 2 - Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &npt2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + npt2 + percapita2 + (1.0 / densidade2);

    // Menu para escolher atributos
    int atr1, atr2;
    float v1_c1 = 0, v1_c2 = 0, v2_c1 = 0, v2_c2 = 0;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade (MENOR vence)\n6 - PIB per capita\n7 - Super Poder\n");
    scanf("%d", &atr1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atr2);
    } while (atr2 == atr1 || atr2 < 1 || atr2 > 7);

    // Atribuir valores (carta 1 e 2)
    switch (atr1) {
        case 1: v1_c1 = populacao1; v1_c2 = populacao2; break;
        case 2: v1_c1 = area1; v1_c2 = area2; break;
        case 3: v1_c1 = pib1; v1_c2 = pib2; break;
        case 4: v1_c1 = npt1; v1_c2 = npt2; break;
        case 5: v1_c1 = densidade1; v1_c2 = densidade2; break;
        case 6: v1_c1 = percapita1; v1_c2 = percapita2; break;
        case 7: v1_c1 = superpoder1; v1_c2 = superpoder2; break;
    }

    switch (atr2) {
        case 1: v2_c1 = populacao1; v2_c2 = populacao2; break;
        case 2: v2_c1 = area1; v2_c2 = area2; break;
        case 3: v2_c1 = pib1; v2_c2 = pib2; break;
        case 4: v2_c1 = npt1; v2_c2 = npt2; break;
        case 5: v2_c1 = densidade1; v2_c2 = densidade2; break;
        case 6: v2_c1 = percapita1; v2_c2 = percapita2; break;
        case 7: v2_c1 = superpoder1; v2_c2 = superpoder2; break;
    }
//invertedor de valor 
float soma1 = (atr1 == 5 ? -v1_c1 : v1_c1) + (atr2 == 5 ? -v2_c1 : v2_c1);
float soma2 = (atr1 == 5 ? -v1_c2 : v1_c2) + (atr2 == 5 ? -v2_c2 : v2_c2);

    // Mostrar resultados
    printf("\n%s x %s\n", cidade1, cidade2);
    printf("Soma dos dois atributos: %.2f x %.2f\n", soma1, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", cidade1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}
