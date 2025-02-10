#include <stdio.h>

// Definindo a estrutura da carta
typedef struct cartastrunfo
{
    char codigoEstado;  // A, B, C, ..., H
    int numeroCidade;   // 1, 2, 3, 4
    char nome[50];
    int populacao;
    float area;
    double PIB;
    int pontosTuristicos;
} cartastrunfo;

// Função para exibir informações de uma carta
void exibircarta(cartastrunfo carta)
{
    printf("------ Dados da Carta -------\n");
    printf("Codigo da cidade: %c%02d\n", carta.codigoEstado, carta.numeroCidade);
    printf("Nome da cidade: %s\n", carta.nome);
    printf("Populacao da cidade: %d\n", carta.populacao);
    printf("Area da cidade: %.2f km²\n", carta.area);
    printf("PIB da cidade: R$ %.2f bilhoes\n", carta.PIB);
    printf("Pontos turisticos: %d\n", carta.pontosTuristicos);
}

int main()
{
    // Cidades do estado de São Paulo (Brasil)
    cartastrunfo cidadeA1 = {'A', 1, "Sao Paulo", 1000000, 150.0, 10.50, 5};
    cartastrunfo cidadeA2 = {'A', 2, "Campinas", 1500000, 200.0, 15.00, 7};
    cartastrunfo cidadeA3 = {'A', 3, "Sorocaba", 2000000, 250.0, 25.50, 10};
    cartastrunfo cidadeA4 = {'A', 4, "Santos", 2500000, 300.0, 30.00, 12};
    
    // Cidades do estado Jalisco (Mexico)
    cartastrunfo cidadeB1 = {'B', 1, "Guadalajara", 1200000, 160.0, 12.00, 6};
    cartastrunfo cidadeB2 = {'B', 2, "Puerto Vallarta", 1800000, 210.0, 18.00, 8};
    cartastrunfo cidadeB3 = {'B', 3, "Tepatitlan de Morelos", 2300000, 270.0, 35.50, 15};
    cartastrunfo cidadeB4 = {'B', 4, "Lagos de Moreno", 2800000, 320.0, 40.00, 18};
    
    // Cidades do estado Califórnia (EUA)
    cartastrunfo cidadeC1 = {'C', 1, "Los Angeles", 1100000, 170.0, 11.50, 5};
    cartastrunfo cidadeC2 = {'C', 2, "San Francisco", 1600000, 220.0, 20.00, 9};
    cartastrunfo cidadeC3 = {'C', 3, "San Diego", 2100000, 280.0, 27.00, 14};
    cartastrunfo cidadeC4 = {'C', 4, "Sacramento", 2600000, 330.0, 33.00, 16};
    
    // Cidades do estado Moscovo (Russia)
    cartastrunfo cidadeD1 = {'D', 1, "Moscovo", 1300000, 180.0, 13.00, 7};
    cartastrunfo cidadeD2 = {'D', 2, "Sao Petersburgo", 1900000, 230.0, 19.50, 10};
    cartastrunfo cidadeD3 = {'D', 3, "Kazan", 2400000, 290.0, 30.00, 12};
    cartastrunfo cidadeD4 = {'D', 4, "Nizhny Novgorod", 2900000, 350.0, 45.00, 17};
    
    // Cidades do estado Buenos Aires (Argentina)
    cartastrunfo cidadeE1 = {'E', 1, "La Plata", 1400000, 190.0, 14.00, 8};
    cartastrunfo cidadeE2 = {'E', 2, "Mar del Plata", 2000000, 240.0, 20.50, 11};
    cartastrunfo cidadeE3 = {'E', 3, "Tandil", 2500000, 300.0, 32.50, 14};
    cartastrunfo cidadeE4 = {'E', 4, "Bahia Blanca", 3000000, 360.0, 40.00, 19};
    
    // Cidades do estado Ontário (Canada)
    cartastrunfo cidadeF1 = {'F', 1, "Toronto", 900000, 140.0, 9.50, 4};
    cartastrunfo cidadeF2 = {'F', 2, "Ottawa", 1400000, 190.0, 16.00, 6};
    cartastrunfo cidadeF3 = {'F', 3, "Mississauga", 1900000, 250.0, 28.00, 10};
    cartastrunfo cidadeF4 = {'F', 4, "Brampton", 2400000, 310.0, 35.00, 13};
    
    // Cidades do estado província de Tóquio (Japão)
    cartastrunfo cidadeG1 = {'G', 1, "Toquio", 1100000, 160.0, 10.00, 5};
    cartastrunfo cidadeG2 = {'G', 2, "Yokohama", 1700000, 210.0, 18.50, 8};
    cartastrunfo cidadeG3 = {'G', 3, "Kawasaki", 2200000, 270.0, 30.00, 12};
    cartastrunfo cidadeG4 = {'G', 4, "Chiba", 2700000, 330.0, 40.00, 16};
    
    // Cidades da municipalidade de Pequim (China)
    cartastrunfo cidadeH1 = {'H', 1, "Dongcheng", 950000, 130.0, 8.00, 3};
    cartastrunfo cidadeH2 = {'H', 2, "Chaoyang", 1450000, 180.0, 14.50, 7};
    cartastrunfo cidadeH3 = {'H', 3, "Haidian", 1900000, 240.0, 23.00, 10};
    cartastrunfo cidadeH4 = {'H', 4, "Fengtai", 2300000, 300.0, 35.00, 13};

    // Exibindo todas as cartas
    cartastrunfo todasCidades[] = {cidadeA1, cidadeA2, cidadeA3, cidadeA4,
                                    cidadeB1, cidadeB2, cidadeB3, cidadeB4,
                                    cidadeC1, cidadeC2, cidadeC3, cidadeC4,
                                    cidadeD1, cidadeD2, cidadeD3, cidadeD4,
                                    cidadeE1, cidadeE2, cidadeE3, cidadeE4,
                                    cidadeF1, cidadeF2, cidadeF3, cidadeF4,
                                    cidadeG1, cidadeG2, cidadeG3, cidadeG4,
                                    cidadeH1, cidadeH2, cidadeH3, cidadeH4};

    // Laço que percorre todas as cartas e exibe os dados
    for (int i = 0; i < 32; i++) {
        exibircarta(todasCidades[i]);
    }

    return 0;
};



}
