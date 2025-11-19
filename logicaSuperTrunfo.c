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
  int escolha1;
  int escolha2;
  int resultado1;
  int resultado2;
  float soma1;
  float soma2;

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
   num_pts_turisticos_2 = 60;
   
   

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

  
    // Painel interativo para a primeira jogada
    printf("## Jogo Super Trunfo ##\n");
    printf("Escolha uma opção para 1ª disputa:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Polupacional\n");
    printf("Escolha o atributo: ");
    scanf("%d", &escolha1);

    switch (escolha1){
    case 1:
        printf("Você escolheu a opção População\n");
        resultado1 = populacao_1 > populacao_2 ? 1 : 0;
        soma1 = populacao_1;
        soma2 = populacao_2;
        break;

    case 2:
        printf("Você escolheu a opção Área\n");
        resultado1 = area_cidade_1 > area_cidade_2 ? 1 : 0;
        soma1 = area_cidade_1;
        soma2 = area_cidade_2;
        break;

    case 3:
        printf("Você escolheu a opção PIB\n");
        resultado1 = pib_1 > pib_2 ? 1 : 0;
        soma1 = pib_1;
        soma2 = pib_2;
        break;

    case 4:
        printf("Você escolheu a opção Número de Pontos Turísticos\n");
        resultado1 = num_pts_turisticos_1 > num_pts_turisticos_2 ? 1 : 0;
        soma1 = num_pts_turisticos_1;
        soma2 = num_pts_turisticos_2;
        break;

    case 5:
        printf("Você escolheu a opção Densidade Polupacional\n");
        resultado1 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
        soma1 = densidade_populacional_1;
        soma2 = densidade_populacional_2;
        break;
    }

    // Painel interativo para a segunda jogada
    printf("\n");
    printf("## Jogo Super Trunfo ##\n");
    printf("Escolha uma opção para 2ª disputa:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Polupacional\n");
    printf("Escolha o atributo: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2){ 
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (escolha2){
        case 1:
            printf("Você escolheu a opção População\n");
            resultado2 = populacao_1 > populacao_2 ? 1 : 0;
            soma1 += populacao_1;
            soma2 += populacao_2;
            break;

        case 2:
            printf("Você escolheu a opção Área\n");
            resultado2 = area_cidade_1 > area_cidade_2 ? 1 : 0;
            soma1 += area_cidade_1;
            soma2 += area_cidade_2;
            break;

        case 3:
            printf("Você escolheu a opção PIB\n");
            resultado2 = pib_1 > pib_2 ? 1 : 0;
            soma1 += pib_1;
            soma2 += pib_2;
            break;

        case 4:
            printf("Você escolheu a opção Número de Pontos Turísticos\n");
            resultado2 = num_pts_turisticos_1 > num_pts_turisticos_2 ? 1 : 0;
            soma1 += num_pts_turisticos_1;
            soma2 += num_pts_turisticos_2;
            break;

        case 5:
            printf("Você escolheu a opção Densidade Polupacional\n");
            resultado2 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
            soma1 += densidade_populacional_1;
            soma2 += densidade_populacional_2;
            break;
        }
    }

      if(resultado1 && resultado2){
        printf("Parabéns você venceu!!!\n");
        printf("A soma dos atributos escolhidos é: %.2f!!!\n", soma1);
        
      } else if (resultado1 != resultado2){
        printf("\n");
        printf("Houve um Empate");
      } else {
        printf("\n");
        printf("Infelizmente você Perdeu!!!\n");
        printf("A soma dos atributos escolhidos é: %.2f!!!\n", soma1);
        printf("A soma dos atributos do adversario é: %.2f!!!\n", soma2);
  
      }

  return 0;
} 