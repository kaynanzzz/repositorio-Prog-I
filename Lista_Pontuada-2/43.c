//Fazer um algoritmo que leia 5 grupos de 4 valores (A,B,C,D) e mostre-os na ordem lida. Em seguida, ordene-os emordem decrescente e mostre-os novamente, já ordenados.

#include <stdio.h>

int main(){

    int grupo, i, j, temp;
    int valores[4];

    for(grupo = 1; grupo <= 5; grupo++){
        printf("\nGrupo %d\n", grupo);

        for(i = 0; i < 4; i++){
            printf("Digite o valor de %d: ", i + 4);
            scanf("%d", &valores[i]);
        }

        printf("Ordem lida: ");
        for(i = 0; i < 4; i++){
            printf("%d", valores[i]);
        }
        printf("\n");

        for(i = 0; i < 3; i++){
            for(j = 1; j < 4; j++){
                if(valores[i] < valores[j]){
                    temp = valores[i];
                    valores[i] = valores[j];
                    valores[j] = temp;
                }
            }
        }

        printf("Ordem decrescente: ");
        for (i = 0; i < 4; i++){
            printf("%d", valores[i]);
        }
        
        printf("\n");
    }

    return 0;
}