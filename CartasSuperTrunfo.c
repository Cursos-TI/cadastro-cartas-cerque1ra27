#include <stdio.h>

int main() {

    // - VARIÁVEIS CARTA 1 -
    char estado1[30];
    char codigo1[10];
    char nome1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidadep1;
    float pibpercapita1;
    float superpoder1;

    // - VARIÁVEIS CARTA 2 -
    char estado2[30];
    char codigo2[10];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidadep2;
    float pibpercapita2;
    float superpoder2;

    // - INÍCIO CARTA 1 -
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("CARTA 1 INICIADA COM SUCESSO!\n\n");

    // - ENTRADA E SAÍDA CARTA 1 -
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1); // Leitura de palavras compostas
    printf("Estado digitado: %s\n", estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("O codigo digitado foi: %s\n", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("O nome da cidade digitada foi: %s\n", nome1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("A populacao digitada foi: %lu\n", populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("A area digitada foi: %.2f\n", area1);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib1);
    printf("O valor do PIB digitado foi: %.2f\n", pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);
    printf("O numero de pontos digitado foi: %d\n\n", pontos1);
    printf("CARTA 1 FINALIZADA COM SUCESSO!\n\n");

    densidadep1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

    // - VARIÁVEL INÍCIO -
    char iniciar2[10];

    // - INÍCIO CARTA 2 -
    printf("Digite OK para iniciar a CARTA 2: ");
    scanf("%s", iniciar2);
    printf("\nCARTA 2 INICIADA COM SUCESSO!\n\n");

    // - ENTRADA E SAÍDA CARTA 2 -
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2); // Leitura de palavras compostas
    printf("Estado digitado: %s\n", estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("O codigo digitado foi: %s\n", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("O nome da cidade digitada foi: %s\n", nome2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("A populacao digitada foi: %lu\n", populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("A area digitada foi: %.2f\n", area2);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib2);
    printf("O valor do PIB digitado foi: %.2f\n", pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("O numero de pontos digitado foi: %d\n\n", pontos2);
    printf("CARTA 2 FINALIZADA COM SUCESSO!\n\n");

    densidadep2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;

    // - VARIÁVEL RESULTADO -
    char resultado[10];

    // - RESULTADO -
    printf("Digite OK para obter o resultado das cartas: ");
    scanf("%s", resultado);

    // - SAÍDA DE DADOS / RESULTADO -
    printf("\n\nCARTA 1!\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Valor do PIB: %.2f\n", pib1);
    printf("Numero de pontos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidadep1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    // Cálculo carta 1
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1 / densidadep1);
    printf("Superpoder: %.2f\n\n", superpoder1);

    printf("CARTA 2!\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Valor do PIB: %.2f\n", pib2);
    printf("Numero de pontos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidadep2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // Cálculo carta 2
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1 / densidadep2);
    printf("Superpoder: %.2f\n\n", superpoder2);

    // SAÍDA DE DADOS / COMPARAÇÃO
    printf("Finalizado! Confira a comparacao das cartas:\n\n");

    // Populacao
    printf("Carta 1 = %s | Populacao: %lu\n", estado1, populacao1);
    printf("Carta 2 = %s | Populacao: %lu\n", estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("== Carta 1 venceu! ==\n\n");
    } else if (populacao2 > populacao1) {
        printf("== Carta 2 venceu! ==\n\n");
    } else {
        printf("== Empate! ==\n\n");
    }

    // Area
    printf("Carta 1 = Area: %.2f\n", area1);
    printf("Carta 2 = Area: %.2f\n", area2);
    if (area1 > area2) {
        printf("== Carta 1 venceu! ==\n\n");
    } else if (area2 > area1) {
        printf("== Carta 2 venceu! ==\n\n");
    } else {
        printf("== Empate! ==\n\n");
    }

    // PIB
    printf("Carta 1 = PIB: %.2f\n", pib1);
    printf("Carta 2 = PIB: %.2f\n", pib2);
    if (pib1 > pib2) {
        printf("== Carta 1 venceu! ==\n\n");
    } else if (pib2 > pib1) {
        printf("== Carta 2 venceu! ==\n\n");
    } else {
        printf("== Empate! ==\n\n");
    }

    // Pontos turisticos
    printf("Carta 1 = Pontos turisticos: %d\n", pontos1);
    printf("Carta 2 = Pontos turisticos: %d\n", pontos2);
    if (pontos1 > pontos2) {
        printf("== Carta 1 venceu! ==\n\n");
    } else if (pontos2 > pontos1) {
        printf("== Carta 2 venceu! ==\n\n");
    } else {
        printf("== Empate! ==\n\n");
    }

    // Densidade populacional (MENOR vence)
    printf("Carta 1 = Densidade: %.2f\n", densidadep1);
    printf("Carta 2 = Densidade: %.2f\n", densidadep2);
    if (densidadep1 < densidadep2) {
        printf("== Carta 1 venceu! ==\n\n");
    } else if (densidadep2 < densidadep1) {
        printf("== Carta 2 venceu! ==\n\n");
    } else {
        printf("== Empate! ==\n\n");
    }

    // PIB per capita
    printf("Carta 1 = PIB per capita: %.2f\n", pibpercapita1);
    printf("Carta 2 = PIB per capita: %.2f\n", pibpercapita2);
    if (pibpercapita1 > pibpercapita2) {
        printf("== Carta 1 venceu! ==\n\n");
    } else if (pibpercapita2 > pibpercapita1) {
        printf("== Carta 2 venceu! ==\n\n");
    } else {
        printf("== Empate! ==\n\n");
    }

    // Superpoder
    printf("Superpoder Carta 1 = %.2f\n", superpoder1);
    printf("Superpoder Carta 2 = %.2f\n", superpoder2);
    if (superpoder1 > superpoder2) {
        printf("== Carta 1 venceu! ==\n\n");
    } else if (superpoder2 > superpoder1) {
        printf("== Carta 2 venceu! ==\n\n");
    } else {
        printf("== Empate! ==\n\n");
    }

    return 0;
}