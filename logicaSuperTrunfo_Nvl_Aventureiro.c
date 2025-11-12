#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - adicionar calculo da Densidade populacionalo e PIB per Capita
// Objetivo: implementar a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado_1;
  char estado_2;
  char codigo_carta_1[4];
  char codigo_carta_2[4];
  char cidade_1[30];
  char cidade_2[30];
  unsigned long int populacao_1;
  unsigned long int populacao_2;
  float area_cidade_1;
  float area_cidade_2;
  float densidade_populacional_1;
  float densidade_populacional_2;
  float pib_1;
  float pib_2;
  float pib_per_capita_1;
  float pib_per_capita_2;
  int num_pts_turisticos_1;
  int num_pts_turisticos_2;

  float inverso_dens_população_1;
  float inverso_dens_população_2;

  float super_poder_1;
  float super_poder_2;

    /* Automação das entradas
   estado_1 = 'A';
   estado_2 = 'B';
   strcpy(codigo_carta_1, "A01");
   strcpy(codigo_carta_2, "B02");
   strcpy(cidade_1, "São Paulo");
   strcpy(cidade_2, "Rio de Janeiro");
   populacao_1 = 12325000;
   populacao_2 = 6748000;
   area_cidade_1 = 1521.11;
   area_cidade_2 = 1200.25;
   densidade_populacional_1 = 8102.47;
   densidade_populacional_2 = 5622.24;
   pib_1 = 699.28;
   pib_2 = 300.50;
   pib_per_capita_1;
   pib_per_capita_2;
   num_pts_turisticos_1 = 50;
   num_pts_turisticos_2 = 30;
   */


  

  // Área para entrada de dados da carta 1
  printf("Digite a letra que representa o 1º estado: ");
    scanf(" %c", &estado_1);

  printf("Digite a letra do 1º estado, seguida de um número de 01 a 04,ex: 'A01, B03': ");
    scanf(" %s", &codigo_carta_1);

   // Limpa o buffer
   while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
    fgets(cidade_1, 30, stdin);
    
  printf("Digite o número de habitantes desta cidade: ");
    scanf(" %lu", &populacao_1);

  printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area_cidade_1);

  printf("Digite o Produto Interno Bruto da cidade em bilhões: ");
    scanf(" %f", &pib_1);

  printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf(" %d", &num_pts_turisticos_1);

  // Área para entrada de dados da carta 2
  printf("\n");
  printf("Digite a letra que representa o 2º estado escolhido: ");
    scanf(" %c", &estado_2);

  printf("Digite a letra do 2º estado, seguida de um número de 01 a 04: ");
    scanf(" %s", &codigo_carta_2);

    // Limpar o buffer
    while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
    fgets(cidade_2, 30, stdin);

  printf("Digite o número de habitantes desta cidade: ");
    scanf(" %lu", &populacao_2);

  printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area_cidade_2);

  printf("Digite o Produto Interno Bruto da cidade em bilhões: ");
    scanf(" %f", &pib_2);

  printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf(" %d", &num_pts_turisticos_2);


    // Cálculo da Densidade Populacional = população / área

  densidade_populacional_1 = populacao_1 / area_cidade_1;

  densidade_populacional_2 = populacao_2 / area_cidade_2;

    // Cálculo do PIB per Capita = (PIB * 1 Bilhão) / população

  pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;

  pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;

    // Cálculo do inverso da densidade populacional, quanto menor, maior o poder

  inverso_dens_população_1 = 1 / populacao_1;

  inverso_dens_população_2 = 1 / populacao_2;
  
    // Cálculo do Super Poder

  super_poder_1 = (float)populacao_1 + (float)area_cidade_1 + ((float)pib_1 * 1000000000) + (float)num_pts_turisticos_1 + (float)pib_per_capita_1 + (float)inverso_dens_população_1; 

  super_poder_2 = (float)populacao_2 + (float)area_cidade_2 + ((float)pib_2 * 1000000000) + (float)num_pts_turisticos_2 + (float)pib_per_capita_2 + (float)inverso_dens_população_2;

    // Área para exibição dos dados da cidade
  printf("\n");
  printf("Carta 1:\n");
  printf("Código: %s\n", codigo_carta_1);
  printf("Nome da Cidade: %s", cidade_1);
  printf("População: %lu\n", populacao_1);
  printf("Área: %.2f km²\n", area_cidade_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d \n", num_pts_turisticos_1);
  printf("Densidade Polupacional: %.2f hab/km²\n", densidade_populacional_1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
  printf("Super Poder: %.2f\n", super_poder_1);


  printf("\n");
  printf("Carta 2:\n");
  printf("Código: %s\n", codigo_carta_2);
  printf("Nome da Cidade: %s", cidade_2);
  printf("População: %lu\n", populacao_2);
  printf("Área: %.2f km²\n", area_cidade_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d \n", num_pts_turisticos_2);
  printf("Densidade Polupacional: %.2f hab/km²\n", densidade_populacional_2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
  printf("Super Poder: %.2f\n", super_poder_2);

  printf("\n");
  printf("**** Comparação de Cartas: ****\n");
  printf("População: %s\n", (populacao_1 > populacao_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
  printf("Área: %s\n", (area_cidade_1 > area_cidade_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
  printf("PIB: %s\n", (pib_1 > pib_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
  printf("Pontos Turísticos: %s\n", (num_pts_turisticos_1 > num_pts_turisticos_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
  printf("Densidade Populacional: %s\n", (inverso_dens_população_1 < inverso_dens_população_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
  printf("PIB per Capita: %s\n", (pib_per_capita_1 > pib_per_capita_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
  printf("Super Poder: %s\n", (super_poder_1 > super_poder_2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
  

return 0;
} 
