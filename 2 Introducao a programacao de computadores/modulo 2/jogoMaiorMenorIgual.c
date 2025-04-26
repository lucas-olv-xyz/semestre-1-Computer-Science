//vamos criar um jogo de maior menor ou igual, onde o usuario vai escolher um numero e iremos comparar com o numero gerado aleatoriamente pelo computador
//vamos utilizar if else, ternario e switch case

#include <stdio.h>
#include <stdlib.h> // biblioteca para gerar numeros aleatorios
#include <time.h> // biblioteca para gerar numeros aleatorios

int main(){
    srand(time(0));
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    //gerar numero aleatorio entre 1 e 100
    numeroComputador = rand() % 100 + 1; // gera um numero aleatorio entre 1 e 100

    printf("bem vindo ao jogo maior menor ou igual!\n");
    printf("voce deve escolher um numero e o tipo de comparacao\n");
    printf("M - maior\n");
    printf("N - menor\n");
    printf("I - igual\n");

    printf("escolha a comparacao: ");
    scanf(" %c", &tipoComparacao); // o espaco antes do %c e para ignorar o \n que fica no buffer
    
    printf("digite um numero entre 1 e 100: ");
    scanf("%d", &numeroJogador); // le o numero do jogador
    
    printf("numero gerado pelo computador: %d\n", numeroComputador); // imprime o numero gerado pelo computador

    switch(tipoComparacao){
        case 'M':
        case 'm':
            printf("voce escolheu a opcao maior\n"); // imprime a opcao escolhida
            resultado = (numeroJogador > numeroComputador) ? 1 : 0; // se o numero do jogador for maior que o numero do computador, resultado recebe 1, caso contrario recebe 0
             // imprime o numero do computador
            break;
        case 'N':
        case 'n':
            printf("voce escolheu a opcao menor\n"); // imprime a opcao escolhida
            resultado = (numeroJogador < numeroComputador) ? 1 : 0; // se o numero do jogador for menor que o numero do computador, resultado recebe 1, caso contrario recebe 0
            break;
        case 'I':
        case 'i':
            printf("voce escolheu a opcao igual\n"); // imprime a opcao escolhida
            resultado = (numeroJogador == numeroComputador) ? 1 : 0; // se o numero do jogador for igual ao numero do computador, resultado recebe 1, caso contrario recebe 0
            break;
        default:
            printf("opcao invalida\n"); // verifica se a opcao e valida
            return 0; // sai do programa
    };
    printf("o numero do computador eh: %d, e o numero do jogador eh: %d\n", numeroComputador, numeroJogador);
        if (resultado == 1){ // verifica se o resultado e 1
            printf("voce ganhou!\n"); // imprime que o jogador ganhou
        }else{
            printf("voce perdeu!\n"); // imprime que o jogador perdeu
        }
}