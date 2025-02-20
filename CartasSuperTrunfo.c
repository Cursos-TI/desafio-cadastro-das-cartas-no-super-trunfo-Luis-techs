#include <stdio.h>

int main(){

    // Para cada país usaremos 8 Estados (Os Estados serão dividos pelas letras de A a H); - 13/02/2025
    // Codigo da carta (A01, A02, B03, B04); - 18/02/2025
    // Exemplo: Ceará, cidade: Fortaleza -> F01; - 13/02/2025
    // Calculo da Densidade Populacional e PIB per Capita; - 18/02/2025
    // Implementando Super Poder que é a soma da População, Area, PIB, Pontos turisticos, Densidade e per Capita; - 18/02/2025
    // Implementando a logiod o jogo Super Trunfo; - 20/02/2025
    // E algumas modificação na identação do codigo; - 20/20/2025

    char Estado[50];
    char codigo[10];
    char Cidade[50];
    unsigned int populacao;
    float Area;
    float PIB;
    int Turismo;
    float densidade;
    float percapita;
    float superpoder;

    printf("*** Seja bem vindo(a) ao jogo Super-Trunfo! ***\n");
    printf("*** Cadastro da primeira carta ***\n");
    printf("Escolha um Estado!!\n");
    printf("Digite o nome do Estado escolhido: ");
    scanf(" %s", &Estado);

    printf("Digite o código do carta (A01, A02, B03, BO4): ");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a População do Cidade: ");
    scanf("%u", &populacao);

    printf("Digite a Area do Cidade: ");
    scanf("%f", &Area);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Turismo);

    superpoder = (float) populacao + Area + PIB + Turismo;

    densidade = populacao / Area;
    percapita = PIB / populacao;


    printf("Nome do Estado: %s\n", Estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %u\n", populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Pontos de turismo: %d\n", Turismo);
    printf("Densidade Populacional: %f\n", densidade);
    printf("PIB per Capita: %f\n", percapita);
    printf("Super Poder: %f\n\n", superpoder);


    char Estado2[50];
    char codigo2[10];
    char Cidade2[50];
    unsigned int populacao2;
    float Area2;
    float PIB2;
    int Turismo2;
    float densidade2;
    float percapita2;
    float superpoder2;

    printf("*** Cadastro da segunda carta ***\n");
    printf("Escolha o segundo Estado!!\n");
    printf("Digite o nome do Estado escolhido: ");
    scanf(" %s", &Estado2);

    printf("Digite o código do carta (A01, A02, B03, BO4): ");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &Cidade2);

    printf("Digite a População do Cidade: ");
    scanf("%u", &populacao2);

    printf("Digite a Area do Cidade: ");
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Turismo2);

    superpoder2 = (float) populacao2 + Area2 + PIB2   + Turismo2;

    densidade2 = populacao2 / Area2;
    percapita2 = PIB2 / populacao2;

    printf("Nome do Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos de turismo: %d\n", Turismo2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", percapita2);
    printf("Super Poder: %f\n\n", superpoder2);


    printf("*** Comparação das Cartas ***\n");
    printf("1 para VERDADEIRO e 0 para FALSO\n");
    printf("A população da carta %s é maior que a carta %s\n", codigo, codigo2);
    printf("%d\n", (int) populacao > populacao2);
    printf("A Área da carta %s é maior que a carta %s\n", codigo, codigo2);
    printf("%d\n", (int) Area >  Area2);
    printf("O PIB da carta %s é maior que a carta %s\n", codigo, codigo2);
    printf("%d\n", (int) PIB >  PIB2);
    printf("A quantidade de pontos turisticos da carta %s é maior que a carta %s\n", codigo, codigo2);
    printf("%d\n", (int) Turismo >  Turismo2);
    printf("A densidade da carta %s é maior que a densidade da carta %s\n", codigo, codigo2);
    printf("%d\n", (int) densidade >  densidade2);
    printf("O per Capita da carta %s é maior que o per Capita da carta %s\n", codigo, codigo2);
    printf("%d\n", (int) percapita >  percapita2);
    printf("O Super Poder da carta %f é maior que o Super Poder da carta %f\n", superpoder > superpoder2);
    printf("%d\n\n", (int) superpoder > superpoder2);

    printf("*** Definindo vencedor pela População ***\n");
    if (populacao > populacao2){
        printf("A carta %s é a ganhadora !!!", codigo);
    }else{
        printf("A carta %s é a ganhadora !!!", codigo2);
    }







}