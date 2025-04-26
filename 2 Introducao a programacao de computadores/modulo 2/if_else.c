//estrutura de decisão composta if ou else

#include <stdio.h>

int main() {
    int numero1 = 8;
    int numero2 = 5;

    if (numero1 > numero2) {
        printf("numero1 é maior que numero2\n");
    } else {
        printf("numero1 não é maior que numero2\n");
    }

    int idade = 16;

    if (idade >= 18) {
        printf("Você é maior de idade\n");
    } else {
        printf("Você é menor de idade\n");
    }

    int numero = 3;
    if (numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    return 0;
}