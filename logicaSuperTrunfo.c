#include <stdio.h>

// Programa: Comparação de cartas - Super Trunfo de Cidades
// Objetivo: Comparar dois atributos entre duas cartas e exibir a vencedora

int main() {
    // Declaração das variáveis para Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Declaração das variáveis para Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // ===== Entrada dos dados da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Entrada dos dados da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculos =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // ===== COMPARAÇÃO =====
    // Escolha o atributo a ser comparado (comente/descomente conforme o teste)

    // Atributo: POPULAÇÃO
    printf("\nComparação de cartas (Atributo: População)\n");
    printf("Carta 1 - %s (%c): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    /*
    // Atributo: ÁREA
    printf("\nComparação de cartas (Atributo: Área)\n");
    printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    */

    /*
    // Atributo: PIB
    printf("\nComparação de cartas (Atributo: PIB)\n");
    printf("Carta 1 - %s: %.2f bilhões\n", nomeCidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhões\n", nomeCidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    */

    /*
    // Atributo: Densidade Populacional (vencedor = menor valor)
    printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    */

    /*
    // Atributo: PIB per capita
    printf("\nComparação de cartas (Atributo: PIB per capita)\n");
    printf("Carta 1 - %s: %.6f bilhões por habitante\n", nomeCidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.6f bilhões por habitante\n", nomeCidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    */

    return 0;
}