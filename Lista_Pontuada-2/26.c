//Escreva um algoritmo que gere o números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto igual a 5.



#include <stdio.h>

int main() {
    
    int divididos = 0;

    for (int numeros = 1000; numeros <= 1999; numeros++) {
        if (numeros % 11 == 5) {
            printf("%d\n", numeros);
            divididos++;
        }
    }

    printf("\n--- RESULTADO FINAL ---\n");
    printf("A quantidade total de numeros divididos por 11 com resto igual a 5: %d\n", divididos);

    return 0;
}
