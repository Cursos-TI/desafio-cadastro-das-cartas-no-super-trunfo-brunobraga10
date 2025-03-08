#include <stdio.h>

int main() {

    // Variáveis
    char codigoEstado1, codigoEstado2;  // A, B, C, ..., H
    int numeroCidade1, numeroCidade2;   // 1, 2, 3, 4
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    double densidadepopulacional1, densidadepopulacional2;
    double pibpercapita1, pibpercapita2;
    double superpoder1, superpoder2;

    // Carta 1
    printf("***Carta 1*** \n");

    // Código da carta 1
    printf("Digite o codigo da cidade (A, B, C, ..., H): \n");
    scanf(" %c", &codigoEstado1); 
    printf("Codigo da cidade: %c \n", codigoEstado1);

    // Número da carta 1
    printf("Digite o numero da cidade (1, 2, 3, 4): \n");
    scanf("%d", &numeroCidade1);
    printf("Numero da cidade: %d \n", numeroCidade1);

    // Nome da carta 1
    printf("Digite o nome da cidade: \n");
    getchar();  // Limpar o caractere '\n' residual
    scanf("%[^\n]", nome1);  // Captura o nome da cidade
    printf("Nome da cidade: %s \n", nome1);

    // População da carta 1
    printf("Digite a populacao da cidade: \n");
    scanf("%lu", &populacao1);
    printf("Populacao da cidade: %lu habitantes \n", populacao1);

    // Área da carta 1
    printf("Area da cidade (em km²): \n");
    scanf("%f", &area1);
    printf("Area da cidade: %.2f km² \n", area1);

    // PIB da carta 1
    printf("PIB da cidade (em bilhoes): \n");
    scanf("%lf", &pib1);
    printf("PIB da cidade: %.2lf bilhoes \n", pib1);

    // Pontos turísticos da carta 1
    printf("Pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);
    printf("Pontos turisticos da cidade: %d \n", pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita da carta 1
    densidadepopulacional1 = (double)populacao1 / area1;
    pibpercapita1 = (double)(pib1 * 1e9) / populacao1;

    printf("Densidade populacional cidade A01: %.2lf habitantes por km²\n", densidadepopulacional1);
    printf("PIB per capita cidade A01: %.2lf bilhões por habitante\n", pibpercapita1);

    // Cálculo do superpoder da carta 1
    superpoder1 = (double)populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + (1.0 / densidadepopulacional1);

    // Carta 2
    printf("***Carta 2***: \n");

    // Código da carta 2
    printf("Digite o codigo da cidade (A, B, C, ..., H): \n");
    scanf(" %c", &codigoEstado2); 
    printf("Codigo da cidade: %c \n", codigoEstado2);

    // Número da carta 2
    printf("Digite o numero da cidade (1, 2, 3, 4): \n");
    scanf("%d", &numeroCidade2);
    printf("Numero da cidade: %d \n", numeroCidade2);

    // Nome da carta 2
    printf("Digite o nome da cidade: \n");
    getchar();  // Limpar o caractere '\n' residual
    scanf("%[^\n]", nome2);  // Captura o nome da cidade
    printf("Nome da cidade: %s \n", nome2);

    // População da carta 2
    printf("Digite a populacao da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Populacao da cidade: %lu habitantes \n", populacao2);

    // Área da carta 2
    printf("Area da cidade (em km²): \n");
    scanf("%f", &area2); 
    printf("Area da cidade: %.2f km² \n", area2);

    // PIB da carta 2
    printf("PIB da cidade (em bilhoes): \n");
    scanf("%lf", &pib2);
    printf("PIB da cidade: %.2lf bilhoes \n", pib2);

    // Pontos turísticos da carta 2
    printf("Pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);
    printf("Pontos turísticos da cidade: %d \n", pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da carta 2
    densidadepopulacional2 = (double)populacao2 / area2;
    pibpercapita2 = (double)(pib2 * 1e9) / populacao2;

    printf("Densidade populacional cidade A02: %.2lf habitantes por km²\n", densidadepopulacional2);
    printf("PIB per capita cidade A02: %.2lf bilhões por habitante\n", pibpercapita2);

    // Cálculo do superpoder da carta 2
    superpoder2 = (double)populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + (1.0 / densidadepopulacional2);

//Comparacao atributo das cartas

    // Comparações entre atributos das cartas
    
    // Calculo e resultado população
    if(populacao1 > populacao2){
        printf("Carta 1 venceu no atributo populacao\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu no atributo populacao\n");
    } else {
        printf("Empate no atributo populacao\n");
    }

    // Calculo e resultado área
    if (area1 > area2){
        printf("Carta 1 venceu no atributo area\n");
    } else if (area2 > area1){
        printf("Carta 2 venceu no atributo area\n");
    } else {
        printf("Empate no atributo area\n");
    }

    // Calculo e resultado PIB
    if(pib1 > pib2){
        printf("Carta 1 venceu no atributo PIB\n");
    } else if (pib2 > pib1){
        printf("Carta 2 venceu no atributo PIB\n");
    } else {
        printf("Empate no atributo PIB\n");
    }

    // Calculo e resultado pontos turísticos
    if(pontosTuristicos1 > pontosTuristicos2){
        printf("Carta 1 venceu no atributo pontos turisticos\n");
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 venceu no atributo pontos turisticos\n");
    } else {
        printf("Empate no atributo pontos turisticos\n");
    }

    // Calculo e resultado densidade populacional
    if(densidadepopulacional1 < densidadepopulacional2){
        printf("Carta 1 venceu no atributo densidade populacional\n");
    } else if (densidadepopulacional2 < densidadepopulacional1) {
        printf("Carta 2 venceu no atributo densidade populacional\n");
    } else {
        printf("Empate no atributo densidade populacional\n");
    }

    // Calculo e resultado PIB per capita
    if(pibpercapita1 > pibpercapita2){
        printf("Carta 1 venceu no atributo PIB per capita\n");
    } else if (pibpercapita2 > pibpercapita1) {
        printf("Carta 2 venceu no atributo PIB per capita\n");
    } else {
        printf("Empate no atributo PIB per capita\n");
    }

    // Calculo e resultado superpoder
    if(superpoder1 > superpoder2){
        printf("Carta 1 venceu no atributo superpoder\n");
    } else if (superpoder2 > superpoder1) {
        printf("Carta 2 venceu no atributo superpoder\n");
    } else {
        printf("Empate no atributo superpoder\n");
    }

    return 0;
};
