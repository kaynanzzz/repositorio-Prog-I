//Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).

#include <stdio.h>

int main (){
    int numero, soma = 0, contador = 0;
    float media;

    do {
        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero != 0 && numero % 2 == 0) {
            soma += numero;
            contador++;
        }
    } while (numero != 0);

    if (contador > 0) {
        media = (float)soma / contador;
        printf("Media dos numeros pares: %.2f\n", media);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}

