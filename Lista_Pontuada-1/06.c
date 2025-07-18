#include <stdio.h>

int main() {
    int B, L, A;

    do {
        printf("Digite o valor da base B (ímpar e >= 3): ");
        scanf("%d", &B);
        if (B < 3 || B % 2 == 0) {
            printf("Valor inválido para B!\n");
        }
    } while (B < 3 || B % 2 == 0);

    do {
        printf("Digite a largura do tronco L (ímpar, >=1 e <= B/2): ");
        scanf("%d", &L);
        if (L < 1 || L % 2 == 0 || L > B / 2) {
            printf("Valor inválido para L!\n");
        }
    } while (L < 1 || L % 2 == 0 || L > B / 2);

    do {
        printf("Digite a altura do tronco A (>=2 e <= B/2): ");
        scanf("%d", &A);
        if (A < 2 || A > B / 2) {
            printf("Valor inválido para A!\n");
        }
    } while (A < 2 || A > B / 2);

    for (int i = 1; i <= B; i += 2) {
        int espacos = (B - i) / 2;
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    int espacos_tronco = (B - L) / 2;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < espacos_tronco; j++) {
            printf(" ");
        }
        for (int j = 0; j < L; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
