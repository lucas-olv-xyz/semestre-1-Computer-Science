#include <stdio.h>

int main () {

    int index;
    char *nomesAlunos[3][3] = {
        {"aluno 0", "pt: 30", "mat:90"},
        {"aluno 1", "pt: 25", "mat:70"},
        {"aluno 2", "pt: 85", "mat:30"}
    };

    printf("Digite o numero do aluno que queira ver as notas: \n");
    printf("para o aluno 0 digite 0,\n para o aluno 1 digite 1 e \npara o aluno 2 digite 2\n");
    scanf("%d", &index);

        //primeiro é coluno segundo é linha
    printf("Nota do aluno %s são: %s, %s..\n", nomesAlunos[index][0],nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}