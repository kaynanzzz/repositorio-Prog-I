//Faça um algoritmo que leia 2 valores inteiros e positivos: X e Y. O algoritmo deve calcular e escrever a função potência X Y.

#include <stdio.h>

int main() {
    int x, y;
    long long resultado = 1;

    do {
        printf("Digite a base (X): ");
        scanf("%d", &x);
    } while (x <= 0);

    do {
        printf("Digite o expoente (Y): ");
        scanf("%d", &y);
    } while (y < 0); 

    for (int i = 1; i <= y; i++) {
        resultado *= x;
    }

    printf("%d elevado a %d = %lld\n", x, y, resultado);

    return 0;
}


