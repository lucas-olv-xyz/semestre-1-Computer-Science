//loop aninhado é um loop dentro de um loop
//Para cada iteração do loop externo, o loop interno é executado completamente.

//aqui to rodando um loop dentro de um loop
/*
#include <stdio.h>
int main() {
    //se i for menor que 5, incrementa 1
    for (int i = 1; i <= 5; i++) {
        // se j for menor q 5, incrementa 1
        for (int j = 1; j <= 5; j++) {
            //se a soma de i e j for par, imprime i e j
            if ((i + j) % 2 == 0) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
    return 0;
}*/

//desenhando um triangulo
/*
#include <stdio.h>

int main() {
    int n = 5; // altura do triângulo
 
    //se i for menor que n, incrementa 1 (incrementar significa somar 1, ou seja em analogia, cada vez que somamos 1, estamos subindo um degrau)
    for (int i = 1; i <= n; i++) {
        //para cada iteração de i, j vai de 1 até i (ou seja, o loop interno vai rodar i vezes)
        for (int j = 1; j <= i; j++) {
            //printamos um asterisco
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

//contagem regressiva
/*
#include <stdio.h>
 
int main() {
    int segundos;
   //segundos sao 10, enquanto segundo for maior que 0, subtrai 1
    for (segundos = 10; segundos >= 0; segundos--) {
        //printamos o valor atual de segundos
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("Fogos de artifício!\n");
   
    return 0;
}*/

//tabuada de multiplicacao
#include <stdio.h>
 
int main() {
    //loop externo de 1 a 10, soma
    for (int i = 1; i <= 10; i++) {
        //loop interno de 1 a 10, soma
        for (int j = 1; j <= 10; j++) {
            //printamos o o valor de i e j, e a multiplicação deles (ex: 1 x 1 = 1, 1 x 2 = 2, etc)
            //o loop externo só roda 10 vezes, mas o loop interno roda 10 vezes para cada iteração do loop externo
            //ou seja, o loop INTERNO roda 10 vezes para cada iteração do loop EXTERNO
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
   
    return 0;
}