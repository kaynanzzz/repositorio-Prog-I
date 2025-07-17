//Faça um algoritmo que mostre os conceitos finais dos alunos de uma classe de 75 alunos, considerando (use ocomando CASO):  
//a) os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo usuário
//b) a tabela de conceitos segue abaixo: 
//Nota //de 0,0 a 4,9//de 5,0 a 6,9//de 7,0 a 8,9//de 9,0 a 10,0

#include <stdio.h>

int main (){

    int matricula;
    float nota;

    printf("MATRICULA  NOTA  CONCEITO\n");
    printf("--------------------------\n");

    for(int i = 0; i < 75; i++) {
        printf("Digite a matricula do aluno %d (10 digitos): ", i + 1);
        scanf("%d", &matricula);

    do {
        printf("Digite a nota final do aluno: ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);

    int conceito_base = (int)(nota * 10) / 10;

    char conceito;
    switch (conceito_base) {
    
    case 9:
    case 10:
        conceito = 'A';
        break;
    case 7:
    case 8:
        conceito = 'B';
        break;
    case 5:
    case 6:
        conceito = 'C';
        break;
    default:
        conceito = 'D';
        break;
        }

    printf("%-10d %-5.1f %-8c\n", matricula, nota, conceito);

    }

    return 0;

}