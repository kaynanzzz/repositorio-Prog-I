//Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados: sexo (0-feminino, 1-masculino), idade e altura. Faça um algoritmo que leia as informações coletadas e mostre as seguintes informações:(use o comando repita-até)  
//a) média da idade do grupo; 
//b) média da altura das mulheres; 
//c) média da idade dos homens; 
//d) percentual de pessoas com idade entre 18 e 35 anos (inclusive). 

#include <stdio.h>

int main() {
    int i = 0, sexo, idade;
    float altura;

    int somaIdadeGeral = 0;
    int qtdHomens = 0, somaIdadeHomens = 0;
    int qtdMulheres = 0;
    float somaAlturaMulheres = 0;
    int entre18e35 = 0;

    do {
        printf("\nPessoa %d:\n", i + 1);

        do {
            printf("Sexo (0=feminino, 1=masculino): ");
            scanf("%d", &sexo);
        } while (sexo != 0 && sexo != 1);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        somaIdadeGeral += idade;

        if (sexo == 1) {
            somaIdadeHomens += idade;
            qtdHomens++;
        }

        if (sexo == 0) {
            somaAlturaMulheres += altura;
            qtdMulheres++;
        }

        if (idade >= 18 && idade <= 35) {
            entre18e35++;
        }

        i++;
    } while (i < 1000);

    float mediaIdadeGeral = somaIdadeGeral / 1000.0;
    float mediaAlturaMulheres = (qtdMulheres > 0) ? somaAlturaMulheres / qtdMulheres : 0;
    float mediaIdadeHomens = (qtdHomens > 0) ? somaIdadeHomens / (float)qtdHomens : 0;
    float percentual1835 = (entre18e35 / 1000.0) * 100;

    printf("\n----- RESULTADOS -----\n");
    printf("a) Média da idade do grupo: %.2f anos\n", mediaIdadeGeral);
    printf("b) Média da altura das mulheres: %.2f m\n", mediaAlturaMulheres);
    printf("c) Média da idade dos homens: %.2f anos\n", mediaIdadeHomens);
    printf("d) Percentual com idade entre 18 e 35 anos: %.2f%%\n", percentual1835);

    return 0;
}




