//Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor negativo.

#include <stdio.h>

int main (){

   int a, soma = 0, contador = 0;
   float media;

    printf("Digite o valor inteiro positivo (ou negativo para parar): ");
    scanf("%d", &a);
    
    while (a >= 0) {
    soma += a;
    contador++;

    printf("Digite um valor inteiro positivo (ou negativo para parar): ");
    scanf("%d", &a);
}
    
if (contador > 0){
        media = (float)soma/contador;
        printf("Media aritimetica dos valores validos %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }

    return 0;
}

    