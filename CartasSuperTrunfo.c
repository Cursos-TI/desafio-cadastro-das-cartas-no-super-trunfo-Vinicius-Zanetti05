#include <stdio.h>

int main() {
    
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[100], cidade2[100];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;

  printf("Carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1); 
  printf("Codigo da Carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1); 
  printf("Populacao: ");
  scanf("%d", &populacao1);
  printf("Area (em km2): ");
  scanf("%f", &area1);
  printf("PIB (em bilhoes de reais): ");
  scanf("%f", &pib1);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Codigo da Carta (ex: B02): ");
  scanf("%s", codigo2);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);
  printf("Populacao: ");
  scanf("%d", &populacao2);
  printf("Area (em km2): ");
  scanf("%f", &area2);
  printf("PIB (em bilhoes de reais): ");
  scanf("%f", &pib2);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  printf("\n");

   printf("=== Cartas Cadastradas ===\n\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
