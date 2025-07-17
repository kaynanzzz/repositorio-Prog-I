//Faça um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o fatorial de N (N!).

#include <stdio.h>

int main() {
    
    int n;  
    long long fatorial = 1;

    do {
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &n);
    
    
    if (n < 0){
        printf("Numero invalido! Tente novamente.\n");
        
        }
    } while (n < 0);

    for (int i = 1; i <= n; i++){
        fatorial *= i;
    }

    printf("O fatorial de %d e: %d\n", n, fatorial);

    return 0;
}
