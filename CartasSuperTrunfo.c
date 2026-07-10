#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, codigocarta [3], nomecidade [20]; //%s
    int populacao, npturisticos; //%d
    float area, pib; //%f
  
  // Área para entrada de dados
    printf("Digite o Estado (Letra de 'A' até 'H'): \n");
    scanf("%s", &estado);

    printf("Código da Carta: (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", &codigocarta);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomecidade);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite número de Pontos Turísticos: \n");
    scanf("%d", &npturisticos);


  // Área para exibição dos dados da cidade

    printf("Nome do Estado: %s - Código da Carta: %s - Nome da Cidade: %s \n", estado, codigocarta, nomecidade);
    printf("População: %d - Número de Pontos TurísticAos: %d", populacao, npturisticos);
    printf("Área: %f - PIB: %f", area, pib);
  
return 0;
} 
