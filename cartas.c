#include <stdio.h>

int main() {
    char Estado1[50], Cidade1[50], CodigoCarta1[50];
    int Populacao1, pontosturistico1;
    float Pib1, Area1;

    char Estado2[50], Cidade2[50], CodigoCarta2[50];
    int Populacao2, pontosturistico2;
    float Pib2, Area2;

    printf("=== Dados do Primeiro Local ===\n");
    printf("Digite seu Estado: \n");
    scanf("%49s", Estado1);

    printf("Digite a Cidade: \n");
    scanf("%49s", Cidade1);

    printf("Digite o codigo da Carta: \n");
    scanf("%49s", CodigoCarta1);

    printf("Digite o numero da Populacao: \n");
    scanf("%d", &Populacao1);

    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &pontosturistico1);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib1);

    printf("Digite a Area: \n");
    scanf("%f", &Area1);

    printf("\n=== Dados do Segundo Local ===\n");
    printf("Digite seu Estado: \n");
    scanf("%49s", Estado2);

    printf("Digite a Cidade: \n");
    scanf("%49s", Cidade2);

    printf("Digite o codigo da Carta: \n");
    scanf("%49s", CodigoCarta2);

    printf("Digite o numero da Populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &pontosturistico2);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib2);

    printf("Digite a Area: \n");
    scanf("%f", &Area2);

    printf("\n=== Resultados ===\n");
    printf("Primeiro Local:\n");
    printf("Estado: %s\n - Cidade: %s\n - Carta: %s\n", Estado1, Cidade1, CodigoCarta1);
    printf("Populacao: %d\n - Pontos Turisticos: %d\n", Populacao1, pontosturistico1);
    printf("PIB: %.2f\n - Area: %.2f\n", Pib1, Area1);

    printf("\nSegundo Local:\n");
    printf("Estado: %s\n - Cidade: %s\n - Carta: %s\n", Estado2, Cidade2, CodigoCarta2);
    printf("Populacao: %d\n - Pontos Turisticos: %d\n", Populacao2, pontosturistico2);
    printf("PIB: %.2f\n - Area: %.2f\n", Pib2, Area2);

    return 0;
    
}



#include <stdio.h>

int main() {
    char estado1[3];
    int codigo_carta1;
    char nome_cidade1[50];
    long int populacao1;
    float area1;
    double pib1;
    int pontos_turisticos1;

    float densidade_populacional1;
    float pib_per_capita1;

    char estado2[3];
    int codigo_carta2;
    char nome_cidade2[50];
    long int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;

    float densidade_populacional2;
    float pib_per_capita2;

    printf("--- Leitura dos Dados da Primeira Carta ---\n");

    printf("Digite o estado (UF, ex: SP): ");
    scanf("%2s", estado1);

    printf("Digite o código da carta: ");
    scanf("%d", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    while (getchar() != '\n');
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);

    for (int i = 0; nome_cidade1[i] != '\0'; i++) {
        if (nome_cidade1[i] == '\n') {
            nome_cidade1[i] = '\0';
            break;
        }
    }

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib1); // %lf para double

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    if (area1 > 0) { // Evitar divisão por zero
        densidade_populacional1 = (float)populacao1 / area1;
    } else {
        densidade_populacional1 = 0.0f;
    }

    if (populacao1 > 0) { // Evitar divisão por zero
        pib_per_capita1 = (float)pib1 / populacao1;
    } else {
        pib_per_capita1 = 0.0f;
    }


    printf("\n--- Leitura dos Dados da Segunda Carta ---\n");

    printf("Digite o estado (UF, ex: RJ): ");
    scanf("%2s", estado2);

    printf("Digite o código da carta: ");
    scanf("%d", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    while (getchar() != '\n');
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    for (int i = 0; nome_cidade2[i] != '\0'; i++) {
        if (nome_cidade2[i] == '\n') {
            nome_cidade2[i] = '\0';
            break;
        }
    }

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    if (area2 > 0) {
        densidade_populacional2 = (float)populacao2 / area2;
    } else {
        densidade_populacional2 = 0.0f;
    }

    if (populacao2 > 0) {
        pib_per_capita2 = (float)pib2 / populacao2;
    } else {
        pib_per_capita2 = 0.0f;
    }

    printf("\n--- Informações da Primeira Carta ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %d\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %ld habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("\n--- Informações da Segunda Carta ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %d\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %ld habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}


#include <stdio.h>

int main() {
    char estado1[3];
    int codigo_carta1;
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    double pib1;
    int pontos_turisticos1;

    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2[3];
    int codigo_carta2;
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;

    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    printf("--- Leitura dos Dados da Primeira Carta ---\n");

    printf("Digite o estado (UF, ex: SP): ");
    scanf("%2s", estado1);

    printf("Digite o código da carta: ");
    scanf("%d", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    while (getchar() != '\n');
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    for (int i = 0; nome_cidade1[i] != '\0'; i++) { // Remove o '\n'
        if (nome_cidade1[i] == '\n') {
            nome_cidade1[i] = '\0';
            break;
        }
    }

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- Cálculos para a Primeira Carta ---
    if (area1 > 0) {
        densidade_populacional1 = (float)populacao1 / area1;
    } else {
        densidade_populacional1 = 0.0f;
    }

    if (populacao1 > 0) {
        pib_per_capita1 = (float)pib1 / populacao1;
    } else {
        pib_per_capita1 = 0.0f;
    }

    float inverso_densidade1 = (densidade_populacional1 > 0) ? (1.0f / densidade_populacional1) : 0.0f;
    super_poder1 = (float)populacao1 + area1 + (float)pib1 + pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;


    printf("\n--- Leitura dos Dados da Segunda Carta ---\n");

    printf("Digite o estado (UF, ex: RJ): ");
    scanf("%2s", estado2);

    printf("Digite o código da carta: ");
    scanf("%d", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    while (getchar() != '\n');
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    for (int i = 0; nome_cidade2[i] != '\0'; i++) { // Remove o '\n'
        if (nome_cidade2[i] == '\n') {
            nome_cidade2[i] = '\0';
            break;
        }
    }

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    if (area2 > 0) {
        densidade_populacional2 = (float)populacao2 / area2;
    } else {
        densidade_populacional2 = 0.0f;
    }

    if (populacao2 > 0) {
        pib_per_capita2 = (float)pib2 / populacao2;
    } else {
        pib_per_capita2 = 0.0f;
    }

    float inverso_densidade2 = (densidade_populacional2 > 0) ? (1.0f / densidade_populacional2) : 0.0f;
    super_poder2 = (float)populacao2 + area2 + (float)pib2 + pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;

    // --- Exibição das Informações Completas ---
    printf("\n--- Informações da Primeira Carta ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %d\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- Informações da Segunda Carta ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %d\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n--- Comparação das Cartas ---\n");

    printf("População: Carta 1 vence = %d\n", populacao1 > populacao2);

    printf("Área: Carta 1 vence = %d\n", area1 > area2);

    printf("PIB: Carta 1 vence = %d\n", pib1 > pib2);

    printf("Pontos Turísticos: Carta 1 vence = %d\n", pontos_turisticos1 > pontos_turisticos2);

    if (densidade_populacional1 == 0.0f && densidade_populacional2 == 0.0f) {
        printf("Densidade Populacional: Carta 1 vence = %d\n", 0);
    } else if (densidade_populacional1 == 0.0f) {
        printf("Densidade Populacional: Carta 1 vence = %d\n", 1);
    } else if (densidade_populacional2 == 0.0f) {
        printf("Densidade Populacional: Carta 1 vence = %d\n", 0);
    } else {
        printf("Densidade Populacional: Carta 1 vence = %d\n", densidade_populacional1 < densidade_populacional2);
    }


    // PIB per Capita
    printf("PIB per Capita: Carta 1 vence = %d\n", pib_per_capita1 > pib_per_capita2);

    // Super Poder
    printf("Super Poder: Carta 1 vence = %d\n", super_poder1 > super_poder2);

    return 0;
}
