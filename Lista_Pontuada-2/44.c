//Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foramobtidos os seguintes dados:  
//- código da cidade 
//- estado (RS, SC, PR, SP, RJ, ...) 
//- número de veículos de passeio (em 1992) 
//- número de acidentes de trânsito com vítimas (em 1992) 
//Deseja-se saber: 
//a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
//b) qual a média de veículos nas cidades brasileiras 
//c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.

#include <stdio.h>
#include <string.h>

int main() {
    int i;
    int codigo, veiculos, acidentes;
    char estado[3];

    int totalVeiculos = 0;
    int totalAcidentesRS = 0;
    int cidadesRS = 0;

    int maiorAcidente = -1;
    int menorAcidente = 999999;
    int cidadeMaior, cidadeMenor;

    for (i = 1; i <= 200; i++) {
        printf("\nCidade %d:\n", i);

        printf("Digite o código da cidade: ");
        scanf("%d", &codigo);

        printf("Digite o estado (ex: RS, SC): ");
        scanf("%s", estado);

        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &veiculos);

        printf("Digite o número de acidentes com vítimas: ");
        scanf("%d", &acidentes);

        totalVeiculos += veiculos;

        if (strcmp(estado, "RS") == 0) {
            totalAcidentesRS += acidentes;
            cidadesRS++;
        }

        if (acidentes > maiorAcidente) {
            maiorAcidente = acidentes;
            cidadeMaior = codigo;
        }

        if (acidentes < menorAcidente) {
            menorAcidente = acidentes;
            cidadeMenor = codigo;
        }
    }

    printf("\n--- Resultados ---\n");

    printf("Maior número de acidentes: %d (Cidade %d)\n", maiorAcidente, cidadeMaior);
    printf("Menor número de acidentes: %d (Cidade %d)\n", menorAcidente, cidadeMenor);

    printf("Média de veículos nas 200 cidades: %.2f\n", totalVeiculos / 200.0);

    if (cidadesRS > 0) {
        printf("Média de acidentes com vítimas no RS: %.2f\n", totalAcidentesRS / (float)cidadesRS);
    } else {
        printf("Nenhuma cidade do RS foi informada.\n");
    }

    return 0;
}



