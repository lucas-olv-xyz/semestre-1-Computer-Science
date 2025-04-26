/*exemplo de pseudocodigo
inicio
    solicitar ao usuario um numero
    receber o numero fornecido
    se o numero for divisivel por 2 entao:
        exibir "o numero é par"
    senao
        exibir "o numero é impar"
fim
        */

#include <stdio.h>

int main(){
    int numero;
    printf("digite um numero qualquer:");
    scanf("%d", &numero);
    if(numero % 2 == 0){
        printf("o numero é par\n");
    }else{
        printf("o numero é impar\n");
    }
    return 0;
}