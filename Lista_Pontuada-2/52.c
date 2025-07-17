//Faça um algoritmo que calcule a combinação e arranjo de um conjunto de tamanho N em subconjuntos de pelementos

#include <stdio.h>

long long fatorial(int num) {
    long long fat = 1;
    for (int i = 1; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n, p;
    long long fat_n, fat_p, fat_n_p;
    long long combinacao, arranjo;

    do {
        printf("Digite o valor de N (tamanho do conjunto): ");
        scanf("%d", &n);
    } while (n < 0);

    do {
        printf("Digite o valor de P (tamanho do subconjunto): ");
        scanf("%d", &p);
    } while (p < 0 || p > n);

    fat_n = fatorial(n);
    fat_p = fatorial(p);
    fat_n_p = fatorial(n - p);

    arranjo = fat_n / fat_n_p;
    combinacao = fat_n / (fat_p * fat_n_p);

    printf("Arranjo A(%d, %d) = %lld\n", n, p, arranjo);
    printf("Combinacao C(%d, %d) = %lld\n", n, p, combinacao);

    return 0;
}
