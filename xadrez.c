#include <stdio.h>

int main(){

    printf("Carta 01\n");

    char estado[50] = "amazonas";
    char codigo[30] = "Am1";
    char nomedacidade[100] = "manaus";
    unsigned int populacao = "2300000";
    char area[15]=" 2000000";
    long int pib = "103500000";
    int numerosdepontosturisticos = "50";

    printf("Qual o nome do estado: \n");
    scanf("%s", &estado);

    printf("Qual o codigo: \n");
    scanf("%s", &codigo);                            

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Qual a população: \n");
    scanf("%d", &populacao);

    printf("Tamanho da area (KM2): \n");
    scanf("%s",&area);

    printf("Qual o BIP: \n");
    scanf("%ld", &pib);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &numerosdepontosturisticos);

    printf("o nome do estado é: %s - O código é: %s\n", estado, codigo);
    printf("O nome da cidade é: %s - A população é de: %d (milhões)\n", nomedacidade, populacao);
    printf("o tamanho da area é: %skm2 - O PIB é de: (R$) %ld\n", area, pib);
    printf("Numeros de pontos turisticos são de: %d\n", numerosdepontosturisticos);
    
    return 0;

}

