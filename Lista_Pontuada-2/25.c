//Uma empresa deseja aumentar seus preços em 20%. Faça um algoritmo que leia o código e o preço de custo decada produto e calcule o preço novo. Calcule também, a média dos preços com e sem aumento. Mostre o código e opreço novo de cada produto e, no final, as médias. A entrada de dados deve terminar quando for lido um código deproduto negativo. (Use o comando enquanto-faça)



#include <stdio.h>

int main() {
    int codigo;
    float precoCusto, precoNovo;
    float somaPrecoCusto = 0, somaPrecoNovo = 0;
    int quantidade = 0;

    printf("Digite o código e o preço de custo dos produtos (código negativo para encerrar):\n");

    while (1) {
        printf("\nDigite o código do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0) {
            break;
        }

        printf("Digite o preço de custo do produto: ");
        scanf("%f", &precoCusto);

        precoNovo = precoCusto * 1.2;

        printf("Produto código %d - Novo preço: R$ %.2f\n", codigo, precoNovo);

        somaPrecoCusto += precoCusto;
        somaPrecoNovo += precoNovo;
        quantidade++;
    }

    if (quantidade > 0) {
        printf("\n--- RESULTADOS FINAIS ---\n");
        printf("Média dos preços antigos: R$ %.2f\n", somaPrecoCusto / quantidade);
        printf("Média dos preços com aumento: R$ %.2f\n", somaPrecoNovo / quantidade);
    } else {
        printf("Nenhum produto foi registrado.\n");
    }

    return 0;
}
