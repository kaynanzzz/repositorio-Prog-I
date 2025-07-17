//Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade denúmeros pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará aleitura será zero. 


#include <stdio.h>

int main() {
    int num;
    int pares = 0, impares = 0, totalNum = 0;
    int somaPares = 0, somaTotal = 0;

    while (1) {
        printf("Digite um numero positivo (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        totalNum++;
        somaTotal += num;

        if (num % 2 == 0) {
            pares++;
            somaPares += num;
        } else {
            impares++;
        }
    }

    if (totalNum == 0) {
        printf("Nenhum numero foi digitado.\n");
    } else {
        float mediaPares = pares > 0 ? (float)somaPares / pares : 0;
        float mediaGeral = (float)somaTotal / totalNum;

        printf("\nQuantidade de pares: %d\n", pares);
        printf("Quantidade de impares: %d\n", impares);
        printf("Media dos pares: %.2f\n", mediaPares);
        printf("Media geral: %.2f\n", mediaGeral);
    }

    return 0;
}
