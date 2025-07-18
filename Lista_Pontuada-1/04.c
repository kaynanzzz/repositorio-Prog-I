#include <stdio.h>

int main() {
    int altura, tipo;

    printf("Digite a altura do quadrado (>= 2): ");
    scanf("%d", &altura);

    if (altura < 2) {
        printf("A altura deve ser maior ou igual a 2.\n");
        return 1;
    }

    printf("Digite 1 para quadrado preenchido ou 2 para vazado: ");
    scanf("%d", &tipo);

    if (tipo != 1 && tipo != 2) {
        printf("Tipo inválido!\n");
        return 1;
    }

    printf("\n");

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (tipo == 1) {
                printf("*");
            } else {
                if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}

