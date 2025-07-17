//Escrever um algoritmo que lê um número não determinado de pares de valores m,n, todos inteiros e positivos, umpar de cada vez, e calcula e escreve a soma dos n inteiros consecutivos a partir de m inclusive.


#include <stdio.h>

int main() {
    int m, n, i, soma;

    while (1) {
        printf("Digite dois numeros positivos (m e n): ");
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0) {
            break;
        }

        soma = 0;
        for (i = 0; i < n; i++) {
            soma += m + i;
        }

        printf("Soma de %d numeros a partir de %d: %d\n\n", n, m, soma);
    }

    printf("\nPrograma encerrado.\n");
    return 0;
}
