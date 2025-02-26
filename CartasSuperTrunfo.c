#include <stdio.h>

int main(){


    // Para cada país usaremos 8 Estados (Os Estados serão dividos pelas letras de A a H); - 13/02/2025
    // Codigo da carta (A01, A02, B03, B04); - 18/02/2025
    // Exemplo: Ceará, cidade: Fortaleza -> F01; - 13/02/2025
    // Calculo da Densidade Populacional e PIB per Capita; - 18/02/2025
    // Implementando Super Poder que é a soma da População, Area, PIB, Pontos turisticos, Densidade e per Capita; - 18/02/2025
    // Implementando a logiod o jogo Super Trunfo; - 20/02/2025
    // E algumas modificação na identação do codigo; - 20/20/2025
    // Introduzindo o menu interativo; - 23/02/2025
    // Mudança da função scanf para gets nas entradas de dados (Estado e Cidade); - 23/02/2025
    // Mudança do GETS para SCANF (Estado e Cidade) novamente; - 26/02/2025
    // Introdução da estrutura de repetição Do-While; - 26/02/2024
    // Falta ainda implemente a comparação de dois atributos; - 





    int opcao, opcao2;

    char Estado[100];
    char codigo[10];
    char Cidade[100];
    unsigned int populacao;
    float Area;
    float PIB;
    int Turismo;
    float densidade;
    float percapita;
    float superpoder;

    char Estado2[100];
    char codigo2[10];
    char Cidade2[100];
    unsigned int populacao2;
    float Area2;
    float PIB2;
    int Turismo2;
    float densidade2;
    float percapita2;
    float superpoder2;



    do{
    
    printf("*** JOGO SUPER - TRUNFO ***\n");
    printf("1 - Ler as Regras...\n");
    printf("2 - Cadastrar a primeira carta\n");
    printf("3 - Mostrar os valores da primeira carta\n");
    printf("4 - Cadastrar a segunda carta\n");
    printf("5 - Mostrar os valores da segunda carta\n");
    printf("6 - Escolher os atributos que serão somados\n");
    printf("7 - Sair do jogo\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &opcao);
    printf("\n\n");

    switch(opcao){
        case 1: 

            printf("Regra 1: Você vai cadastrar duas cartas colocando todos os atributos dela\n");
            printf("Regra 2: Após cadastrar as duas cartas você vai escolher qual atributo vai ser comparado para definir o vencedor\n");
            
            break;
        case 2:

            printf("Digite o nome do Estado: ");
            scanf(" %s", &Estado);

            printf("Digite o código do carta (AO1, AO2, BO3, BO4): ");
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

            printf("\n\n");

            break;
        case 3:

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

            printf("\n\n");

            break;            
        case 4:


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

            printf("\n\n");

            break;
        case 5:

            
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

            printf("\n\n");

            break;
        case 6:
        printf("*** JOGO SUPER - TRUNFO ***\n");
        printf("Escola um dos atributos parar decidir a carta vencedora\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per capita\n");
        printf("7 - Super Poder\n");
        printf("Digite uma das opções acima: ");
        scanf("%d", &opcao2);
    
    
        switch(opcao2){
            case 1:
                if (populacao > populacao2){
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo);
                }else{
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo2);
                }
                break;
            case 2:
                if (Area > Area2){
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo);
                }else{
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo2);
                }
                break;
            case 3:
                if (PIB > PIB2){
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo);
                }else{
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo2);
                }
                break;
            case 4:
                if (Turismo > Turismo2){
                printf("\nA carta %s foi a ganhadora !!\n\n", codigo);
                }else{
                printf("\nA carta %s foi a ganhadora !\n\n", codigo2);
                }
                break;
            case 5:
                if (densidade < densidade2){
                printf("\nA carta %s foi a ganhadora !!\n\n", codigo);
                }else{
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo2);
                }
                break;
            case 6:
                if (percapita > percapita2){
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo);
                }else{
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo2);
                }
                break;
            case 7:
                if (superpoder > superpoder2){
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo);
                }else{
                    printf("\nA carta %s foi a ganhadora !!\n\n", codigo2);
                }
                break;

            }
    }    
            
    }while(opcao != 7);

    printf("Saindo do jogo...");
}
    
    
