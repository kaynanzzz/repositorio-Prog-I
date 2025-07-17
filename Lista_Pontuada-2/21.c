// Faça um algoritmo que leia vários números inteiros e positivos e calcule o produtório dos números pares. O fim daleitura será indicado pelo número 0


#include <stdio.h>


int main (){

    int num;
    long long int produtorio = 1;
    int encontroupar = 0;

    while(1) {
        printf("Digite um numero par (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        
        if (num > 0 && num % 2 == 0) {
            produtorio *= num;
            encontroupar = 1;
        }
    }

        if (encontroupar) {
            printf("\nProdutorio dos numeros pares: %ld\n", produtorio);
        } else {
            printf("\nNenhum numero par foi digitado.\n");
        }

        return 0;
    }


