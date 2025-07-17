//Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, a qual coletou osseguintes dados referentes a cada habitante para serem analisados:  
//- sexo (masculino e feminino) 
//- cor dos olhos (azuis, verdes ou castanhos) 
//- cor dos cabelos ( louros, castanhos, pretos) 
//- idade  



#include <stdio.h>


int main (){

    int idade;
    char sexo, corOlhos, corCabelo;

    while(1){
        printf("Digite a idade (negativo para sair): ");
        scanf("%d", &idade);

        if (idade < 0){
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite a cor dos olhos (A-azuis, V-verde ou C-castanhos): ");
        scanf(" %c", &corOlhos);

        printf("Digite a cor dos cabelos (L-loiro, C-castanhos ou P-pretos): ");
        scanf(" %c", &corCabelo);
    
    
    }

    printf("\n");
    return 0;

}
