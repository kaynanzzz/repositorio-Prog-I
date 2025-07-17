//Escrever um algoritmo que lê um número não determinado de valores para m, todos inteiros e positivos, um de cadavez. Se m for par, verificar quantos divisores possui e escrever esta informação. Se m for ímpar e menor do que 10calcular e escrever o fatorial de m. Se m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros de 1 atém.


#include <stdio.h>

int main() {
    int m, i, contDiv, fatorial, soma;

    while (1) {
        printf("Digite um numero inteiro positivo (0 ou negativo para sair): ");
        scanf("%d", &m);

        if (m <= 0) {
            break;
        }

        if (m % 2 == 0) {
            contDiv = 0;
            for (i = 1; i <= m; i++) {
                if (m % i == 0) {
                    contDiv++;
                }
            }
            printf("O numero %d e par e possui %d divisores.\n\n", m, contDiv);
        }

        else if (m < 10) {
            fatorial = 1;
            for (i = 1; i <= m; i++) {
                fatorial *= i;
            }
            printf("O numero %d e impar e seu fatorial e: %d\n\n", m, fatorial);
        }

        else {
            soma = 0;
            for (i = 1; i <= m; i++) {
                soma += i;
            }
            printf("O numero %d e impar >= 10 e a soma de 1 ate %d e: %d\n\n", m, m, soma);
        }
    }

    printf("\nPrograma encerrado.\n");
    return 0;
}

