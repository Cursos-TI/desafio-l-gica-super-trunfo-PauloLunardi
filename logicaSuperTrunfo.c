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
  int escolha;

    // Automação das entradas
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
   escolha = 1;
   


  
    /*
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

    */


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

    // Área para exibição dos dados da cidade
    printf("## Jogo Super Trunfo ##\n");
    printf("Escolha uma opção para a disputa:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Polupacional\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        printf("População - \n");
        break;
    case 2:
        printf("Área - \n");
        break;
    case 3:
        printf("PIB - \n");
        break;
    case 4:
        printf("Número de Pontos Turísticos - \n");
        break;
    case 5:
        printf("Densidade Polupacional - \n");
        break;
    }

    if (escolha == 1){ 
      if(populacao_1 > populacao_2){
        printf("\n");
        printf("%s Vs %s\n", cidade_1, cidade_2);
        printf("Atributo Comparado - População:\n");
        printf("%s: %d Vs %s: %d\n", cidade_1, populacao_1, cidade_2, populacao_2);
        printf("Resultado: Carta 1 - %s venceu!\n", cidade_1);
      } else if ( populacao_1 == populacao_2){
        printf("\n");
        printf("Empate");
      } else {
        printf("\n");
        printf("%s Vs %s\n", cidade_1, cidade_2);
        printf("Atributo Comparado - População:\n");
        printf("%s: %d Vs %s: %d\n", cidade_1, populacao_1, cidade_2, populacao_2);
        printf("Resultado: Carta 2 - %s venceu!\n", cidade_2);
      }


    } else if (escolha == 2){
        if(area_cidade_1 > area_cidade_2){
          printf("\n");
          printf("%s Vs %s\n", cidade_1, cidade_2);
          printf("Atributo Comparado - Área em km²:\n");
          printf("%s: %.2f/km² Vs %s: %.2f/km²\n", cidade_1, area_cidade_1, cidade_2, area_cidade_2);
          printf("Resultado: Carta 1 - %s venceu!\n", cidade_1);
      } else if ( area_cidade_1 == area_cidade_2){
          printf("\n");
          printf("Empate");
      } else {
          printf("\n");
          printf("%s Vs %s\n", cidade_1, cidade_2);
          printf("Atributo Comparado - Área em km²:\n");
          printf("%s: %.2f/km² Vs %s: %.2f/km²\n", cidade_1, area_cidade_1, cidade_2, area_cidade_2);
          printf("Resultado: Carta 2 - %s venceu!\n", cidade_2);
        }


    } else if (escolha == 3){
        if(pib_1 > pib_2){
          printf("\n");
          printf("%s Vs %s\n", cidade_1, cidade_2);
          printf("Atributo Comparado - Podruto Interno Bruto:\n");
          printf("%s: %.2f Bilhões de reais Vs %s: %.2f Bilhões de reais\n", cidade_1, pib_1, cidade_2, pib_2);
          printf("Resultado: Carta 1 - %s venceu!\n", cidade_1);
      } else if ( pib_1 == pib_2){
          printf("\n");
          printf("Empate");
      } else {
          printf("\n");
          printf("%s Vs %s\n", cidade_1, cidade_2);
          printf("Atributo Comparado - Podruto Interno Bruto:\n");
          printf("%s: %.2f Bilhões de reais Vs %s: %.2f Bilhões de reais\n", cidade_1, pib_1, cidade_2, pib_2);
          printf("Resultado: Carta 2 - %s venceu!\n", cidade_2);
        }


    } else if (escolha == 4){
        if(num_pts_turisticos_1 > num_pts_turisticos_2){
          printf("\n");
          printf("%s Vs %s\n", cidade_1, cidade_2);
          printf("Atributo Comparado - Número de Pontos Turísticos:\n");
          printf("%s: %d Pontos Turisticos Vs %s: %d Pontos Turisticos\n", cidade_1, num_pts_turisticos_1, cidade_2, num_pts_turisticos_2);
          printf("Resultado: Carta 1 - %s venceu!\n", cidade_1);
      } else if ( num_pts_turisticos_1 == num_pts_turisticos_2){
          printf("\n");
          printf("Empate");
      } else {
          printf("%s Vs %s\n", cidade_1, cidade_2);
          printf("Atributo Comparado - Número de Pontos Turísticos:\n");
          printf("%s: %d Pontos Turisticos Vs %s: %d Pontos Turisticos\n", cidade_1, num_pts_turisticos_1, cidade_2, num_pts_turisticos_2);
          printf("Resultado: Carta 2 - %s venceu!\n", cidade_2);
        }
        

    } else if (escolha == 5){
        if(densidade_populacional_1 < densidade_populacional_2){
          printf("\n");
          printf("%s Vs %s\n", cidade_1, cidade_2);
          printf("Atributo Comparado - Densidade Polupacional:\n");
          printf("%s: %.2f hab/km² Vs %s: %.2f hab/km²\n", cidade_1, densidade_populacional_1, cidade_2, densidade_populacional_2);
          printf("Resultado: Carta 1 - %s venceu!\n", cidade_1);
      } else if ( densidade_populacional_1 == densidade_populacional_2){
          printf("\n");
          printf("Empate");
      } else {
          printf("\n");
          printf("%s Vs %s\n", cidade_1, cidade_2);
          printf("Atributo Comparado - Densidade Polupacional:\n");
          printf("%s: %.2f hab/km² Vs %s: %.2f hab/km²\n", cidade_1, densidade_populacional_1, cidade_2, densidade_populacional_2);
          printf("Resultado: Carta 2 - %s venceu!\n", cidade_2);
        }
   }

  return 0;
} 