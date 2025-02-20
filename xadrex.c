#include <stdio.h>

int main(){


//variaveis
char codigoEstado;  // A, B, C, ..., H
int numeroCidade;   // 1, 2, 3, 4
char nome[50];
int populacao;
float area;
double pib;
int pontosTuristicos;


//printf e scanf para exibir opções para escolha dos status das cartas e depois exibir

//carta 1
printf("***CIDADE 1***: \n");

//codigo cidade A01
printf("digite codigo da cidade(A,B,C,...H): \n");
scanf("%c",&codigoEstado);

printf("codigo da cidade:%c \n",codigoEstado);

//numero da cidade A01
printf("digite o numero da cidade(1,2,3 e 4): \n");
scanf("%d",&numeroCidade);

printf("numero da cidade:%d \n",numeroCidade);

//nome da cidade A01
printf("digite o nome da cidade: \n");
scanf("%s", nome);

printf("nome da cidade:%s \n",nome);

//populacao da cidade A01
printf("digite populacao da cidade: \n");
scanf("%d",&populacao);

printf("populacao da cidade: %d habitantes \n",populacao);

//area da cidade A01
printf("area da cidade em : \n");
scanf("%.2f",&area);

printf("area da cidade:%.2ff km \n",area);

//pib da cidade A01
printf("pib da cidade: \n");
scanf("%lf",&pib);

printf("pib da cidade:%lf bilhoes\n",pib);

//pontos turisticos da cidade A01
printf("pontosturisticos da cidade: \n");
scanf("%d",&pontosTuristicos);

printf("pontos turisticos da cidade:%d \n", pontosTuristicos);

//carta 2

printf("***CIDADE 2***: \n");

//codigo cidade A02
printf("digite codigo da cidade(A,B,C,...H): \n");
scanf("%c",&codigoEstado);

printf("codigo da cidade:%c \n",codigoEstado);

//numero da cidade A02
printf("digite o numero da cidade(1,2,3 e 4): \n");
scanf("%d",&numeroCidade);

printf("numero da cidade:%d \n",numeroCidade);

//nome da cidade A02
printf("digite o nome da cidade: \n");
scanf("%s",nome);

printf("nome da cidade:%s \n",nome);

//populacao da cidade A02
printf("digite populacao da cidade: \n");
scanf("%d",&populacao);

printf("populacao da cidade: %d habitantes \n",populacao);

//area da cidade A02
printf("area da cidade em : \n");
scanf("%.2f",&area);

printf("area da cidade:%.2f km \n",area);

//pib da cidade A02
printf("pib da cidade: \n");
scanf("%lf",&pib);

printf("pib da cidade:%lf bilhoes\n",pib);

//pontos turisticos da cidade A02
printf("pontosturisticos da cidade: \n");
scanf("%d",&pontosTuristicos);

printf("pontos turisticos da cidade:%d \n", pontosTuristicos);

return 0;
};














