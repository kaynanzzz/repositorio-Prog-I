#include <stdio.h>

int main() {
    int altura, tipo;

    printf("Digite a altura do triângulo (>= 2): ");
    scanf("%d", &altura);

    if (altura < 2) {
        printf("Altura inválida! Deve ser maior ou igual a 2.\n");
        return 1;
    }

    printf("Digite 1 para triângulo preenchido ou 2 para triângulo vazado: ");
    scanf("%d", &tipo);

    if (tipo != 1 && tipo != 2) {
        printf("Tipo inválido!\n");
        return 1;
    }

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            if (tipo == 1) {
                printf("*");
            } else {
                if (j == 1 || j == i || i == altura) {
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
