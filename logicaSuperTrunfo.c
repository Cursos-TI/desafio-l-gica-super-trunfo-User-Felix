#include <stdio.h>
#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
#define MAX_NOME 50

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char codigo1[5], codigo2[5];
    char nome1[MAX_NOME], nome2[MAX_NOME];
    long populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;

    printf("ATENÇÃO!!! \nNão use pontos ou virgulas em números!\n [EX: 1234152]\n");

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("\nCadastro da cidade 1:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%lf", &area1);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib1);

    printf("\nCadastro da cidade 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%lf", &area2);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("\nComparando as cidades:\n");
    if (populacao1 > populacao2) {
        printf("%s tem maior população que %s.\n", nome1, nome2);
    } else if (populacao1 < populacao2) {
        printf("%s tem maior população que %s.\n", nome2, nome1);
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }

    if (area1 > area2) {
        printf("%s tem maior área que %s.\n", nome1, nome2);
    } else if (area1 < area2) {
        printf("%s tem maior área que %s.\n", nome2, nome1);
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }

    if (pib1 > pib2) {
        printf("%s tem maior PIB que %s.\n", nome1, nome2);
    } else if (pib1 < pib2) {
        printf("%s tem maior PIB que %s.\n", nome2, nome1);
    } else {
        printf("Ambas as cidades têm o mesmo PIB.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\nResultados:\n");
    int pontos1 = 0, pontos2 = 0;

    if (populacao1 > populacao2) pontos1++; else if (populacao1 < populacao2) pontos2++;
    if (area1 > area2) pontos1++; else if (area1 < area2) pontos2++;
    if (pib1 > pib2) pontos1++; else if (pib1 < pib2) pontos2++;

    if (pontos1 > pontos2) {
        printf("A cidade vencedora é: %s\n", nome1);
    } else if (pontos1 < pontos2) {
        printf("A cidade vencedora é: %s\n", nome2);
    } else {
        printf("Houve um empate entre %s e %s.\n", nome1, nome2);
    }

    return 0;
}
