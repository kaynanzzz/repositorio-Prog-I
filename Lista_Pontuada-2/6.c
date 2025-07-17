//Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  
//- 1,2,3,4 = voto para os respectivos candidatos; 
//- 5 = voto nulo; 
//- 6 = voto em branco; 
//Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva: - total de votos para cada candidato; 
//- total de votos nulos; 
//- total de votos em branco; 
//Como finalizador do conjunto de votos, tem-se o valor 0.

#include <stdio.h>

int main (){

    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int nulo = 0, branco = 0;

    do {
        printf("Digite o codigo do voto (1 a 6) ou 0 para encerrar: ");
        scanf("%d", &voto);

        switch (voto) {
            case 1: candidato1++; break;
            case 2: candidato2++; break;
            case 3: candidato3++; break;
            case 4: candidato4++; break;
            case 5: nulo++; break;
            case 6: branco++;break;
            case 0: break;
            default:
                printf("Codigo invalido! Tente novamente.\n");
        }

    } while (voto != 0);

    printf("\nResultado da Eleicao\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Votos nulos: %d votos\n", nulo);
    printf("Votos em branco: %d votos\n", branco);

    return 0;

}
