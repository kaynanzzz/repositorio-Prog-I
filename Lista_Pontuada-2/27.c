//Escreva um algoritmo que leia 500 valores inteiros e positivos e:  
//a) encontre o maior valor; 
//b) encontre o menor valor; 
//c) calcule a média dos números lidos. 



#include <stdio.h>


int main (){

    int valor, maior, menor;
    float soma = 0;

    
    for(int i = 0; i < 500; i++){
        do {
            printf("Digite o %dº valor inteiro positivo: ", i + 1);
            scanf ("%d", &valor);
        } while (valor <= 0);

        if (i == 0){
            maior = menor = valor;
        }

        if (valor > maior) maior = valor;
        if (valor < menor) menor = valor;

        soma += valor;
    
    }

    float media = soma / 500.0;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d", menor);
    printf("Media dos valores: %f", media);

    return 0;
}


