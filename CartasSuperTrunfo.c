Criei;
#include <stdio.h>

struct Carta {
    unsigned long int populacao;
    float area;
    float pib; // em bilhões
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro da primeira carta
    printf("Cadastre os dados da primeira carta:\n");
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nCadastre os dados da segunda carta:\n");
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo da densidade populacional
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    // Cálculo do PIB per capita
    pibPerCapita1 = (carta1.pib * 1e9) / carta1.populacao;
    pibPerCapita2 = (carta2.pib * 1e9) / carta2.populacao;

    // Cálculo do Super Poder
    superPoder1 = (float)carta1.populacao + carta1.area + (carta1.pib * 1e9) +
                  carta1.pontos_turisticos + pibPerCapita1 + (1.0f / densidade1);
    
    superPoder2 = (float)carta2.populacao + carta2.area + (carta2.pib * 1e9) +
                  carta2.pontos_turisticos + pibPerCapita2 + (1.0f / densidade2);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nResultados das Comparações:\n");
    printf("População: %d\n", carta1.populacao > carta2.populacao);
    printf("Área: %d\n", carta1.area > carta2.area);
    printf("PIB: %d\n", carta1.pib > carta2.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos > carta2.pontos_turisticos);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
