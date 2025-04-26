//vamos criar um jogo de jokenpo em c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int jogador, computador;
    srand(time(0)); // inicializa o gerador de números aleatórios

    printf("jogo de jokenpo\n");
    printf("Escolha uma opcao:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &jogador);

    computador = rand() % 3 + 1; // gera um número aleatório entre 1 e 3

    switch (jogador)
    {
    case 1: // Pedra
        printf("Voce escolheu Pedra\n");
        printf("Computador escolheu %s\n", computador == 1 ? "Pedra" : (computador == 2 ? "Papel" : "Tesoura"));
        /* code */
        break;
    case 2: // Papel
        printf("Voce escolheu Papel\n");
        printf("Computador escolheu %s\n", computador == 1 ? "Pedra" : (computador == 2 ? "Papel" : "Tesoura"));
        break;
    
    case 3: // Tesoura
        printf("Voce escolheu Tesoura\n");
        printf("Computador escolheu %s\n", computador == 1 ? "Pedra" : (computador == 2 ? "Papel" : "Tesoura"));
        break;

    }
   
    if (jogador == computador) {
            printf("Empate!\n");
        } else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)) {
            printf("Voce ganhou!\n");
        } else {
            printf("Computador ganhou!\n");
        }
    return 0;
}