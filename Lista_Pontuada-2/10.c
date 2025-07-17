// Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno,considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas trêsnotas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se amédia for menor que 5. Repita a operação até que o código lido seja negativo.

#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    do {
        printf("Digite o codigo do aluno (negativo para encerrar): ");
        scanf("%d", &codigo);

        if (codigo >= 0) {
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);

            peso1 = peso2 = peso3 = 3;

            if (nota1 >= nota2 && nota1 >= nota3) {
                peso1 = 4;
            } else if (nota2 >= nota1 && nota2 >= nota3) {
                peso2 = 4;
            } else {
                peso3 = 4;
            }

            media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / 10.0;

            printf("\nAluno %d\n", codigo);
            printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
            printf("Media Ponderada: %.2f\n", media);

            if (media >= 5) {
                printf("Resultado: APROVADO!\n\n");
            } else {
                printf("Resultado: REPROVADO!\n\n");
            }
        }

    } while (codigo >= 0);

    printf("\nPrograma encerrado.\n");
    return 0;
}
