#include <stdio.h>

int main() {
    int n;

    printf("Digite a metade da altura do losango (ex: 3): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int esp = 1; esp <= n - i; esp++) {
            printf(" ");
        }
        for (int ast = 1; ast <= 2 * i - 1; ast++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int esp = 1; esp <= n - i; esp++) {
            printf(" ");
        }
        for (int ast = 1; ast <= 2 * i - 1; ast++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}