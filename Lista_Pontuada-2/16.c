//Escrever um algoritmo que lê um conjunto não determinado de valores, um de cada vez, e escreve uma tabela comcabeçalho, que deve ser repetido a cada 20 linhas. A tabela conterá o valor lido, seu quadrado, seu cubo e sua raizquadrada. 


    #include <stdio.h>
#include <math.h>

int main() {
    float valor;
    int contador = 0;

    printf("Valor\tQuadrado\tCubo\t\tRaiz Quadrada\n");
    printf("------------------------------------------------------\n");

    while (1) {
        printf("Digite um valor (negativo para sair): ");
        scanf("%f", &valor);

        if (valor < 0) {
            break; 
        }

        printf("%.2f\t%.2f\t\t%.2f\t\t%.2f\n",
               valor,
               pow(valor, 2),
               pow(valor, 3),
               sqrt(valor));

        contador++;

        if (contador % 20 == 0) {
            printf("\nValor\tQuadrado\tCubo\t\tRaiz Quadrada\n");
            printf("------------------------------------------------------\n");
        }
    }

    printf("\nPrograma encerrado.\n");
    return 0;
}
