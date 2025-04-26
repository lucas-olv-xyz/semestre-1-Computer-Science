#include <stdio.h>

//isso é uma constante em C
#define LINHAS 5
#define COLUNAS 5

int main (){

    int matriz[LINHAS][COLUNAS]; // Declaração de uma matriz 5x5 de inteiros

    int soma = 0;

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            
            soma++;
            matriz[i][j] = soma; // Atribuindo valores à matriz
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}