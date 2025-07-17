//Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.

#include <stdio.h>

int main() {
    printf("Numeros impares entre 100 e 200:\n");

    for (int i = 100; i <= 200; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}


    