#include <stdio.h>

int main(){

    //carta 1
    char estado1[20];
    char codigo1[10];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //carta 2
    char estado2[20];
    char codigo2[10];
    char Cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //Boas vindas ao jogo
    printf("Olá, Seja muito bem vindo ao SUPER TRUNFO! \n");
    printf("\n");

    //lendos as informações da carta 1 digitadas pelo usuário.
    printf("CARTA 01: \n");
    printf("Digite o nome de um Estado: ");
    scanf("%s", estado1);

    printf("Digite o Código da Cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número da População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB desta Cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos Turísticos da Cidade: ");
    scanf("%d", &pontos1);
    printf("\n");

    //exibindo as informações digitadas da carta 1
    printf("CARTA 01: \n");
    printf("Estado: %s \n", estado1);
    printf("Código da cidade: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d milhões \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f Bilhões  \n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("\n");

    // APRESENTAÇÃO DA CARTA 2
    printf("AGORA VAMOS PARA A CARTA 2! ");
    printf("\n");

    //lendo as informações da carta 2 digitadas pelo usuário.
    printf("Digite o nome de um Estado: ");
    scanf("%s", estado2);

    printf("Digite o Código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número da População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB desta Cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos Turísticos da Cidade: ");
    scanf("%d", &pontos2);
    printf("\n");
    
    //exibindo as informações digitadas da carta 2
    printf("CARTA 02: \n"); 
    printf("Estado: %s \n", estado2);
    printf("Código da cidade: %s \n", Codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d milhões \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f Bilhões  \n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);

    return 0;
}