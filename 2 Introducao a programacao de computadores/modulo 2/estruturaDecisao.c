//vamos criar um programa que gerencia as notas de um aluno e determinar se ele passou ou nao, o programa tera um menu para o usuario escolher a opcao desejada
#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("menu de opcoes:\n");
    printf("1 - calcular media\n");
    printf("2 - verificar se passou\n");
    printf("3 - sair\n");
    printf("digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("digite a primeira nota:");
            scanf("%f", &nota1);
            printf("digite a segunda nota:");
            scanf("%f", &nota2);
            media = (nota1 + nota2) / 2; // calcula a media
            printf("a media eh: %.2f\n", media); // imprime a media
            break;
        case 2:
            printf("digite a media do aluno:");
            scanf("%f", &media);
            if(media >= 7.0){
                printf("aluno aprovado\n"); // verifica se o aluno foi aprovado
            }else if(media >= 5.0){
                printf("aluno em recuperacao\n"); // verifica se o aluno esta em recuperacao
            }else{
                printf("aluno reprovado\n"); // verifica se o aluno foi reprovado
            }   break;
        case 3:
            printf("saindo do programa...\n"); // sai do programa
            break;
        default:
            printf("opcao invalida\n"); // verifica se a opcao e valida
            break;
        
    }return 0;
}