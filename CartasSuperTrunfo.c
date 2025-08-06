#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Joaquim


int main() {

    char estado;
    char codigo[3];
    char nomeCidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Estado: ");
    scanf("%c%*c", &estado);

    printf("Codigo: ");
    scanf("%s%*s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\nINFORMAÇÔES DA CARTA\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
