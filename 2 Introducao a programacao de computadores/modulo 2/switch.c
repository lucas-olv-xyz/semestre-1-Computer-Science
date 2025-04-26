#include <stdio.h>

// int main (){
//     int variavel = 2;
//     int valor1 = 1; 
//     int valor2 = 2;
//     int valor3 = 3;

//     //vamos conhecer a estrutura basica de um switch
//     switch (variavel) {
//         case valor1:
//             printf("opcao 1\n");
//             break;
//         case valor2:
//             printf("opcao 2\n");
//             break;
//         case valor3:
//             printf("opcao 3\n");
//             break;
//         default:
//             printf("opcao invalida\n");
//     }
// }
int main() {
  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}