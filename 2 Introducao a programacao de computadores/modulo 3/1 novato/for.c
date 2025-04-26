//sobre estrutura de repeticao for
#include <stdio.h>

//estrutura basica de um bloco for
/*
for (inicializacao; condicao; incremento) {
    // bloco de codigo a ser executado
}
*/

int main() {
    int i;
    //o for é utilizado para executar um bloco de código um número específico de vezes
    //nesse caso, o bloco de código será executado 5 vezes
    for (i = 1; i <= 5; i++) {
        //i = 1 significa que o loop começa em 1
        //i <= 5 significa que o loop continua enquanto i for menor ou igual a 5
        //i++ significa que i é incrementado em 1 a cada iteração do loop
        printf("Contagem: %d\n", i);
    }
    return 0;
}