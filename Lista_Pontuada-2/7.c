//Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. O algoritmo deverá ler,além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero. 

#include <stdio.h>

int main (){

    int codigo;
    float nota1, nota2, nota3, media;

    do {
        printf("Digite o codigo do aluno (0 para encerrrar): ");
        scanf("%d", &codigo);

        if (codigo != 0) {
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);

            media = (nota1 + nota2 + nota3)/3.0;

            printf("Aluno %d - Media: %.2f\n\n", codigo, media);
        }
    } while (codigo != 0);

    printf("Programa encerrado.\n");
    return 0;
}