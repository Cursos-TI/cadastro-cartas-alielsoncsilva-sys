#include <stdio.h>

struct Carta {
    char estado;                // Uma letra de 'A' a 'H'
    char codigo[4];             // Ex: A01, B03
    char nomeCidade[50];        // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões
    int pontosTuristicos;       // Número de pontos turísticos
};

int main() {
    // Cadastro direto das duas cartas com os dados fornecidos
    struct Carta carta1 = {
        'A',
        "A01",
        "São Paulo",
        12325000,
        1521.11,
        699.28,
        50
    };

    struct Carta carta2 = {
        'B',
        "B02",
        "Rio de Janeiro",
        6748000,
        1200.25,
        300.50,
        30
    };

    // Exibição das cartas cadastradas
    printf("\n===== Cartas Cadastradas =====\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}


  









