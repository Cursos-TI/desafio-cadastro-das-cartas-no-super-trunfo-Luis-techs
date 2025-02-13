#include <stdio.h>

int main(){

    // Para cada país usaremos 8 Estados (Os Estados serão dividos pelas letras de A a H)
    // Cada cidade sera numerado de 1 a 4
    // Exemplo: Ceará, cidade Fortaleza -> C01

    char Estado;
    int Cidade;
    float populacao;
    float Area;
    float PIB;
    int Turismo;

    printf("Seja bem vindo (a) ao jogo Super-Trunfo!\n");
    printf("Escolha um Estado!!\n");
    printf("Digite a inicial do Estado escolhido: ");
    scanf(" %c", &Estado);

    printf("Escolha uma cidade do Estado escolhido numerando de 1 a 4: ");
    scanf("%d", &Cidade);

    printf("Digite a População do Cidade: ");
    scanf("%f", &populacao);

    printf("Digite a Area do Cidade m²: ");
    scanf("%f", &Area);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Turismo);

    printf("Código da carta: %c%d\n", Estado, Cidade);
    printf("População: %.9f\n", populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %.9f\n", PIB);
    printf("Pontos de turismo: %d\n", Turismo);

    return 0;

}