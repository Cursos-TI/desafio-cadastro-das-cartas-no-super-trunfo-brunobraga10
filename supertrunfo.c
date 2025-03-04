#include <stdio.h>

int main() {

// Variaveis
char codigoEstado1,codigoestado2;  // A, B, C, ..., H
int numeroCidade1, numerocidade2;   // 1, 2, 3, 4
char nome1[50],nome2[50];
unsigned long int populacao1,populacao2;
float area1,area2;
double pib1,pib2;
int pontosTuristicos1,pontosTuristico2;
double densidadepopulacional1,densidadepopulacional2;
double pibpercapita1,pibpercapita2;
float superpoder1,superpoder2;



// Carta 1
printf("***carta 1*** \n");

// Codigo da carta 1
printf("Digite o codigo da cidade (A, B, C, ..., H): \n");
scanf(" %c", &codigoEstado1); 
printf("Codigo da cidade: %c \n", codigoEstado1);

// Numero da carta 1
printf("Digite o numero da cidade (1, 2, 3, 4): \n");
scanf("%d", &numeroCidade1);
printf("Numero da cidade: %d \n", numeroCidade1);

// Nome da carta 1
printf("Digite o nome da cidade: \n");
scanf("%s", nome1);
printf("Nome da cidade: %s \n", nome1);

// Populacao da carta 1
printf("Digite a populacao da cidade: \n");
scanf("%lu", &populacao1);
printf("Populacao da cidade: %lu habitantes \n", populacao1);

// Area da carta 1
printf("Area da cidade (em km²): \n");
scanf("%f", &area1);
printf("Area da cidade: %.2f km² \n", area1);

// PIB da carta 1
printf("PIB da cidade (em bilhoes): \n");
scanf("%lf", &pib1);
printf("PIB da cidade: %.2lf bilhoes \n", pib1);

// Pontos turisticos da carta 1
printf("Pontos turisticos da cidade: \n");
scanf("%d", &pontosTuristicos1);
printf("Pontos turisticos da cidade: %d \n", pontosTuristicos1);

// divisão densidade populacional e pibpercapita carta 1

densidadepopulacional1 = (double) populacao1 / area1;
pibpercapita1 = (double) (pib1 * 1e9) / populacao1; // 1e9= converte pib para bilhoes

printf("densidade populacional cidade A01: %.2lf habitantes por km \n", densidadepopulacional1);
printf("pib per capita cidade A01: %.2lf bilhoes por habitante \n",pibpercapita1);

// calculo do super poder da carta 1
superpoder1 = (float)populacao1 + area1 + (pib1 * 1e9) +pontosTuristicos1 + (1.0/ densidadepopulacional1);

// Carta 2
printf("***carta 2***: \n");


// Codigo da carta 2
printf("Digite o codigo da cidade (A, B, C, ..., H): \n");
scanf(" %c", &codigoestado2); 
printf("Codigo da cidade: %c \n", codigoestado2);

// Numero da carta 2
printf("Digite o numero da cidade (1, 2, 3, 4): \n");
scanf("%d", &numerocidade2);
printf("Numero da cidade: %d \n", numerocidade2);

// Nome da carta 2
printf("Digite o nome da cidade: \n");
scanf("%s", nome2);
printf("Nome da cidade: %s \n", nome2);

// Populacao da carta 2
printf("Digite a populacao da cidade: \n");
scanf("%lu", &populacao2);
printf("Populacao da cidade: %lu habitantes \n", populacao2);

// Area da carta 2
printf("Area da cidade (em km²): \n");
scanf("%f", &area2); 
printf("Area da cidade: %.2f km² \n", area2);

// PIB da carta 2
printf("PIB da cidade (em bilhoes): \n");
scanf("%lf", &pib2);
printf("PIB da cidade: %.2lf bilhoes \n", pib2);

// Pontos turisticos da carta 2
printf("Pontos turisticos da cidade: \n");
scanf("%d", &pontosTuristico2);
printf("Pontos turisticos da cidade: %d \n", pontosTuristico2);

//divisão da densidade populacional e pibpercapita da carta 2
densidadepopulacional2 = (double) populacao2 / area2;
pibpercapita2 = (double) pib2 / populacao2;

printf("densidade populacional cidade A02: %.2lf habitantes por km \n ", densidadepopulacional2);
printf("pib per capita cidade A02: %.2lf bilhoes \n ",pibpercapita2);

// calculo do super poder da carta 2
superpoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosTuristico2 + (1.0/ densidadepopulacional2);

// comparaçoes das cartas ("1"para verdadeiro e "0" para falso)

printf("comparação das cartas");

printf("população: carta 1 vence carta 2 %d \n", (populacao1 > populacao2) );

printf("area: carta 1 vence carta 2 %d \n", (area1 > area2) );

printf("pib: carta 1 vence carta 2 %d \n", (pib1 > pib2) );

printf("pontos turisticos: carta 1 vence carta 2 %d \n", (pontosTuristicos1 > pontosTuristico2) );

printf("densidade populacional: carta 1 vence carta 2 %d \n", (densidadepopulacional1 > densidadepopulacional2) );

printf("pibpercapita: carta 1 vence carta 2 %d \n", (pibpercapita1 > pibpercapita2) );

printf("superpoder:carta 1 vence carta 2 %d \n", (superpoder1 > superpoder2) );


return 0;
};
