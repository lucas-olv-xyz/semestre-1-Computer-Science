//vamos entender o basico de operadores ternarios
#include <stdio.h>

int main (){
    //condicao ? valo_se_verdadeiro : valor_se_falso
    int a = 10, b = 20, maior;
    maior = (a > b) ? a : b; // se a for maior que b, maior recebe a, caso contrario recebe b
    printf("O maior valor eh: %d\n", maior); // imprime o maior valor

    int idade = 18, verificar;
    verificar = (idade >= 18) ? printf("maior de idade") : printf("menor de idade");
}