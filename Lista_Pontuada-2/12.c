//Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um deles, calcule a tabuada de 1 até n.Mostre a tabuada na forma: 
//1 x n = n 
//1 of 5 24/06/2025, 11:5
//2 x n = 2n 
//3 x n = 3n 
//....... 
//n x n = n2 


#include <stdio.h>

int main (){

    int n, i, j;

    for (i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &n);

        printf("Tabuada de 1 ate %d:\n", n);
        for (j = 1; j <= n; j++){
            printf("%d x %d = %d\n", j, n, j * n);
        }
        printf("\n");
    }
}
