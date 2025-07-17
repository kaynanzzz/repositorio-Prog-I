//Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a cada um deles anunciando umbônus especial. Escreva um algoritmo que leia o nome do cliente e o valor das suas compras no ano passado e calculeum bônus de 10% se o valor das compras for menor que 500.000 e de15 %, caso contrário. 

#include <stdio.h>

int main (){

    int clientes = 150;
    float compras;
    char nome [100];

    for(int i = 1; i < clientes; i++){
        printf("Cadastro %d: \n", i);
        
        do{
            printf("Digite o seu nome: ");
            scanf(" %s", &nome);
            printf("Informe o valor gasto em compras no ultimo ano: ");
            scanf("%f", &compras);
        } while (compras <= 0);

        if(compras >= 0 && compras <= 500){
            printf("Voce recebeu um cupom de 10%% de desconto!");
        } else {
            printf("Voce recebeu um cupom de 15%% de desconto!");
        }

        printf("\n");
    }

    return 0;
}