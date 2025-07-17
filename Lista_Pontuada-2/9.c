//Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado

#include <stdio.h>

int main(){

    int valor, maior, menor;

    for (int i = 0; i < 50; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
    
        if (i == 0){
            maior = valor;
            menor = valor;
        } else {
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor){
                menor = valor;
        }
    }
}

printf("\nMaior valor digitado: %d\n", maior);
printf("\nMenor valor digitado: %d\n", menor);

return 0;

}
