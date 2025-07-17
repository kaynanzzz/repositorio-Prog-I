//Escrever um algoritmo que leia um valor X e calcule e mostre os 20 primeiros termos da série:  1 1 1 1 ..... X X2 X3 X4.


#include <stdio.h>
#include <math.h>

int main() {
    float x;
    
    printf("Digite o valor de X: ");
    scanf("%f", &x);

    if (x == 0) {
        printf("Nao é possível dividir por zero!\n");
        return 1;
    }

    printf("Os 20 primeiros termos da serie são:\n");

    for (int i = 1; i <= 20; i++) {
        float termo = 1.0 / pow(x, i);
        printf("1 / %.0f^%d = %.6f\n", x, i, termo);
    }

    return 0;
}


