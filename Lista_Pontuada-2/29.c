//Escrever um algoritmo que calcule e mostre a média aritmética dos números lidos entre 13 e 73. 30. Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200. 



#include <stdio.h>


int main (){

    int soma = 0, contador = 0;

    for (int i = 13; i <= 73; i++){
        soma += i;
        contador++;
    }

    float media = soma / (float)contador;

    printf("A media aritmetica dos numeros de 13 a 73 e: %.2f\n", media);

    return 0;
}