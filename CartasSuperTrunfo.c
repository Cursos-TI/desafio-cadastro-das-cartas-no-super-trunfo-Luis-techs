#include <stdio.h>

int main(){

    // Para cada país usaremos 8 Estados (Os Estados serão dividos pelas letras de A a H) - 13/02/2025
    // Codigo da carta (A01, A02, B03, B04) - 18/02/2025
    // Exemplo: Ceará, cidade: Fortaleza -> F01 - 13/02/2025
    // Calculo da Densidade Populacional e PIB per Capita - 18/02/2025

    char Estado[50];
    char codigo[10];
    char Cidade[50];
    float populacao;
    float Area;
    float PIB;
    int Turismo;
    float densidade;
    float percapita;

    printf("Seja bem vindo(a) ao jogo Super-Trunfo!\n");
    printf("Escolha um Estado!!\n");
    printf("Digite o nome do Estado escolhido: ");
    scanf(" %s", &Estado);

    printf("Digite o código do carta (A01, A02, B03, BO4): ");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a População do Cidade: ");
    scanf("%f", &populacao);

    printf("Digite a Area do Cidade: ");
    scanf("%f", &Area);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Turismo);

    densidade = populacao / Area;
    percapita = PIB / populacao;


    printf("Nome do Estado: %s\n", Estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Pontos de turismo: %d\n", Turismo);
    printf("Densidade Populacional: %f", densidade);
    printf("PIB per Capita: %f", percapita);




}