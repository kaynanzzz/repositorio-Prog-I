//Faça um algoritmo que calcule os 20 primeiros números primos, dados os tres primeiros 1,2 e 3. 

#include <stdio.h>
#include <stdbool.h>

int main() {
    int primos[20];
    int count = 3;
    int num = 4;

    primos[0] = 1;
    primos[1] = 2;
    primos[2] = 3;

    while (count < 20) {
        bool ehPrimo = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                ehPrimo = false;
                break;
            }
        }

        if (ehPrimo) {
            primos[count] = num;
            count++;
        }

        num++;
    }

    printf("Os 20 primeiros numeros primos (incluindo 1) sao:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", primos[i]);
    }

    return 0;
}
