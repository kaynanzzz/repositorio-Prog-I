//Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. Para cadanúmero lido, mostre uma tabela contendo o valor lido e o fatorial deste valor. 

#include <stdio.h>

int main (){

    int n, valor, i, j;
    long int fatorial;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);

        fatorial = 1;
        for (j = 1; j <= valor; j++){
            fatorial *= j;
        }

        printf("Valor: %d | Fatorial: %d\n", valor, fatorial);
    }

    return 0;
}



    
