//Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. 

#include <stdio.h>

int main (){

    double chico = 1.50;
    double ze = 1.10;
    int anos = 0;

    do {
        chico += 0.02;
        ze += 0.03;
        anos++;
    } while (ze <= chico);

    printf("Levara %d anos para Ze seja maior que Chico. \n", anos);
    printf("Altura final de Chico: %.2f m\n", chico);
    printf("Altura final de Ze: %.2f m\n", ze);

    return 0;
}

