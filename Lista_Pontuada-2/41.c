//Faça um algoritmo que leia as três notas de 50 alunos de uma turma. Para cada aluno, calcule a média ponderada,como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10.
//Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a médiaseja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral. 

#include <stdio.h>

int main (){

    float n1, n2, n3, media, somaMedias = 0;
    int totalAlunos = 50;


    for (int i = 0; i <= totalAlunos; i++){
        printf("Aluno %d:\n", i);
    
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
    } while (n1 < 0 || n1 > 10);

    do {
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
    } while (n2 < 0 || n2 > 10);

    do {
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);
    } while (n3 < 0 || n3 > 10);

    media = (n1 * 2 + n2 * 4 + n3 * 3) / 9.0;
    somaMedias += media;

    printf("A media ponderada do aluno %d foi de: %.2f\n\n", i, media);

    if (media >= 7){
        printf("Aluno %d esta Aprovado!\n\n", i);
    } else {
        printf("Aluno %d esta Reprovado.\n\n", i);
    }
 }

    float mediaGeral = somaMedias / totalAlunos;
    printf("Media geral da turma: %.2f\n", mediaGeral);

    return 0;
}
       

