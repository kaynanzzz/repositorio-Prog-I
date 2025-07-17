//Faça um algoritmo que determine e escreva:  
//- a maior idade dos habitantes 
//- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhosverdes e cabelos louros. 
//O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade. 



#include <stdio.h>


int main (){

    int idade, maiorIdade = 0, contadormulher = 0;
    char sexo, corOlhos, corCabelo;

    while(1){
        printf("Digite a sua idade (-1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1){
            break;
        }

        if (idade > maiorIdade){
            maiorIdade = idade;
        }
        
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite a cor dos olhos (A-azuis, V-verdes, C-castanhos): ");
        scanf(" %c", &corOlhos);

        printf("Digite a cor dos cabelos (L-loiro, C-castanho, P-preto): ");
        scanf(" %c", &corCabelo);

        if (sexo == 'F' || sexo == 'f'){
            if (idade >= 18 && idade <= 35 &&
                (corOlhos == 'V' || corOlhos == 'v') &&
                (corCabelo == 'L' || corCabelo == 'l')) {
                    contadormulher++;
                }
            }

            printf("\n");
        }

        printf("\n--- RESULTADO FINAL ---\n");
        printf("Maior idade encontrada: %d\n", maiorIdade);
        printf("Quantidade de mulheres (18-35 anos, olhos verdes e cabelos loiros): %d\n", contadormulher);

        return 0;
    }