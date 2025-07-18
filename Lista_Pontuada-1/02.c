#include <stdio.h>

int main() {
    int n;

    do {
        printf("Digite o valor de N (>= 2): ");
        scanf("%d", &n);
    } while (n < 2);

    for (int i = 1; i <= n; i++) {
        for (int esp = 1; esp <= n - i; esp++) {
            printf("  ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
