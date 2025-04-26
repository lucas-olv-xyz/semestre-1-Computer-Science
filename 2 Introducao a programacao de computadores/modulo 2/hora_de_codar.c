#include <stdio.h>
#include <string.h>

int main () {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua matricula: ");   
    scanf("%d", &matricula);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Nome do aluno: %s - matricula: %d\n", nome,matricula);
    printf("Idade: %d - altura: %f.2f\n", idade, altura);
    return 0;
}