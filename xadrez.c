#include <stdio.h>

int main(){

    printf("Carta01\n");

    char estado[50];
    char codigo;
    char nomedacidade[100];
    int populacao;
    float area;
    float pib;
    int numerosdepontosturisticos;

    printf("Qual o nome do estado: \n");
    scanf("%s", &estado);

    printf("Qual o codigo: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Qual a população: \n");
    scanf("%d", &populacao);

    printf("Tamanho da area: \n");
    scanf("%f", &area);

    printf("Qual o BIP: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &numerosdepontosturisticos);

    printf("o nome do estado é: %s", estado, codigo);
    printf("O nome da cidade é: %s - A população é de: %d\n", nomedacidade, populacao);
    printf("o tamanho da area é: %f km - O PIB é de: %f\n", area, pib);
    printf("Numeros de pontos turisticos são de: %d\n", numerosdepontosturisticos);

    return 0;

}
