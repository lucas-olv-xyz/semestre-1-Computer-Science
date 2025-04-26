//sobre estrutura de repeticao while
#include <stdio.h>
int main() {
    int num;

    printf("Digite um numero (negativo para sair): ");
    scanf("%d", &num);
    while (num >= 0) {
        printf("Voce digitou: %d\n", num);
        printf("Digite outro numero (negativo para sair): ");
        scanf("%d", &num);
    }
    printf("Programa encerrado.\n");
}