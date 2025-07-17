//Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e salário.Faça um algoritmo que informe:  
//a) a média de salário do grupo; 
//b) maior e menor idade do grupo; 
//c) quantidade de mulheres com salário até R$100,00. 
//Encerre a entrada de dados quando for digitada uma idade negativa. (Use o comando enquanto-faça e não use vetoresou matrizes)


#include <stdio.h>

int main() {
    int idade, contadorPessoas = 0;
    int maiorIdade, menorIdade;
    char sexo;
    float salario, somaSalarios = 0;
    int mulheresAte100 = 0;
    int primeiraPessoa = 1;

    while (1) {
        printf("Digite a idade (negativa para sair): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);  

        printf("Digite o salario: ");
        scanf("%f", &salario);

        somaSalarios += salario;
        contadorPessoas++;

        if (primeiraPessoa) {
            maiorIdade = idade;
            menorIdade = idade;
            primeiraPessoa = 0;
        } else {
            if (idade > maiorIdade) {
                maiorIdade = idade;
            }
            if (idade < menorIdade) {
                menorIdade = idade;
            }
        }

        if ((sexo == 'F' || sexo == 'f') && salario <= 100) {
            mulheresAte100++;
        }

        printf("\n");
    }

    if (contadorPessoas == 0) {
        printf("Nenhum dado foi inserido.\n");
    } else {
        float mediaSalario = somaSalarios / contadorPessoas;
        printf("Media de salario do grupo: %.2f\n", mediaSalario);
        printf("Maior idade do grupo: %d\n", maiorIdade);
        printf("Menor idade do grupo: %d\n", menorIdade);
        printf("Quantidade de mulheres com salario <= 100: %d\n", mulheresAte100);
    }

    return 0;
}


    
