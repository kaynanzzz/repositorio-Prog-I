//Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:  S := 1 + 1/2 + 1/3 + 1/4 + ... + 1/n.



#include <stdio.h>

int main() {
    int n;
    float soma = 0.0;

    do {
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("\nS = ");

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;

        if (i == 1) {
            printf("1");
        } else {
            printf(" + 1/%d", i);
        }
    }

    printf(" = %.4f\n", soma);

    return 0;
}



    