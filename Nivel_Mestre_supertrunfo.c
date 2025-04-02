#include <stdio.h>
#include <math.h>


// Desafio Super Trunfo - Países
// Tema 2: Super Poder e Comparação de Cartas

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char codigo[4];
    char nome_cidade[50];
    long long populacao;
    float area;
    double pib;
    int pontos_turisticos;
    char estado;
    double densidade_populacional;
    double pib_per_capita;
    int super_poder;
} Carta;

// Função para calcular a densidade populacional
double calcularDensidadePopulacional(long long populacao, float area) {
    return (double)populacao / area;
}

// Função para calcular o PIB per capita
double calcularPIBPerCapita(double pib, long long populacao) {
    return (pib * 1000000000.0) / populacao; // PIB em reais
}

// Função para calcular o Super Poder da carta
int calcularSuperPoder(Carta carta) {
    return (int)(carta.populacao / 100000) + (int)(carta.area / 100) + (int)(carta.pib * 10) +
           carta.pontos_turisticos + (int)carta.densidade_populacional + (int)(carta.pib_per_capita / 1000);
}

// Função para comparar duas cartas
void compararCartas(Carta carta1, Carta carta2) {
    printf("\nComparação das Cartas:\n");

    // Comparação atributo por atributo
    if (carta1.populacao > carta2.populacao) {
        printf("%s tem mais população que %s.\n", carta1.nome_cidade, carta2.nome_cidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("%s tem mais população que %s.\n", carta2.nome_cidade, carta1.nome_cidade);
    } else {
        printf("%s e %s têm a mesma população.\n", carta1.nome_cidade, carta2.nome_cidade);
    }

    if (carta1.area > carta2.area) {
        printf("%s tem maior área que %s.\n", carta1.nome_cidade, carta2.nome_cidade);
    } else if (carta1.area < carta2.area) {
        printf("%s tem maior área que %s.\n", carta2.nome_cidade, carta1.nome_cidade);
    } else {
        printf("%s e %s têm a mesma área.\n", carta1.nome_cidade, carta2.nome_cidade);
    }

    if (carta1.pib > carta2.pib) {
        printf("%s tem maior PIB que %s.\n", carta1.nome_cidade, carta2.nome_cidade);
    } else if (carta1.pib < carta2.pib) {
        printf("%s tem maior PIB que %s.\n", carta2.nome_cidade, carta1.nome_cidade);
    } else {
        printf("%s e %s têm o mesmo PIB.\n", carta1.nome_cidade, carta2.nome_cidade);
    }

    if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
        printf("%s tem mais pontos turísticos que %s.\n", carta1.nome_cidade, carta2.nome_cidade);
    } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
        printf("%s tem mais pontos turísticos que %s.\n", carta2.nome_cidade, carta1.nome_cidade);
    } else {
        printf("%s e %s têm o mesmo número de pontos turísticos.\n", carta1.nome_cidade, carta2.nome_cidade);
    }

    // Regra específica para densidade populacional
    if (carta1.densidade_populacional < carta2.densidade_populacional) {
        printf("%s tem maior densidade populacional que %s.\n", carta1.nome_cidade, carta2.nome_cidade);
    } else if (carta1.densidade_populacional > carta2.densidade_populacional) {
        printf("%s tem maior densidade populacional que %s.\n", carta2.nome_cidade, carta1.nome_cidade);
    } else {
        printf("%s e %s têm a mesma densidade populacional.\n", carta1.nome_cidade, carta2.nome_cidade);
    }

    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("%s tem maior PIB per capita que %s.\n", carta1.nome_cidade, carta2.nome_cidade);
    } else if (carta1.pib_per_capita < carta2.pib_per_capita) {
        printf("%s tem maior PIB per capita que %s.\n", carta2.nome_cidade, carta1.nome_cidade);
    } else {
        printf("%s e %s têm o mesmo PIB per capita.\n", carta1.nome_cidade, carta2.nome_cidade);
    }

    if (carta1.super_poder > carta2.super_poder) {
        printf("%s tem maior Super Poder (%d) que %s (%d).\n", carta1.nome_cidade, carta1.super_poder, carta2.nome_cidade, carta2.super_poder);
    } else if (carta1.super_poder < carta2.super_poder) {
        printf("%s tem maior Super Poder (%d) que %s (%d).\n", carta2.nome_cidade, carta2.super_poder, carta1.nome_cidade, carta1.super_poder);
    } else {
        printf("%s e %s têm o mesmo Super Poder (%d).\n", carta1.nome_cidade, carta2.nome_cidade, carta1.super_poder);
    }

    // Determina o vencedor com base no Super Poder
    if (carta1.super_poder > carta2.super_poder) {
        printf("\n%s venceu!\n", carta1.nome_cidade);
    } else if (carta2.super_poder > carta1.super_poder) {
        printf("\n%s venceu!\n", carta2.nome_cidade);
    } else {
        printf("\nEmpate!\n");
    }
}

int main() {
    // Dados da Carta 1 (Rio de Janeiro)
    Carta carta1 = {"A01", "Rio de Janeiro", 6748000, 1200.00, 350.00, 50, 'A'};

    // Dados da Carta 2 (Belo Horizonte)
    Carta carta2 = {"B02", "Belo Horizonte", 2521000, 331.40, 90.00, 30, 'B'};

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidade_populacional = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcularPIBPerCapita(carta1.pib, carta1.populacao);

    carta2.densidade_populacional = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcularPIBPerCapita(carta2.pib, carta2.populacao);

    // Cálculo do Super Poder
    carta1.super_poder = calcularSuperPoder(carta1);
    carta2.super_poder = calcularSuperPoder(carta2);

    // Exibição dos dados das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %lld\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f reais\n", carta1.pib_per_capita);
    printf("Super Poder: %d\n\n", carta1.super_poder);

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %lld\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f reais\n", carta2.pib_per_capita);
    printf("Super Poder: %d\n", carta2.super_poder);

    // Comparação das cartas
    compararCartas(carta1, carta2);

    return 0;
}