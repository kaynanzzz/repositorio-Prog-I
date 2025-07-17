//Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] equantos deles estão fora do intervalo, escrevendo estas informações. 



#include <stdio.h>

int main (){

    int valor;
    int dentro = 0;
    int fora = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite 10 valores inteiros positivos: ");
        scanf("%d", &valor);

        if(valor >= 10 && valor <= 20){
            dentro++;
        } else {
            fora++;
        }
    }

    printf("Segue os numeros entre [10-20] digitados: %d\n", dentro);
    printf("Segue os numeros que nao estao entre [10-20] digitados: %d\n", fora);

    return 0;
}