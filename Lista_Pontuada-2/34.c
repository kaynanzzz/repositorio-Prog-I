//Escrever um algoritmo que leia 5conjuntos de 2 valores, o primeiro representando o número de um aluno, e o segundo representando a sua altura emcentímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do aluno mais alto e do mais baixo, junto comsuas alturas.


#include <stdio.h>

int main () {
    int aluno, altura;
    int primeiroAluno = 1;
    int maiorA, menorA;
    int alunoMaisAlto, alunoMaisBaixo;

    for (int i = 1; i <= 5; i++) {
        do {
            printf("Digite o numero do aluno e sua altura em cm:\n");
            printf("Numero do aluno: ");
            scanf("%d", &aluno);
            printf("Altura em cm do aluno: ");
            scanf("%d", &altura);
        } while (aluno <= 0 || altura <= 0);

        if (primeiroAluno) {
            maiorA = menorA = altura;
            alunoMaisAlto = alunoMaisBaixo = aluno;
            primeiroAluno = 0;
        } else {
            if (altura > maiorA) {
                maiorA = altura;
                alunoMaisAlto = aluno;
            }
            if (altura < menorA) {
                menorA = altura;
                alunoMaisBaixo = aluno;
            }
        }

        printf("\n");
    }

    printf("O aluno mais alto é o número %d com altura de %d cm.\n", alunoMaisAlto, maiorA);
    printf("O aluno mais baixo é o número %d com altura de %d cm.\n", alunoMaisBaixo, menorA);

    return 0;
}



