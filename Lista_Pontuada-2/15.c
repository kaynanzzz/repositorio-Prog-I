//Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nosseguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um númeronegativo. 


#include <stdio.h>

int main (){

    int valor, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    printf("Digite os valores (n.º negativo para encerrar): ");

    while (1) {
        scanf("%d", &valor);

    if (valor < 0)
        break;
    
    if (valor >= 0 && valor <= 25)
        intervalo1++;
    else if (valor >= 26 && valor <= 50)
        intervalo2++;
    else if (valor >= 51 && valor <= 75)
        intervalo3++;
    else if (valor >= 76 && valor <= 100)
        intervalo4++;
    }

    printf("\nRESULTADOS:\n");
    printf("Os n.ºs pertencentes ao intervalo 1 [0-25]: %d\n", intervalo1);
    printf("Os n.ºs pertencentes ao intervalo 2 [26-50]: %d\n", intervalo2);
    printf("Os n.ºs pertencentes ao intervalo 3 [51-75]: %d\n", intervalo3);
    printf("Os n.ºs pertencentes ao intervalo 4 [76-100]: %d\n", intervalo4);
}

    