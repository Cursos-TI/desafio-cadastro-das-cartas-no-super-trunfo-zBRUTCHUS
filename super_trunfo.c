#include <stdio.h>

int main(){

    //carta 1
    char Estado1[20];
    char Código1[10];
    char Cidade1[20];
    int População1;
    float Area1;
    float PIB1;
    int Pontos1;

    //carta 2
    char Estado2[20];
    char Código2[10];
    char Cidade2[20];
    int População2;
    float Area2;
    float PIB2;
    int Pontos2;

    //Boas vindas ao jogo
    printf("Olá, Seja muito bem vindo ao SUPER TRUNFO! \n");
    printf("\n");

    //lendos as informações da carta 1 digitadas pelo usuário.
    printf("CARTA 01: \n");
    printf("Digite o nome de um Estado: ");
    scanf("%s", Estado1);

    printf("Digite o Código da Cidade: ");
    scanf("%s", Código1);

    printf("Digite o nome de uma cidade: ");
    scanf("%s", Cidade1);

    printf("Digite o número da População da Cidade: ");
    scanf("%d", &População1);

    printf("Digite a Área da Cidade em km²: ");
    scanf("%f", &Area1);

    printf("Digite o PIB desta Cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos Turísticos da Cidade: ");
    scanf("%d", &Pontos1);
    printf("\n");

    //exibindo as informações digitadas da carta 1
    printf("CARTA 01: \n");
    printf("Estado: %s \n", Estado1);
    printf("Código da cidade: %s \n", Código1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População: %d milhões \n", População1);
    printf("Área: %.2f km² \n", Area1);
    printf("PIB: %.2f Bilhões  \n", PIB1);
    printf("Número de pontos turísticos: %d\n", Pontos1);
    printf("\n");

    // APRESENTAÇÃO DA CARTA 2
    printf("AGORA VAMOS PARA A CARTA 2! ");
    printf("\n");

    //lendo as informações da carta 2 digitadas pelo usuário.
    printf("Digite o nome de um Estado: ");
    scanf("%s", Estado2);

    printf("Digite o Código da cidade: ");
    scanf("%s", Código2);

    printf("Digite o nome de uma cidade: ");
    scanf("%s", Cidade2);

    printf("Digite o número da População da Cidade: ");
    scanf("%d", &População2);

    printf("Digite a Área da Cidade em km²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB desta Cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos Turísticos da Cidade: ");
    scanf("%d", &Pontos2);
    printf("\n");
    
    //exibindo as informações digitadas da carta 2
    printf("CARTA 02: \n"); 
    printf("Estado: %s \n", Estado2);
    printf("Código da cidade: %s \n", Código2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %d milhões \n", População2);
    printf("Área: %.2f km² \n", Area2);
    printf("PIB: %.2f Bilhões  \n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos2);

    return 0;
}