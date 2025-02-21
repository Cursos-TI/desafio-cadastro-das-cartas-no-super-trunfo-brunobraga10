#include <stdio.h>

int main() {

// Variaveis
char codigoEstado;  // A, B, C, ..., H
int numeroCidade;   // 1, 2, 3, 4
char nome[50];
int populacao;
float area;
double pib;
int pontosTuristicos;

// Carta 1
printf("***CIDADE 1***: \n");

// Codigo da cidade A01
printf("Digite o codigo da cidade (A, B, C, ..., H): \n");
scanf(" %c", &codigoEstado); 
printf("Codigo da cidade: %c \n", codigoEstado);

// Numero da cidade A01
printf("Digite o numero da cidade (1, 2, 3, 4): \n");
scanf("%d", &numeroCidade);
printf("Numero da cidade: %d \n", numeroCidade);

// Nome da cidade A01
printf("Digite o nome da cidade: \n");
scanf("%s", nome);
printf("Nome da cidade: %s \n", nome);

// Populacao da cidade A01
printf("Digite a populacao da cidade: \n");
scanf("%d", &populacao);
printf("Populacao da cidade: %d habitantes \n", populacao);

// Area da cidade A01
printf("Area da cidade (em km²): \n");
scanf("%f", &area);
printf("Area da cidade: %.2f km² \n", area);

// PIB da cidade A01
printf("PIB da cidade (em bilhoes): \n");
scanf("%lf", &pib);
printf("PIB da cidade: %.2lf bilhoes \n", pib);

// Pontos turisticos da cidade A01
printf("Pontos turisticos da cidade: \n");
scanf("%d", &pontosTuristicos);
printf("Pontos turisticos da cidade: %d \n", pontosTuristicos);

// Carta 2
printf("***CIDADE 2***: \n");

// Codigo da cidade A02
printf("Digite o codigo da cidade (A, B, C, ..., H): \n");
scanf(" %c", &codigoEstado); 
printf("Codigo da cidade: %c \n", codigoEstado);

// Numero da cidade A02
printf("Digite o numero da cidade (1, 2, 3, 4): \n");
scanf("%d", &numeroCidade);
printf("Numero da cidade: %d \n", numeroCidade);

// Nome da cidade A02
printf("Digite o nome da cidade: \n");
scanf("%s", nome);
printf("Nome da cidade: %s \n", nome);

// Populacao da cidade A02
printf("Digite a populacao da cidade: \n");
scanf("%d", &populacao);
printf("Populacao da cidade: %d habitantes \n", populacao);

// Area da cidade A02
printf("Area da cidade (em km²): \n");
scanf("%f", &area); 
printf("Area da cidade: %.2f km² \n", area);

// PIB da cidade A02
printf("PIB da cidade (em bilhoes): \n");
scanf("%lf", &pib);
printf("PIB da cidade: %.2lf bilhoes \n", pib);

// Pontos turisticos da cidade A02
printf("Pontos turisticos da cidade: \n");
scanf("%d", &pontosTuristicos);
printf("Pontos turisticos da cidade: %d \n", pontosTuristicos);

return 0;
};














