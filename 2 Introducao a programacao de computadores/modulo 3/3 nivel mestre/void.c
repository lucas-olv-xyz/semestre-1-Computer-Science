#include <stdio.h>
 
// Definição de procedimento para imprimir uma mensagem
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}
 
int main() {
    // Chamada do procedimento
    imprimirMensagem();
    return 0;
}

//aqui to percebendo que usamos 2 funcoes, diferente de uma q estamos usando ate agora no modulo, entao provavelmente é a introducao a funcoes
//tb usamos void, que é o tipo de retorno da funcao, ou seja, ela não retorna nada, só executa a ação de imprimir a mensagem
//e o main é a funcao principal, que é chamada quando o programa é executado