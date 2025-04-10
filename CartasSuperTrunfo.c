#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Carta 1

    char estado, cidade[20], codigo[3];
    int populacao, pturistico;
    float area, pib;

    printf("Carta 1: \nDigite uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado);
    
    printf("Digite um numero de 01 a 04: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("O numero de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Area da cidade em quilometros quadrados: \n");
    scanf("%f", &area);

    printf("O Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pturistico);

    //Carta 2

    printf("\n");

    char estado2, cidade2[20], codigo2[3];
    int populacao2, pturistico2;
    float area2, pib2;

    printf("Carta 2: \nDigite uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado2);
    
    printf("Digite um numero de 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("O numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Area da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pturistico2);



    //Exibição para o usuario das duas cartas após preenchimento das informações
    printf("\n");

    printf("Carta 1: \nEstado: %c \nCódigo: %c%s \nNome da cidade: %s \n", estado, estado, codigo, cidade);
    printf("População: %d \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d \n", populacao, area, pib, pturistico);
    printf("\n");
    printf("Carta 2: \nEstado: %c \nCódigo: %c%s \nNome da cidade: %s \n", estado2, estado2, codigo2, cidade2);
    printf("População: %d \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d \n", populacao2, area2, pib2, pturistico2);

    return 0;
}
