//Faça um algoritmo que calcule a seguinte soma: H = 10 + 10 + 10 + ... + 10

#include <stdio.h>

int main(){

    int quantidade, i;
    int soma = 0;

    printf("Digite quantas vezes o 10 deve ser somado: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++){
        soma += 10;
    }

    printf("Resultado da soma: %d\n", soma);

    return 0;
}