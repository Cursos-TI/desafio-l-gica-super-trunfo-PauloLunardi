#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado_1;
    char estado_2;
    char codigo_carta_1[4];
    char codigo_carta_2[4];
    char codigo_uf_carta_1[3];
    char codigo_uf_carta_2[3];
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

    // Automação das entradas para teste automatizado
   estado_1 = 'A';
   estado_2 = 'B';
   strcpy(codigo_carta_1, "A01");
   strcpy(codigo_carta_2, "B02");

   strcpy(codigo_uf_carta_1, "SP");
   strcpy(codigo_uf_carta_2, "RJ");

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

    // Cadastro das Cartas:
    //Área para entrada de dados da carta 1
    /*
  printf("Digite a letra que representa o 1º estado: ");
    scanf(" %c", &estado_1);

  printf("Digite a letra do 1º estado, seguida de um número de 01 a 04,ex: 'A01, B03': ");
    scanf(" %s", &codigo_carta_1);

  printf("Digite o UF do 1º estado: ");
    scanf(" %s", &codigo_uf_carta_1);

   // Limpa o buffer
   while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
    fgets(cidade_1, 30, stdin);

  // remove o '\n' do fgets(tava bugando o retorno do resultado)
    cidade_1[strcspn(cidade_1, "\n")] = '\0';
    
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

  printf("Digite o UF do 2º estado: ");
    scanf(" %s", &codigo_uf_carta_2);

    // Limpar o buffer
    while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
    fgets(cidade_2, 30, stdin);

  // remove o '\n' do fgets(tava bugando o retorno do resultado)
    cidade_2[strcspn(cidade_2, "\n")] = '\0';

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



    // Lógica desafio iniciante
    /*
    // Comparação de Cartas: População
    printf("\n");
    printf("*** Comparação de cartas (Atributo: População): ***\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade_1, codigo_uf_carta_1, populacao_1);
    printf("Carta 2 - %s (%s): %lu\n", cidade_2, codigo_uf_carta_2, populacao_2);
    if(populacao_1 > populacao_2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
   }

   // Comparação de Cartas: Área
    printf("\n");
    printf("*** Comparação de cartas (Atributo: Área): ***\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade_1, codigo_uf_carta_1, area_cidade_1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade_2, codigo_uf_carta_2, area_cidade_2);
    if(area_cidade_1 > area_cidade_2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
   }

   // Comparação de Cartas: PIB
    printf("\n");
    printf("*** Comparação de cartas (Atributo: PIB): ***\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade_1, codigo_uf_carta_1, pib_1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade_2, codigo_uf_carta_2, pib_2);
    if(pib_1 > pib_2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
   }
   
   // Comparação de Cartas: Número de Pontos Turísticos
    printf("\n");
    printf("*** Comparação de cartas (Atributo: Pontos Turísticos): ***\n");
    printf("Carta 1 - %s (%s): %d\n", cidade_1, codigo_uf_carta_1, num_pts_turisticos_1);
    printf("Carta 2 - %s (%s): %d\n", cidade_2, codigo_uf_carta_2, num_pts_turisticos_2);
    if(num_pts_turisticos_1 > num_pts_turisticos_2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
   }

   // Comparação de Cartas: Densidade Populacional
    printf("\n");
    printf("*** Comparação de cartas (Atributo: Densidade Populacional): ***\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade_1, codigo_uf_carta_1, densidade_populacional_1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade_2, codigo_uf_carta_2, densidade_populacional_2);
    if(densidade_populacional_1 < densidade_populacional_2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
   }

   // Comparação de Cartas: PIB per Capita
    printf("\n");
    printf("*** Comparação de cartas (Atributo: PIB per Capita): ***\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade_1, codigo_uf_carta_1, pib_per_capita_1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade_2, codigo_uf_carta_2, pib_per_capita_2);
    if(pib_per_capita_1 > pib_per_capita_2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
   }

   // Comparação de Cartas: Super Poder
    printf("\n");
    printf("*** Comparação de cartas (Atributo: Super Poder): ***\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade_1, codigo_uf_carta_1, super_poder_1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade_2, codigo_uf_carta_2, super_poder_2);
    if(super_poder_1 > super_poder_2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
   }

  */

  // Lógica Desafio: Nivel aventureiro
  printf("Super Trunfo Cidades\n");
  printf("Escolha uma opção:\n");

    return 0;
}
