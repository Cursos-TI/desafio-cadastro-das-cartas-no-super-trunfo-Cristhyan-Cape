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
    
    //dados da primeira cidade (rio de janeiro)
    int Codigo1 =1;
    char Nome1[] = "Rio de Janeiro";
    long long Populacao1 = 6748000;
    float Area1 = 1200.00;
    double Pib1 = 35000000000.00;
    int Pontos_Turisticos1 = 50;

    //dados da segunda cidade (belo horizonte)
    int Codigo2 = 2;
    char Name2[] = "Belo Horizonte";
    long long Populacao2 = 2521000;
    float Area2 = 331.40;
    double Pib2 = 90000000000.00;
    int Pontos_Turisticos2 = 30;
    
   
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //dados do Rio de Janeiro

    
    printf("Cidade 1:\n");
    printf("Codigo: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %lld\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("Pib: R$ %.2lf\n", pib1);
    printf("Numero de Pontos Turiticos: %d\n\n", pontos_turisticos1);

    //Dados de Belo Horizonte

    printf("Cidade 2:\n");
    printf("Codigo: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %lld\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("Pib: R$ %.2lf\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
