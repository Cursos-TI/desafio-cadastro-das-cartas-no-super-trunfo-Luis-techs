#include <stdio.h>


// Inicio da estrutura do código

int main(){



    // Criando as variáveis que serão utilizadas para a funcionalidade do programa;

    int resultado;
    int resultado2;

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

    int escolha;
    int escolha2;


    // Criando menu interativo para o usuário;

    printf("*** JOGO SUPER - TRUNFO ***\n");
    printf("Escola uma das opções abaixo\n");
    printf("1 - Ler as Regras\n");
    printf("2 - Iniciar o jogo\n");
    printf("3 - Encerrar o jogo\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Regra 1: Você vai cadastrar duas cartas colocando todos os atributos dela\n");
            printf("Regra 2: Após cadastrar as duas cartas você vai escolher qual atributo vai ser comparado para definir o vencedor\n");
            break;
        
        case 2:
         
    // Recebendo os dados do usuário;

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
    
    // Calculando atributos;
            
            superpoder = (float) populacao + Area + PIB + Turismo;
    
            densidade = populacao / Area;
            percapita = PIB / populacao;

            printf("\n\n");
    
    // Recebendo os dados do usuário para cadastrar a segunda carta        
            
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

    // Calculando atributos; 
        
            superpoder2 = (float) populacao2 + Area2 + PIB2   + Turismo2;
        
            densidade2 = populacao2 / Area2;
            percapita2 = PIB2 / populacao2;

            printf("\n\n");
            break;

        case 3:
            printf("Jogo encerrado !");
            break;
         
    }

    // Permitindo o usuário escolher qual atributo comparar;

        printf("*** COMPARANDO OS ATRIBUTOS ***\n");
        printf("Escolha o primeiro atributo...\n");
        printf("[1] - População\n");
        printf("[2] - Área\n");
        printf("[3] - PIB\n");
        printf("[4] - Pontos turisticos\n");
        printf("[5] - Super poder\n");
        printf("[6] - Densidade demográfica\n");
        printf("[7] - PIB per capita\n");
        printf("Escolha dois atributos para comparar as cartas: ");
        scanf("%d", &escolha);

        printf("\n");

        switch (escolha){
            case 1: 
                resultado = populacao > populacao2 ? 1 : 0;
                break;
            case 2: 
                resultado = Area > Area2 ? 1 : 0;
                break;
            case 3: 
                resultado = PIB > PIB2 ? 1 : 0;
                break;
            case 4:
                resultado - Turismo > Turismo2 ? 1 : 0;
                break;
            case 5:
                resultado = superpoder > superpoder2 ? 1 : 0;
                break;
            case 6: 
                resultado = densidade < densidade2 ? 1 : 0;
                break;
            case 7:
                resultado = percapita > percapita2 ? 1 : 0;
                break;
            default:
                printf("Opção invalida...");
            

        } 

    // Escolha do segundo atributo a ser comparado  

        printf("*** COMPARANDO OS ATRIBUTOS ***\n");
        printf("Escolha o segundo atributo...\n");
        printf("[1] - População\n");
        printf("[2] - Área\n");
        printf("[3] - PIB\n");
        printf("[4] - Pontos turisticos\n");
        printf("[5] - Super poder\n");
        printf("[6] - Densidade demográfica\n");
        printf("[7] - PIB per capita\n");
        printf("Escolha dois atributos para comparar as cartas: ");
        scanf("%d", &escolha2);

        if (escolha == escolha2){
            printf("Você escolheu atributos iguais...Tente novamente !!");
        }else{
            switch(escolha2){
            case 1: 
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;
        case 2: 
            resultado2 = Area > Area2 ? 1 : 0;
            break;
        case 3: 
            resultado2 = PIB > PIB2 ? 1 : 0;
            break;
        case 4:
            resultado2 - Turismo > Turismo2 ? 1 : 0;
            break;
        case 5:
            resultado2 = superpoder > superpoder2 ? 1 : 0;
            break;
        case 6: 
            resultado2 = densidade < densidade2 ? 1 : 0;
            break;
        case 7:
            resultado2 = percapita > percapita2 ? 1 : 0;
            break;
        default:
                printf("Opção invalida...\n");
        
        }

        if (resultado && resultado2){
            printf("Parabéns, você venceu !!\n");

        }else if (resultado != resultado2){
            printf("Empatou !!\n");
        }else{
            printf("Infelizmente você perdeu !!\n");
        }

}
}
