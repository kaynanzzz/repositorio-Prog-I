//Escrever um algoritmo que lê 5 pares de valores a, b, todos inteiros e positivos, um par de cada vez, e com a < b,escreve os inteiros pares de a até b, incluindo o a e o b se forem pares. 


#include <stdio.h>

int main() {
    int a, b;

    for (int i = 1; i <= 5; i++) {
        do {
            printf("Par %d - Digite dois valores inteiros positivos (a < b):\n", i);
            printf("a: ");
            scanf("%d", &a);
            printf("b: ");
            scanf("%d", &b);
        } while (a <= 0 || b <= 0 || a >= b);

        printf("Pares entre %d e %d: ", a, b);
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) {
                printf("%d ", j);
            }
        }
        printf("\n\n");
    }

    return 0;
}



