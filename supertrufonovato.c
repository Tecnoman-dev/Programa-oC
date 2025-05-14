#include <stdio.h>

int main() {
    
    // Variaveis da carta 01 //
    char estadocarta1[10], codigocarta1[4], cidadenome1[10]; // Representa o estado // Representa o cód. da carta // Representa o nome da cidade //
    int populacao1; // Representa a população da cidade //
    float areacidade1; // Representa a área cidade //
    float pib1; // Representa o PIB da cidade //
    int pontost1; // Representa os pontos turisticos da cidade //

    // Variaveis da carta 02 //

    char estadocarta2[10], codigocarta2[4], cidadenome2[10]; // Representa o estado // Representa o cód. da carta // Representa o nome da cidade //
    int populacao2; // Representa a população da cidade //
    float areacidade2; // Representa a área cidade //
    float pib2; // Representa o PIB da cidade //
    int pontost2; // Representa os pontos turisticos da cidade //

    // Armazenar Dados da Carta 01 //

    printf("== Cadastro de Carta 01 == \n");
    printf("Insira o nome do Estado (A-H): ");
    scanf(" %s", estadocarta1);

    printf("Insira o código da carta (ex:A01, B03): \n");
    scanf  (" %s", codigocarta1);

    printf("Insira o nome da Cidade: \n");
    scanf(" %s", cidadenome1);

    printf("Informe a população da cidade: \n");
    scanf(" %d", &populacao1); // OBS: Não pode inseir ponto(.) ou virgula (,) se não pula a linha da pergunta seguinte //

    printf("Informe a área (km²): \n");
    scanf(" %f", &areacidade1); // OBS: Inserir somente ponto(.) para dividir as casas numéricas se não pula a linha da pergunta seguinte //

    printf("Informe o PIB da Cidade: \n");
    scanf(" %f", &pib1); // OBS: Inserir somente ponto(.)para dividir as casas numéricas se não pula a linha da pergunta seguinte //

    printf("Quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &pontost1);

    // Armazenar Dados da Carta 02 //

    printf("== Cadastro de Carta 02 == \n");
    printf("Insira o nome do Estado (A-H): ");
    scanf(" %s", estadocarta2);

    printf("Insira o código da carta (ex:A01, B03): \n");
    scanf  (" %s", codigocarta2);

    printf("Insira o nome da Cidade: \n");
    scanf(" %s", cidadenome2);

    printf("Informe a população da cidade: \n");
    scanf(" %d", &populacao2); // OBS: Não pode inseir ponto(.) ou virgula (,) se não pula a linha da pergunta seguinte //

    printf("Informe a área (km²): \n");
    scanf(" %f", &areacidade2); // OBS: Inserir somente ponto(.) para dividir as casas numéricas se não pula a linha da pergunta seguinte //

    printf("Informe o PIB da Cidade: \n"); 
    scanf(" %f", &pib2); // OBS: Inserir somente ponto(.)para dividir as casas numéricas se não pula a linha da pergunta seguinte //

    printf("Quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &pontost2);

    // Exibição de Dados da Carta 01 //

    printf("== Dados da carta 01 == ");
    printf("Nome do Estado: %s \n", estadocarta1);
    printf("Código da Carta: %s \n", codigocarta1);
    printf("Nome da Cidade: %s \n", cidadenome1);
    printf("População da Cidade: %d \n", populacao1);
    printf("Área da Cidade: %f \n", areacidade1);
    printf("PIB da Cidade: %f \n", pib1);
    printf("Quantidade de pontos turisticos: %d \n", pontost1);

      // Exibição de Dados da Carta 02 //

    printf("== Dados da carta 02 == ");
    printf("Nome do Estado: %s \n", estadocarta2);
    printf("Código da Carta: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", cidadenome2);
    printf("População da Cidade: %d \n", populacao2);
    printf("Área da Cidade: %f \n", areacidade2);
    printf("PIB da Cidade: %f \n", pib2);
    printf("Quantidade de pontos turisticos: %d \n", pontost2);


    
    return 0;
}