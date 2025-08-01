#include <stdio.h>

int main(){
    //Carta 1:
    char estado1; //Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    int codigoCarta1; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nomeCidade1[20]; //O nome da cidade. Tipo: char[] (string)
    int populacao1; //O número de habitantes da cidade. Tipo: int
    float area1; // (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float PIB1; //O Produto Interno Bruto da cidade. Tipo: float
    int pontosTuristicos1; //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

    //Carta 2:
    char estado2; //Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    int codigoCarta2; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). 
    char nomeCidade2[20]; //O nome da cidade. Tipo: char[] (string)
    int populacao2; //O número de habitantes da cidade. Tipo: int
    float area2; // (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float PIB2; //O Produto Interno Bruto da cidade. Tipo: float
    int pontosTuristicos2; //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

    // Carta 1
    printf("*** Dados da Carta 1 ***: \n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta, um número de 01 a 04: ");
    scanf("%d", &codigoCarta1);

    printf("Digite o nome da Cidade: ");
    scanf(" %s[^\n]", &nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // Carta 2
    printf("*** Dados da Carta 2 ***: \n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, um número de 01 a 04: ");
    scanf("%d", &codigoCarta2);

    printf("Digite o nome da Cidade: ");
    scanf("%s[^\n]", &nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // Exibição dos Dados Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: [%c-%d]\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos Dados Carta 1
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: [%c-%d]\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    return 0;
}
