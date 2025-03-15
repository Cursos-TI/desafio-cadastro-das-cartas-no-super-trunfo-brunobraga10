#include <stdio.h>

int main (){

//variaveis são paulo
char sao_paulo[] = "sao paulo";
char codigo1 = 'A';
int numerocidade1 = 1;
unsigned long int populacao1= 11451999;
float area1 = 1521110;
double PIB1 = 799000000;
int pontosturisticos1 = 36;
double densidadepopulacional1;
double PIBpercapita1;
double superpoder1;

//variaveis rio de janeiro

char rio_de_janeiro[] = "rio de janeiro";
char codigo2 = 'B';
int numerocidade2 = 2;
unsigned long int populacao2 = 6211223;
float area2 = 1200330;
double PIB2 =359634752;
int pontosturisticos2 = 42;
double densidadepopulacional2;
double PIBpercapita2;
double superpoder2;



// calculo densidade e PIBpercapita são paulo

densidadepopulacional1 =(double) populacao1 / area1;
PIBpercapita1 = (double) PIB1 / populacao1;

//calculo densidade e PIBpercapita rio de janeiro

densidadepopulacional2 =(double) populacao2 / area2;
PIBpercapita2 = (double) PIB2 / populacao2;

// calculo superpoder

superpoder1 = (double)populacao1 + area1 + PIB1 + pontosturisticos1 + (1.0 / densidadepopulacional1);
superpoder2 = (double)populacao2 + area2 + PIB2 + pontosturisticos2 + (1.0 / densidadepopulacional2);



//exibição dos dados

//são paulo dados

printf("DADOS SAO PAULO \n \n");
printf("nome da cidade :%s \n \n",sao_paulo);
printf("codigo da cidade: %c \n \n", codigo1);
printf("numero da cidade:%d \n \n",numerocidade1);
printf("populacao de sao paulo: %u \n \n",populacao1);
printf("area de sao paulo:%.2lf \n \n", area1);
printf("PIB de sao paulo:%.2lf \n \n", PIB1);
printf("densidade populacional de sao paulo:%.2lf \n \n",densidadepopulacional1);
printf("PIBpercapita de sao paulo:%.2lf \n \n",PIBpercapita1);
printf("superpoder de sao paulo:%.2lf \n \n", superpoder1);


printf("DADOS DE RIO DE JANEIRO \n \n");
printf("nome da cidade :%s \n \n",rio_de_janeiro);
printf("codigo da cidade: %c \n \n", codigo2);
printf("numero da cidade:%d \n \n",numerocidade2);
printf("populacao de rio de janeiro: %u \n \n",populacao2);
printf("area de rio de janeiro:%.2lf \n \n", area2);
printf("PIB de rio de janeiro:%.2lf \n\n", PIB2);
printf("densidade populacional de rio de janeiro:%.2lf \n\n",densidadepopulacional2);
printf("PIBpercapita de rio de janeiro:%.2lf \n \n",PIBpercapita2);
printf("superpoder de rio de janeiro:%.2lf \n \n", superpoder2);


// comparação das carta com if e else

if(populacao1 > populacao2){
    printf("sao paulo venceu essa rodada no quesito populacao! \n \n");
}else if(populacao1 < populacao2){
    printf("rio de janeiro venceu essa rodada no quesito populacao! \n \n");
} else { 
    printf("empate nessa rodada no quesito populacao! \n\n");
}

if(area1 > area2){
    printf("sao paulo venceu essa rodada no quesito area! \n\n");
}else if(area1 < area2){
    printf("rio de janeiro venceu essa rodada no quesito area! \n\n");
}else{
    printf("empate nessa rodada no quesito area! \n\n");
}

if(PIB1 > PIB2){
    printf("sao paulo venceu essa rodada no quesito PIB! \n\n");
}else if(PIB1 < PIB2){
    printf("rio de janeiro venceu essa rodada no quesito PIB! \n\n");
}else{
    printf("empate nessa rodada no quesito PIB! \n\n");
}


if(pontosturisticos1 > pontosturisticos2){
    printf("sao paulo venceu essa rodada no quesito pontos turisticos! \n\n");
}else if(pontosturisticos1 < pontosturisticos2){
    printf("rio de janeiro venceu essa rodada no quesito pontos turisticos! \n\n");
}else{
    printf("empate nessa rodada no quesito pontos turisticos! \n\n");
}

if(densidadepopulacional1 < densidadepopulacional2){
    printf("sao paulo venceu essa rodada no quesito densidade populacional! \n\n");
}else if(densidadepopulacional1 > densidadepopulacional2){
    printf("rio de janeiro venceu essa rodada no quesito densidade populacional! \n\n");
}else{
    printf("empate nessa rodada no quesito densidade populacional! \n\n");
}

if(PIBpercapita1 > PIBpercapita2){
    printf("sao paulo venceu essa rodada no quesito PIBpercapita! \n\n");
}else if(PIBpercapita1 < PIBpercapita2){
    printf("rio de janeiro venceu essa rodada no quesito PIBpercapita! \n\n");
}else{
    printf("empate nessa rodada no quesito PIBpercapita! \n\n");
}

if(superpoder1 > superpoder2){
    printf("sao paulo venceu essa rodada no quesito superpoder! \n\n");
}else if(superpoder1 < superpoder2){
    printf("rio de janeiro venceu essa rodada no quesito superpoder! \n\n");
}else{
    printf("empate nessa rodada no quesito superpoder! \n\n");
}

return 0;
};
