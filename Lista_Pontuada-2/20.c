//Faça um algoritmo que leia vários números inteiros e calcule o somatório dos números negativos. O fim da leituraserá indicado pelo número 0.


#include <stdio.h>

int main() {
    int num, somaNegativos = 0;

    while (1) {
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num < 0) {
            somaNegativos += num;
        }
    }

    printf("\nSomatorio dos numeros negativos: %d\n", somaNegativos);

    return 0;
}
