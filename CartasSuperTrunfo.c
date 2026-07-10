#include <stdio.h>

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1; // Usar %c para ler apenas um caractere
    char codigocarta1[5], nomecidade1[20]; 
    unsigned long int populacao1; // Requisito: unsigned long int (usa-se %lu)
    int npturisticos1; 
    float pib1, densidade1, pibpercapta1, area1; 
    float superpoder1;
  
    char estado2;
    char codigocarta2[5], nomecidade2[20]; 
    unsigned long int populacao2;
    int npturisticos2; 
    float pib2, densidade2, pibpercapta2, area2; 
    float superpoder2;

    // ================= ÁREA PARA ENTRADA DE DADOS CARTA 1 =================
    printf("Digite o Estado 1 (Uma letra): \n");
    scanf(" %c", &estado1);

    printf("Código da Carta 1 (ex: 01 a 04): \n");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da Cidade 1: \n");
    scanf(" %s", nomecidade1);

    printf("Digite o número de Habitantes: \n");
    scanf(" %lu", &populacao1); // %lu para unsigned long int

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade 1: \n");
    scanf(" %f", &pib1);

    printf("Digite número de Pontos Turísticos: \n");
    scanf(" %d", &npturisticos1);

    // ================= ÁREA PARA ENTRADA DE DADOS CARTA 2 =================
    printf("\nDigite o Estado 2 (Uma letra): \n");
    scanf(" %c", &estado2);

    printf("Código da Carta 2 (ex: 01 a 04): \n");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da Cidade 2: \n");
    scanf(" %s", nomecidade2);

    printf("Digite o número de Habitantes: \n");
    scanf(" %lu", &populacao2); // %lu para unsigned long int

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf(" %f", &pib2);

    printf("Digite número de Pontos Turísticos: \n");
    scanf(" %d", &npturisticos2);

    // ================= CÁLCULOS =================

    // Cálculo Carta 1
    densidade1 = (float) populacao1 / area1;
    pibpercapta1 = pib1 / (float) populacao1;
    // Super poder soma todos os atributos numéricos + o INVERSO da densidade (1.0 / densidade)
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) npturisticos1 + pibpercapta1 + (1.0f / densidade1);

    // Cálculo Carta 2
    densidade2 = (float) populacao2 / area2;
    pibpercapta2 = pib2 / (float) populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) npturisticos2 + pibpercapta2 + (1.0f / densidade2);


    // ================= COMPARAÇÕES =================
    // Se for verdadeiro, a variável recebe 1 (Carta 1 vence)
    // Se for falso, recebe 0 (Carta 2 vence)

    int vence_populacao = populacao1 > populacao2;
    int vence_area = area1 > area2;
    int vence_pib = pib1 > pib2;
    int vence_pt = npturisticos1 > npturisticos2;
    int vence_densidade = densidade1 < densidade2; // vence a MENOR densidade
    int vence_pibpercapta = pibpercapta1 > pibpercapta2;
    int vence_superpoder = superpoder1 > superpoder2;

    // ================= EXIBIÇÃO DOS RESULTADOS =================
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", vence_populacao);
    printf("Área: Carta 1 venceu (%d)\n", vence_area);
    printf("PIB: Carta 1 venceu (%d)\n", vence_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vence_pt);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vence_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vence_pibpercapta);
    printf("Super Poder: Carta 1 venceu (%d)\n", vence_superpoder);

    return 0;
}
