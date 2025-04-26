#include <stdio.h>
 
// int main() {
//     int numeros[5]={1,2,3,4,5};  // Declaração de um array com 5 elementos
//     printf("O primeiro elemento é %d\n", numeros[0]);
//     printf("O terceiro elemento é %d\n", numeros[2]);
//     printf("O quinto elemento é %d\n", numeros[4]);
//     return 0;
// }

//media de alunos
// int main() {
//     float notas[3] = {85.5, 90.0, 78.0};  // Array de notas de 3 alunos
 
//     printf("Nota do primeiro aluno: %.1f\n", notas[0]);
//     printf("Nota do segundo aluno: %.1f\n", notas[1]);
//     printf("Nota do terceiro aluno: %.1f\n", notas[2]);
 
//     return 0;
// }

//array the letras char
// int main() {
//     char letras[4] = {'A', 'B', 'C', 'D'};  // Array de caracteres
 
//     printf("Primeira letra: %c\n", letras[0]);
//     printf("Segunda letra: %c\n", letras[1]);
//     printf("Terceira letra: %c\n", letras[2]);
//     printf("Quarta letra: %c\n", letras[3]);
 
//     return 0;
// }

//arrays utilizando strings

int main(){
    char *nomes[3]={"lucas","dani","thor"};
    int i;

    for (i = 0; i < 3; i++){
        printf("Nome %d: %s\n", i+1, nomes[i]);
    }
    return 0;
}

/*
Arrays são uma maneira eficiente de armazenar e acessar múltiplos valores relacionados usando uma única variável. Em C, os arrays são definidos com um tamanho fixo e seus elementos são acessados por índices. Compreender como declarar, inicializar e acessar arrays é essencial para manipular dados de forma estruturada e eficiente na programação. As aplicações de arrays são vastas, variando desde armazenar notas de alunos até armazenar caracteres para processamento de texto.
*/