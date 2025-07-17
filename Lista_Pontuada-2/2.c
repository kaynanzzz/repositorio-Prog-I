//Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.  E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!

#include <stdio.h>

int main() {
    int N;
    double E = 1.0;  

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    long long fatorial = 1;

    for (int i = 1; i <= N; i++) {
        fatorial *= i;              
        E += 1.0 / fatorial;        
    }

    printf("O valor de E é: %.10lf\n", E);

    return 0;
}
