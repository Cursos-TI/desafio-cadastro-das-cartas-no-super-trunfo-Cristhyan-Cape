#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 Cadastro das Cartas

int main() {
    // Dados da Carta 1 (Rio de Janeiro)
    char codigo1[] = "A01";
    char nome_cidade1[] = "Rio de Janeiro";
    long long populacao1 = 6748000;
    float area1 = 1200.00;
    double pib1 = 350.00; // PIB em bilhões
    int pontos_turisticos1 = 50;
    char estado1 = 'A'; // Estado A para Carta 1

    // Dados da Carta 2 (Belo Horizonte)
    char codigo2[] = "B02";
    char nome_cidade2[] = "Belo Horizonte";
    long long populacao2 = 2521000;
    float area2 = 331.40;
    double pib2 = 90.00; // PIB em bilhões
    int pontos_turisticos2 = 30;
    char estado2 = 'B'; // Estado B para Carta 2

    // Exibição dos Dados das Cartas
    printf("Carta 1:\n\n");
    printf("Estado : %c\n", estado1);
    printf("Código : %s\n", codigo1);
    printf("Nome da Cidade : %s\n", nome_cidade1);
    printf("População : %lld\n", populacao1);
    printf("Área : %.2f km²\n", area1);
    printf("PIB : %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos : %d\n\n", pontos_turisticos1);

    printf("Carta 2:\n\n");
    printf("Estado : %c\n", estado2);
    printf("Código : %s\n", codigo2);
    printf("Nome da Cidade : %s\n", nome_cidade2);
    printf("População : %lld\n", populacao2);
    printf("Área : %.2f km²\n", area2);
    printf("PIB : %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos : %d\n", pontos_turisticos2);

    return 0;
}