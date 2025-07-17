//Escrever um algoritmo que leia um número não determinado de valores e calcule a média aritmética dos valoreslidos, a quantidade de valores positivos, a quantidade de valores negativos e o percentual de valores negativos e positivos. Mostre os resultados.


#include <stdio.h>

int main (){

    int valor, total = 0, positivos = 0, negativos = 0;
    float soma = 0;

    printf("Digite os valores (0 para encerrar): ");

    while (1) {
        scanf("%d", &valor);

        if (valor == 0)
            break;

        soma += valor;
        total++;

        if (valor > 0)
            positivos++;
        else if (valor < 0)
            negativos++;
    }

    if (total == 0) {
        printf("Nenhum valor foi inserido.\n");
    } else {
        float media = soma / total;
        float perc_positivos = (positivos * 100.00) / total;
        float perc_negativos = (negativos * 100.00) / total;

        printf("\nRESULTADOS:\n");
        printf("Media aritimetica: %.2f\n", media);
        printf("Quantidade de valores positivos: %d\n", positivos);
        printf("Quantidade de valores negativos: %d\n", negativos);
        printf("Quantidade de valores positivos: %.2f\n", perc_positivos);
        printf("Quantidade de valores negativos: %.2f\n", perc_negativos);
    }

    return 0;
}