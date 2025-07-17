//Escrever um algoritmo que calcula e escreve o produto dos números primos entre 92 e 1478.


#include <stdio.h>

int main (){

    long long int produto = 1;

    for (int i = 92; i <= 1478; i++){
    int primo = 1;

    if (i < 2) continue;

    for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0){
            primo = 0;
            break;
        }
    }

    if (primo) {
        produto *= i;
    }
}

printf("O produto dos numeros primos entre [92-1478] e: %llu\n", produto);

return 0;

}
