#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#define NUM_ESTADOS 5

// Estrutura para armazenar informações de estado e cidades
typedef struct {
    char estado[20];
    char cidades[3][30];
} EstadoCidade;

EstadoCidade estadosCidades[NUM_ESTADOS] = {
    {"SP", {"São Paulo", "Campinas", "Santos"}},
    {"RJ", {"Rio de Janeiro", "Niterói", "Petrópolis"}},
    {"PE", {"Recife", "Olinda", "Caruaru"}},
    {"BA", {"Salvador", "Feira de Santana", "Ilhéus"}},
    {"MG", {"Belo Horizonte", "Ouro Preto", "Juiz de Fora"}}
};

// Função para gerar carta aleatória
void gerarCarta(char *estado, char *cidade, int *populacao, float *area, float *pib, int *pontosTuristicos) {
    int indexEstado = rand() % NUM_ESTADOS;
    int indexCidade = rand() % 3;

    // Preencher dados
    sprintf(estado, "%s", estadosCidades[indexEstado].estado);
    sprintf(cidade, "%s", estadosCidades[indexEstado].cidades[indexCidade]);
    *populacao = (rand() % (12000000 - 100000)) + 100000; // População entre 100 mil e 12 milhões
    *area = (rand() % 3000) + 50;                        // Área entre 50 e 3000 km²
    *pib = (rand() % 500) + 10;                          // PIB entre 10 e 500 bi
    *pontosTuristicos = rand() % 21;                     // Pontos entre 0 e 20
}

int main() {
    srand(time(NULL));

    char estadoPlayer[20], cidadePlayer[30];
    char estadoBot[20], cidadeBot[30];
    int populacaoPlayer, populacaoBot;
    float areaPlayer, areaBot, pibPlayer, pibBot;
    int pontosTuristicosPlayer, pontosTuristicosBot;

    int escolhaAtributo;
    char tipoComparacao;
    int resultado;

    // Gerar carta aleatória para o BOT
    gerarCarta(estadoBot, cidadeBot, &populacaoBot, &areaBot, &pibBot, &pontosTuristicosBot);

    // Coletar dados da carta do jogador
    printf("Cadastro da sua carta:\n");
    gerarCarta(estadoPlayer, cidadePlayer, &populacaoPlayer, &areaPlayer, &pibPlayer, &pontosTuristicosPlayer);

    printf("Sua carta gerada automaticamente:\n");
    printf("Estado: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\n",
           estadoPlayer, cidadePlayer, populacaoPlayer, areaPlayer, pibPlayer, pontosTuristicosPlayer);

    // Menu de escolha
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n");
    scanf("%d", &escolhaAtributo);

    printf("Escolha o tipo de comparacao (M - Maior, E - Menor, I - Igual): ");
    scanf(" %c", &tipoComparacao);

    // Comparar com switch
    switch (escolhaAtributo) {
        case 1: // População
            printf("\nComparando População: %d vs %d\n", populacaoPlayer, populacaoBot);
            switch (tipoComparacao) {
                case 'M':
                case 'm':
                    printf("Você escolheu Maior\n");
                    resultado = (populacaoPlayer > populacaoBot);
                    break;
                case 'E':
                case 'e':
                    printf("Você escolheu Menor\n");
                    resultado = (populacaoPlayer < populacaoBot);
                    break;
                case 'I':
                case 'i':
                    printf("Você escolheu Igual\n");
                    resultado = (populacaoPlayer == populacaoBot);
                    break;
                default:
                    printf("Opção inválida para comparação!\n");
                    return 0;
            }
            break;
        case 2: // Área
            printf("\nComparando Área: %.2f km² vs %.2f km²\n", areaPlayer, areaBot);
            switch (tipoComparacao) {
                case 'M':
                case 'm':
                    printf("Você escolheu Maior\n");
                    resultado = (areaPlayer > areaBot);
                    break;
                case 'E':
                case 'e':
                    printf("Você escolheu Menor\n");
                    resultado = (areaPlayer < areaBot);
                    break;
                case 'I':
                case 'i':
                    printf("Você escolheu Igual\n");
                    resultado = (areaPlayer == areaBot);
                    break;
                default:
                    printf("Opção inválida para comparação!\n");
                    return 0;
            }
            break;
        case 3: // PIB
            printf("\nComparando PIB: %.2f bi vs %.2f bi\n", pibPlayer, pibBot);
            switch (tipoComparacao) {
                case 'M':
                case 'm':
                    printf("Você escolheu Maior\n");
                    resultado = (pibPlayer > pibBot);
                    break;
                case 'E':
                case 'e':
                    printf("Você escolheu Menor\n");
                    resultado = (pibPlayer < pibBot);
                    break;
                case 'I':
                case 'i':
                    printf("Você escolheu Igual\n");
                    resultado = (pibPlayer == pibBot);
                    break;
                default:
                    printf("Opção inválida para comparação!\n");
                    return 0;
            }
            break;
        case 4: // Pontos Turísticos
            printf("\nComparando Pontos Turísticos: %d vs %d\n", pontosTuristicosPlayer, pontosTuristicosBot);
            switch (tipoComparacao) {
                case 'M':
                case 'm':
                    printf("Você escolheu Maior\n");
                    resultado = (pontosTuristicosPlayer > pontosTuristicosBot);
                    break;
                case 'E':
                case 'e':
                    printf("Você escolheu Menor\n");
                    resultado = (pontosTuristicosPlayer < pontosTuristicosBot);
                    break;
                case 'I':
                case 'i':
                    printf("Você escolheu Igual\n");
                    resultado = (pontosTuristicosPlayer == pontosTuristicosBot);
                    break;
                default:
                    printf("Opção inválida para comparação!\n");
                    return 0;
            }
            break;
        default:
            printf("Opção de atributo inválida!\n");
            return 0;
    }

    // Mostrar cartas no final
    printf("\n--- Suas Cartas ---\n");
    printf("Estado: %s\n", estadoPlayer);
    printf("Cidade: %s\n", cidadePlayer);
    printf("População: %d habitantes\n", populacaoPlayer);
    printf("Área: %.2f km²\n", areaPlayer);
    printf("PIB: %.2f bilhões de reais\n", pibPlayer);
    printf("Pontos Turísticos: %d\n", pontosTuristicosPlayer);

    printf("\n--- Carta do Computador ---\n");
    printf("Estado: %s\n", estadoBot);
    printf("Cidade: %s\n", cidadeBot);
    printf("População: %d habitantes\n", populacaoBot);
    printf("Área: %.2f km²\n", areaBot);
    printf("PIB: %.2f bilhões de reais\n", pibBot);
    printf("Pontos Turísticos: %d\n", pontosTuristicosBot);

    // Resultado final
    if (resultado) {
        printf("\nVocê ganhou esta rodada!\n");
    } else {
        printf("\nVocê perdeu esta rodada!\n");
    }

    return 0;
}