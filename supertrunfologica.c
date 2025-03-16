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
float densidadepopulacional1;
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
float densidadepopulacional2;
double PIBpercapita2;
double superpoder2;
int escolhadacidade,escolhadoatributo;



// calculo densidade e PIBpercapita são paulo

densidadepopulacional1 =(double) populacao1 / area1;
PIBpercapita1 = (double) PIB1 / populacao1;

//calculo densidade e PIBpercapita rio de janeiro

densidadepopulacional2 =(double) populacao2 / area2;
PIBpercapita2 = (double) PIB2 / populacao2;

// calculo superpoder

superpoder1 = (double)populacao1 + area1 + PIB1 + pontosturisticos1 + (1.0 / densidadepopulacional1);
superpoder2 = (double)populacao2 + area2 + PIB2 + pontosturisticos2 + (1.0 / densidadepopulacional2);

printf("escolha sua cidade(digite 1 para sao paulo e 2 para rio de janeiro) \n\n");
scanf("%d",&escolhadacidade);

switch(escolhadacidade){

case 1:
        printf("1-voce escolheu Paulo \n\n");
        printf("nome da cidade :%s \n \n",sao_paulo);
printf("codigo da cidade: %c \n \n", codigo1);
printf("numero da cidade:%d \n \n",numerocidade1);
printf("populacao de sao paulo: %u \n \n",populacao1);
printf("area de sao paulo:%.2lf \n \n", area1);
printf("PIB de sao paulo:%.2lf \n \n", PIB1);
printf("pontos turisticos de sao paulo:%d \n\n",pontosturisticos1);
printf("densidade populacional de sao paulo:%f \n \n",densidadepopulacional1);
printf("PIBpercapita de sao paulo:%.2lf \n \n",PIBpercapita1);
printf("superpoder de sao paulo:%.2lf \n \n", superpoder1);
printf("==================================================================================================================================\n");


printf("escolha qual atributo comparar (digite o numero para escolher) \n\n");


printf("1. populacao de sao paulo: %u \n \n",populacao1);
printf("2.area de sao paulo:%.2lf \n \n", area1);
printf("3.PIB de sao paulo:%.2lf \n \n", PIB1);
printf("4.pontos turisticos de sao paulo:%d \n\n",pontosturisticos1);
printf("5.densidade populacional de sao paulo:%f \n \n",densidadepopulacional1);
scanf("%d",&escolhadoatributo);

switch (escolhadoatributo)
{
case 1 :
        printf("sua escolha foi população\n");
        if(populacao1 > populacao2){
                printf("sao paulo venceu essa rodada, quesito populacao! \n \n");
        }else if(populacao1 < populacao2){
                printf("rio de janeiro venceu essa rodada, quesito populacao! \n \n");
        } else { 
                printf("empate nessa rodada no quesito populacao! \n\n");
        }
        break;

        case 2 :
        printf("sua escolha foi area");
        if(area1 > area2){
                printf("sao paulo venceu essa rodada, quesito area! \n\n");
        }else if(area1 < area2){
                printf("rio de janeiro venceu essa rodada, quesito area! \n\n");
        }else{
                printf("empate nessa rodada no quesito area! \n\n");
        }
        break;

        case 3 :
        printf("sua escolha foi PIB");
        if(PIB1 > PIB2){
                printf("sao paulo venceu essa rodada, quesito PIB! \n\n");
        }else if(PIB1 < PIB2){
                printf("rio de janeiro venceu essa rodada, quesito PIB! \n\n");
        }else{
                printf("empate nessa rodada no quesito PIB! \n\n");
        }
        break;

        case 4 :
        printf("sua escolha foi pontos turisticos");
        if(pontosturisticos1 > pontosturisticos2){
                printf("sao paulo venceu essa rodada, quesito pontos turisticos! \n\n");
        }else if(pontosturisticos1 < pontosturisticos2){
                printf("rio de janeiro venceu essa rodada,quesito pontos turisticos! \n\n");
        }else{
                printf("empate nessa rodada no quesito pontos turisticos! \n\n");
        }
        break;

        case 5 :
                printf("sua escolha foi densidade populacional");
        if(densidadepopulacional1 < densidadepopulacional2){
                printf("sao paulo venceu essa rodada, quesito densidade populacional! \n\n");
        }else if(densidadepopulacional1 > densidadepopulacional2){
                printf("rio de janeiro venceu essa rodada, quesito densidade populacional! \n\n");
        }else{
                printf("empate nessa rodada no quesito densidade populacional! \n\n");
}
        break;





default:
printf("opcao invalida! \n");
break;
}


break;

case 2:
        printf("2- voce escolheu  Rio de Janeiro \n\n");

        printf("nome da cidade :%s \n \n",rio_de_janeiro);
printf("codigo da cidade: %c \n \n", codigo2);
printf("numero da cidade:%d \n \n",numerocidade2);
printf("populacao de rio de janeiro: %u \n \n",populacao2);
printf(" area de rio de janeiro:%.2lf \n \n", area2);
printf("PIB de rio de janeiro:%.2lf \n\n", PIB2);
printf("pontos turisticos de rio de janeiro:%d \n\n",pontosturisticos2);
printf(" densidade populacional de rio de janeiro:%f \n\n",densidadepopulacional2);
printf("PIBpercapita de rio de janeiro:%.2lf \n \n",PIBpercapita2);
printf("superpoder de rio de janeiro:%.2lf \n \n", superpoder2);
printf("==================================================================================================================================");

// exibição das opções do menu para comparar atributos

printf("escolha qual atributo comparar (digite o numero para escolher) \n\n");

printf("1. populacao de rio de janeiro: %u \n \n",populacao2);
printf("2.area de rio de janeiro:%.2lf \n \n", area2);
printf("3.PIB de janeiro:%.2lf \n \n", PIB2);
printf("4.pontos turisticos de rio de janeiro:%d \n\n",pontosturisticos2);
printf("5.densidade populacional de rio de janeiro:%f \n \n",densidadepopulacional2);
scanf("%d",&escolhadoatributo);

switch (escolhadoatributo)
{
        //comparação de população de rio de janeiro
case 1 :
        printf("sua escolha foi populacao");
        if(populacao2 > populacao1){
                printf("rio de janeiro venceu essa rodada, quesito populacao! \n \n");
        }else if(populacao2 < populacao1){
                printf("sao paulo venceu essa rodada, quesito populacao! \n \n");
        } else { 
                printf("empate nessa rodada no quesito populacao! \n\n");
        }
        break;

        //comparação de area de rio de janeiro
        case 2 :
        printf("sua escolha foi area");
        if(area1 > area2){
                printf("rio de janeiro venceu essa rodada, quesito area! \n\n");
        }else if(area1 < area2){
                printf("sao paulo venceu essa rodada, quesito area! \n\n");
        }else{
                printf("empate nessa rodada no quesito area! \n\n");
        }
        break;

        // comparação de PIB de rio de janeiro
        case 3 :
        printf("sua escolha foi PIB");
        if(PIB2 > PIB1){
                printf("rio de janeiro venceu essa rodada, quesito PIB! \n\n");
        }else if(PIB2 < PIB1){
                printf("sao paulo venceu essa rodada, quesito PIB! \n\n");
        }else{
                printf("empate nessa rodada no quesito PIB! \n\n");
        }
        break;

        //comparação pontos turisticos de rio de janeiro
        case 4 :
        printf("sua escolha foi pontos turisticos");
        if(pontosturisticos2 > pontosturisticos1){
                printf("rio de janeiro venceu essa rodada, quesito pontos turisticos! \n\n");
        }else if(pontosturisticos2 < pontosturisticos1){
                printf("sao paulo venceu essa rodada, quesito pontos turisticos! \n\n");
        }else{
                printf("empate nessa rodada no quesito pontos turisticos! \n\n");
        }
        break;
        
        //comparação densidade populacional rio de janeiro
        case 5 :
                printf("sua escolha foi densidade populacional\nn");
        if(densidadepopulacional2 < densidadepopulacional1){
                printf("rio de janeiro venceu essa rodada, quesito densidade populacional! \n\n");
        }else if(densidadepopulacional2 > densidadepopulacional1){
                printf("sao paulo venceu essa rodada, quesito densidade populacional! \n\n");
        }else{
                printf("empate nessa rodada no quesito densidade populacional! \n\n");
}
        break;

default:
        printf("opcao invalida!");
break;

}

return 0;
}
};