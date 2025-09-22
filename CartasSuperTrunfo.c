### Sistema de Cadastro de Cartas Super Trunfo de Países




#include <stdio.h>
#include <string.h>

// Definição da struct para a carta da cidade
typedef struct {
    char codigo_carta[5]; // Ex: A01, B02, etc.
    char nome_cidade[50];
    long populacao;
    double area_km2; // Usamos double para a área, que pode ter casas decimais
    double pib_bilhoes;
    int num_pontos_turisticos;
} CartaCidade;

int main() {
    // Definindo o número de cartas que você quer cadastrar
    int num_cartas = 4; // Exemplo: 4 cartas (1 por estado, de A01 a A04)

    // Criando um array de structs para armazenar as cartas
    CartaCidade cartas[num_cartas];

    // Loop para cadastrar cada carta
    for (int i = 0; i < num_cartas; i++) {
        printf("--- Cadastro da Carta %d ---\n", i + 1);

        // Entrada de dados para cada propriedade da carta
        printf("Codigo da carta (ex: A01, B02): ");
        scanf("%s", cartas[i].codigo_carta);

        printf("Nome da cidade: ");
        scanf("%s", cartas[i].nome_cidade);

        printf("Populacao: ");
        scanf("%ld", &cartas[i].populacao);

        printf("Area (km2): ");
        scanf("%lf", &cartas[i].area_km2);

        printf("PIB (em bilhoes de dolares): ");
        scanf("%lf", &cartas[i].pib_bilhoes);

        printf("Numero de pontos turisticos: ");
        scanf("%d", &cartas[i].num_pontos_turisticos);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("--- Cartas Cadastradas ---\n");
    for (int i = 0; i < num_cartas; i++) {
        printf("---------------------------\n");
        printf("Carta: %s\n", cartas[i].codigo_carta);
        printf("Cidade: %s\n", cartas[i].nome_cidade);
        printf("Populacao: %ld\n", cartas[i].populacao);
        printf("Area (km2): %.2f\n", cartas[i].area_km2);
        printf("PIB (bilhoes): %.2f\n", cartas[i].pib_bilhoes);
        printf("Pontos Turisticos: %d\n", cartas[i].num_pontos_turisticos);
        printf("---------------------------\n");
    }

    return 0;
}







