#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, codigocarta [5], nomecidade [ 20]; //%s
    int populacao, npturisticos; //%d
    float pib, densidade, pibpercapta, area; //%f
  

  // Área para entrada de dados
    printf("Digite o Estado Letra de 'A' até 'H': \n");
    scanf(" %s", &estado);

    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04: \n");
    scanf(" %s", codigocarta);

    printf("Digite o nome da Cidade: \n");
    scanf(" %s", nomecidade);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite número de Pontos Turísticos: \n");
    scanf(" %d", &npturisticos);

      // Cálculo

  densidade = area / populacao;
  pibpercapta = pib / populacao;


  // Área para exibição dos dados da cidade

    printf("- Nome do Estado: %c \n - Código da Carta: %s \n - Nome da Cidade: %s \n", estado, codigocarta, nomecidade);
    printf("- População: %d \n - Número de Pontos Turísticos: %d \n", populacao, npturisticos);
    printf("- Área: %f \n - PIB: %f \n", area, pib);
    printf("- Densidade Populacional: %f \n - PIB Per Capta: %f \n", densidade, pibpercapta);
  
return 0;
} 
