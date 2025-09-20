#include <stdio.h>

int main() {

// Sera declarado as variaveis do jogo.

// CARTA 01

int codigo1, populacao1, pontosturisticos1;
char nome1[30];
float area1, pib1;

// CARTA 02
int codigo2, populacao2, pontosturisticos2;
char nome2[45];
float area2, pib2;

// Cadastro cidade 01
printf("=== cadastro da primeira cidade ===/n");
printf("codigo: ");
scanf("%d", &codigo1);

printf("nome: ");
scanf(" %[^\n]", nome1);

printf("populacao:  ");
scanf("%d", &populacao1);

printf("area (km²): ");
scanf("%f", &area1);

printf("PIB (bilhoes): ");
scanf("%f", &pib1);

printf("numero de pontos turisticos: ");
scanf("%d", &pontosturisticos2);

// Cadastro cidade 02
printf("\n=== cadastro da segunda cidade ===\n");
printf("codigo: ");
scanf("%d", &codigo2);

printf("nome: ");
scanf(" %[^\n]" , nome2);

printf("populacao: ");
scanf("%d", &populacao2);

printf("area (km²): ");
scanf("%f" , &area2);

printf("PIB (bilhoes): ");
scanf("%f" , &pib2);

printf("numero de pontos turisticos: ");
scanf("%d" , &pontosturisticos2);

//Exibição das cartas
printf("\n=== carta 1 ===\n");
printf("codigo: %d\nNome: %npopulacao: %d\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n",
      codigo1, nome1, populacao1, area1, pib1, pontosturisticos1);

printf("\n=== carta 2 ===\n");
printf("codigo: %dnNome: %s\npopulacao: %d\nArea: %.2f km²\nPIB: %.2f bilhoes\npontos Turisticos: %d\n",
    codigo2, nome2, populacao2, area2, pib2, pontosturisticos2);



return 0;

}

