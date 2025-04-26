#include <stdio.h>

// -----------ESTRUTURA WHILE-----------------
// int main () {
//     int i = 0;

//     while(i<=10){

//         if(i % 2 == 0){
//             //se o resto da divisao de i por 2 for igual a 0, i é par
//             printf("%d eh par\n", i);
//         }
//         i++;
//     }
//     return 0;
// }

//--------------------ESTRUTURA DO WHILE-----------------
// int main (){
//     int numero;

//     do {
//         printf("Digite um numero par para sair do codigo: ");
//         scanf("%d", &numero);

//         if(numero % 2 == 0){
//             printf("O numero %d eh par\n", numero);

//         }else{
//             printf("O numero %d eh impar\n", numero);
//         }
//     }while (numero % 2 != 0);
//     printf("O numero %d eh par, saindo do programa...\n", numero);
//     return 0;
// }

int main (){

    int numero, i;
    printf("Digite um numero para calcularmos a tabuada: ");
    scanf("%d", &numero);

    for (i = 0; i<=10; i++){
        //a variavel i vai de 0 a 10, e a cada iteração do loop, i é incrementada em 1
        printf("%d x %d = %d\n", numero, i, numero*i);  
    }


    return 0;
}