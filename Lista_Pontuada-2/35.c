//Escrever um algoritmo que leia um conjunto de 50 informações contendo, cada uma delas, a altura e o sexo de umapessoa (código=1, masculino código=2, feminino), calcule e mostre o seguinte:  
//a) a maior e a menor altura da turma 
//b) a média da altura das mulheres 
//c) a média da altura da turma. 


#include <stdio.h>

int main (){

    float altura;
    int sexo;
    float maiorAltura, menorAltura;
    int primeiro = 1;
    float somaMulheres = 0;
    int qtdMulheres = 0;
    float somaTurma = 0;

    for (int i = 0; i <=50; i++){
        printf("Pessoa %d:\n", i);

        do {
            printf("Altura em metros (ex: 1.60): ");
            scanf("%f", &altura);
        } while (altura <= 0);

        do {
            printf("Sexo (1 = Masculino, 2 = Feminino): ");
            scanf("%d", &sexo);
        } while (sexo != 1 && sexo != 2);

        if (primeiro) {
            maiorAltura = menorAltura = altura;
            primeiro = 0;
        } else {
            if (altura > maiorAltura) maiorAltura = altura;
            if (altura < menorAltura) menorAltura = altura;
        }

        somaTurma += altura;

        if(sexo == 2){
            somaMulheres += altura;
            qtdMulheres++;
        }

        printf("\n");

    }

    float mediaTurma = somaTurma / 50;
    float mediaMulheres = (qtdMulheres > 0) ? somaMulheres / qtdMulheres : 0;

    printf("/n--- RESULTADOS ---\n");
    printf("Maior altura da turma: %.2f m\n", maiorAltura);
    printf("Menor altura da turma: %.2f m\n", menorAltura);
    printf("Media da altura das mulheres: %.2f m\n", mediaMulheres);
    printf("Media da altura da turma: %.2f m\n", mediaTurma);

    return 0;

}