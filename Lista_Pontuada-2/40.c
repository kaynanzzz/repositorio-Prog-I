//Escrever um algoritmo que lê um valor n que indica quantos valores devem ser lidos para m, valores inteiros epositivos, com leitura de um valor de cada vez. Escreva uma tabela contendo o valor lido, o somatório dos inteiros de 1até m e o fatorial de m. 


#include <stdio.h>

int main() {
    int n, m, i, j;
    int soma, fatorial;

    printf("Quantos valores voce deseja ler? ");
    scanf("%d", &n);

    printf("\n%-10s%-20s%-20s\n", "Valor", "Somatorio (1 a m)", "Fatorial de m");
    printf("--------------------------------------------------------\n");

    for (i = 1; i <= n; i++) {
        printf("\nDigite o valor inteiro positivo %d: ", i);
        scanf("%d", &m);

        soma = 0;
        for (j = 1; j <= m; j++) {
            soma += j;
        }

        fatorial = 1;
        for (j = 1; j <= m; j++) {
            fatorial *= j;
        }

        printf("%-10d%-20d%-20d\n", m, soma, fatorial);
    }

    return 0;
}


    