#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidadeCarta1[50], nomeCidadeCarta2[50];
    int populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float pibCarta1, pibCarta2;
    int pontosTuristicosCarta1, pontosTuristicosCarta2;

    // Declarando variáveis para armazenar os pontos de cada carta para a comparação
    int pontoscarta1 = 0, pontoscarta2 = 0;

    // Cadastro das Cartas:
    // Coletando dados para a primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite uma letra de 'A' a 'H' para o estado: ");
    scanf(" %c", &estadoCarta1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigoCarta1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf(" %s", nomeCidadeCarta1);

    printf("Digite a população: ");
    scanf("%d", &populacaoCarta1);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pibCarta1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCarta1);

    // Coletando dados para a segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite uma letra de 'A' a 'H' para o estado: ");
    scanf(" %c", &estadoCarta2);

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigoCarta2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf(" %s", nomeCidadeCarta2);

    printf("Digite a população: ");
    scanf("%d", &populacaoCarta2);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaCarta2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pibCarta2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCarta2);

    // Exibição dos Dados das Cartas:
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d habitantes\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaCarta1);
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCarta1);

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d habitantes\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCarta2);


        // comparação de cartas

    // População/Área
    if (populacaoCarta1/areaCarta1 < populacaoCarta2/areaCarta2) {
        pontoscarta1++;
        printf("\n\nA primeira carta tem menor densidade demográfica!\n");
    } else if (populacaoCarta1/areaCarta1 > populacaoCarta2/areaCarta2) {
        pontoscarta2++;
        printf("\n\nA segunda carta tem menor densidade demográfica!\n");
    } else {
        printf("\n\nAs duas cartas têm a mesma densidade demográfica!\n");
    }

    // PIB/População
    if (pibCarta1/populacaoCarta1 > pibCarta2/populacaoCarta2) {
        pontoscarta1++;
        printf("A primeira carta tem maior PIB per capita!\n");
    } else if (pibCarta1/populacaoCarta1 < pibCarta2/populacaoCarta2) {
        pontoscarta2++;
        printf("A segunda carta tem maior PIB per capita!\n");
    } else {
        printf("As duas cartas têm o mesmo PIB per capita!\n");

    //pontos turísticos
    } if (pontosTuristicosCarta1 > pontosTuristicosCarta2) {
        pontoscarta1++;
        printf("A primeira carta tem mais pontos turísticos!\n");
    } else if (pontosTuristicosCarta1 < pontosTuristicosCarta2) {
        pontoscarta2++;
        printf("A segunda carta tem mais pontos turísticos!\n");
    } else {
        printf("As duas cartas têm o mesmo número de pontos turísticos!\n");
    }
    // Resultado final
    if (pontoscarta1 > pontoscarta2) {
        printf("\n\nA primeira carta é a melhor opção!\n");
    } else if (pontoscarta2 > pontoscarta1) {
        printf("\nA segunda carta é a melhor opção!\n");
    } else {
        printf("\nAs duas cartas são iguais!\n");
    }

    return 0;
    
}