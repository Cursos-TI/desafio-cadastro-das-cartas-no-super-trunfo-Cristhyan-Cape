#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
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
    
   
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
 // Exibição dos Dados das Cartas

    // Dados do Rio de Janeiro
    printf("Carta 1:\n\n");
    printf("Estado : %c\n", estado1);
    printf("Código : %s\n", codigo1);
    printf("Nome da Cidade : %s\n", nome_cidade1);
    printf("População : %lld\n", populacao1);
    printf("Área : %.2f km²\n", area1);
    printf("PIB : %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos : %d\n\n", pontos_turisticos1);

    //Dados de Belo Horizonte

    
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
