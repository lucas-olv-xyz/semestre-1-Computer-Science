// #include <stdio.h>
 
// int main() {
//     int matriz[3][3];
 
//     // Inicialização da matriz com base em condições simples
//     for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
//         for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
//             if (j % 2 == 0) {
//                 matriz[i][j] = 1; // Se a coluna for par, atribui 1
//             } else {
//                 matriz[i][j] = 0; // Se a coluna for ímpar, atribui 0
//             }
//         }
//     }
 
//     // Impressão da matriz
//     for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha
//         for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }
 
//     return 0;
// }

#include <stdio.h>
 
int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 
    // Substituição condicional de elementos
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (matriz[i][j] % 3 == 0) {
                matriz[i][j] = -1; // Substitui múltiplos de 3 por -1
            }
        }
    }
 
    // Impressão da matriz modificada
    for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha
        for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}