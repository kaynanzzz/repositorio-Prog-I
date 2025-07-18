#include <stdio.h>

int main() {
    int linhas;

    printf("Digite o número de linhas do Triângulo de Pascal: ");
    scanf("%d", &linhas);

    for (int i = 0; i < linhas; i++) {
        for (int espaco = 0; espaco < linhas - i - 1; espaco++) {
            printf("  ");
        }

        int valor = 1;

        for (int j = 0; j <= i; j++) {
            printf("%4d", valor);
            valor = valor * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
