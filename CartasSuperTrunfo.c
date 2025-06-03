Criei;
#include <stdio.h>

struct Carta {
    int populacao;
    float area;
    float pib; // em bilhões
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da primeira carta
    printf("Cadastre os dados da primeira carta:\n");
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nCadastre os dados da segunda carta:\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    pibPerCapita1 = (carta1.pib * 1e9) / carta1.populacao; // PIB em reais (conversão de bilhões)
    pibPerCapita2 = (carta2.pib * 1e9) / carta2.populacao;

    // Exibição dos dados cadastrados com os novos atributos
    printf("\nDados cadastrados:\n");

    printf("\nCarta 1:\n");
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}

