#include <stdio.h>


// Inicio da estrutura do código

int main(){



    // Criando as variáveis que serão utilizadas para a funcionalidade do programa;

    int resultado;

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


    // Comparados os atributos de cada carta para definir a vencedora;

        printf("*** COMPARAÇÃO DAS CARTAS ***\n");

        resultado = populacao > populacao2 ? 1 : 0;

        printf("** POPULAÇÃO **\n");
        if (resultado == 1){
            printf("A carta %s é a ganhadora !!\n", codigo);
        }else{
            printf("A carta %s é a ganhadora !!\n", codigo2);
        }

        resultado = Area > Area2 ? 1 : 0;

        printf("** ÁREA **\n");
        if (resultado == 1){
            printf("A carta %s é a ganhadora !!\n", codigo);
        }else{
            printf("A carta %s é a ganhadora !!\n", codigo2);
        }

        resultado = PIB > PIB2 ? 1 : 0;

        printf("** PIB **\n");
        if (resultado == 1){
            printf("A carta %s é a ganhadora !!\n", codigo);
        }else{
            printf("A carta %s é a ganhadora !!\n", codigo2);
        }
    
        resultado = Turismo > Turismo2 ? 1 : 0;

        printf("** PONTOS TURISTICOS **\n");
        if (resultado == 1){
            printf("A carta %s é a ganhadora !!\n", codigo);
        }else{
            printf("A carta %s é a ganhadora !!\n", codigo2);
        }

        resultado = superpoder > superpoder2 ? 1 : 0;

        printf("** SUPER PODER **\n");
        if (resultado == 1){
            printf("A carta %s é a ganhadora !!\n", codigo);
        }else{
            printf("A carta %s é a ganhadora !!\n", codigo2);
        }

        resultado = densidade < densidade2 ? 1 : 0;

        printf("** DENSIDADE **\n");
        if (resultado == 1){
            printf("A carta %s é a ganhadora !!\n", codigo);
        }else{
            printf("A carta %s é a ganhadora !!\n", codigo2);
        }

        resultado = percapita > percapita2 ? 1 : 0;

        printf("** PIB PER CAPITA **\n");
        if (resultado == 1){
            printf("A carta %s é a ganhadora !!\n", codigo);
        }else{
            printf("A carta %s é a ganhadora !!\n", codigo2);
        }
}
}
    
    
