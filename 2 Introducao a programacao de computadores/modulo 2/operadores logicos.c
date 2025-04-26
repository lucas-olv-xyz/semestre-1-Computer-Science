//introducao aos operadores logicos em C
#include <stdio.h>

int main (){
    int a = 10;
    int b = 20;

    if (a > 0 && b > 0) {
        printf("a e b sao positivos\n");
    } else {
        printf("a ou b nao sao positivos\n");
    }
    //&& significa "e" e || significa "ou"

    if (a > 0 || b > 0) {
        printf("a ou b sao positivos\n");
    } else {
        printf("a e b nao sao positivos\n");
    }

    //nao logico = ! , esse aqui inverte o valor logico de uma expressao
    if (!a){
        printf("a e falso\n");
    } else {
        printf("a e verdadeiro\n");
    }

    //existe em C uma ordem dos operadores, por importancia


//combinando operadores logicos e relacionais
    int idade = 18;
    float altura = 1.75;

    if (idade >= 18 && altura >= 1.70 && altura <= 2.00) {
        printf("Voce pode entrar na montanha-russa\n");
    } else {
        printf("Voce nao pode entrar na montanha-russa\n");
    }
}