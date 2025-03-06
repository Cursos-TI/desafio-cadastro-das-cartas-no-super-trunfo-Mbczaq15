#include <stdio.h> // Biblioteca para entrada e saída

int main() {
    // Declaração das variáveis para a primeira carta (Fortaleza)
    char estado1[3] = "CE"; // Estado Ceará
    char codigo1[5] = "C01"; // Código da carta de Fortaleza
    char cidade1[50] = "Fortaleza"; // Nome da cidade
    int populacao1 = 2700000; // População aproximada
    int pontos1 = 20; // Estimativa de pontos turísticos
    float area1 = 313.0; // Área em km²
    float pib1 = 53.0; // PIB em bilhões de reais

    // Declaração das variáveis para a segunda carta (Caucaia)
    char estado2[3] = "CE"; // Estado Ceará
    char codigo2[5] = "C02"; // Código da carta de Caucaia
    char cidade2[50] = "Caucaia"; // Nome da cidade
    int populacao2 = 350000; // População aproximada
    int pontos2 = 10; // Estimativa de pontos turísticos
    float area2 = 612.0; // Área em km²
    float pib2 = 6.0; // PIB em bilhões de reais

    // Exibição dos dados da primeira carta (Fortaleza)
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1); // Exibe o estado
    printf("Código: %s\n", codigo1); // Exibe o código
    printf("Nome da Cidade: %s\n", cidade1); // Exibe o nome da cidade
    printf("População: %d\n", populacao1); // Exibe a população
    printf("Área: %.2f km²\n", area1); // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontos1); // Exibe os pontos turísticos

    // Exibição dos dados da segunda carta (Caucaia)
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2); // Exibe o estado
    printf("Código: %s\n", codigo2); // Exibe o código
    printf("Nome da Cidade: %s\n", cidade2); // Exibe o nome da cidade
    printf("População: %d\n", populacao2); // Exibe a população
    printf("Área: %.2f km²\n", area2); // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontos2); // Exibe os pontos turísticos

    return 0; // Finaliza o programa
}