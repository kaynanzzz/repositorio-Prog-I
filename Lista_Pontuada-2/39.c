//Escrever um algoritmo que gera e escreve os 5 primeiros números perfeitos. Um número perfeito é aquele que éigual a soma dos seus divisores. (Ex.: 6 = 1+2+3; 28= 1+2+4+7+14 etc).


#include <stdio.h>

int main (){

    int num = 2;
    int encontrados = 0;

    printf("Os 5 primeiros numeros perfeitos sao:\n");
    
    while (encontrados < 5) {
        int soma = 0;

        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                soma += i;
            }
        }

        if (soma == num) {
            printf("%d", num);
            encontrados++;
        }

        num++;
    }

    return 0;
}