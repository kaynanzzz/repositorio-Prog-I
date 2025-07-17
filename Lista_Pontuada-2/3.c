//A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  
//a) média do salário da população; 
//b) média do número de filhos; 
//c) maior salário; 
//d) percentual de pessoas com salário até R$100,00. 
//O final da leitura de dados se dará com a entrada de um salário negativo.

#include <stdio.h>

int main() {

    float salario, soma_salario = 0, maior_salario = 0;
    int num_filhos, soma_filhos = 0;
    int total_pessoas = 0, salario_ate_100 = 0;

    do {
        printf("Digite o salário (valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break; 
        }

        printf("Digite o número de filhos: ");
        scanf("%d", &num_filhos);

        soma_salario += salario;

        soma_filhos += num_filhos;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario <= 100) {
            salario_ate_100++;
        }

        total_pessoas++;

    } while (1);  

    if (total_pessoas > 0) {
        float media_salario = soma_salario / total_pessoas;
        float media_filhos = (float)soma_filhos / total_pessoas;
        float percentual_ate_100 = (salario_ate_100 * 100.0) / total_pessoas;

        printf("\nRESULTADOS DA PESQUISA:\n");
        printf("a) Média de salário: R$ %.2f\n", media_salario);
        printf("b) Média de filhos: %.2f\n", media_filhos);
        printf("c) Maior salário: R$ %.2f\n", maior_salario);
        printf("d) Percentual com salário até R$100,00: %.2f%%\n", percentual_ate_100);
    } else {
        printf("\nNenhum dado foi inserido.\n");
    }

    return 0;
}
