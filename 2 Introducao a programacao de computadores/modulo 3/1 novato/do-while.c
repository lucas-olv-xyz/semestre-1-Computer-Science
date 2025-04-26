//o do-while faz com que o bloco de código seja executado pelo menos uma vez
// //sobre estrutura de repeticao do-while
//gerando um menu interativo com do-while e switch case
#include <stdio.h>
#include <stdlib.h>
int main() {
    int opcao;
    do {
        printf("Menu:\n");
        printf("1. Opcao 1\n");
        printf("2. Opcao 2\n");
        printf("3. Opcao 3\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            //enquanto a opçao fo verdadeira = 1, o programa roda
            case 1:
                printf("Voce escolheu a opcao 1.\n");
                break;
            case 2:
                printf("Voce escolheu a opcao 2.\n");
                break;
            case 3:
                printf("Voce escolheu a opcao 3.\n");
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
    //quando a opcao for 0 nós saimos do programa

    return 0;
}