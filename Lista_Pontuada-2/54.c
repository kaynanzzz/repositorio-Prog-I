//Faça uma algoritmo que receba 2 numeros e divida o intervalo entre eles em 3 partes iguais. Obs. Faça aconsistência para que os extremos não sejam iguais. 

#include <stdio.h>

int main() {
    float num1, num2, intervalo, parte;

    do {
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        if (num1 == num2) {
            printf("Os numeros nao podem ser iguais. Tente novamente.\n");
        }
    } while (num1 == num2);

    if (num1 > num2) {
        float temp = num1;
        num1 = num2;
        num2 = temp;
    }

    intervalo = num2 - num1;
    parte = intervalo / 3;

    float p1 = num1 + parte;
    float p2 = num1 + 2 * parte;

    printf("\nIntervalo entre %.2f e %.2f dividido em 3 partes:\n", num1, num2);
    printf("1ª parte: %.2f até %.2f\n", num1, p1);
    printf("2ª parte: %.2f até %.2f\n", p1, p2);
    printf("3ª parte: %.2f até %.2f\n", p2, num2);

    return 0;
}
