//o programa tem q verificar as condições de segurança de um armazem
//o programa vai verificar temperatura, humidade e nivel de estoque
//se alguma das condições estiver fora dos limites, o programa manda um alerta

#include <stdio.h>

int main(){
    float temperatura, humidade;
    unsigned int nivel_estoque, estoque_minimo = 10, estoque_maximo = 100;

    
    printf("Digite a temperatura do armazem: ");~
    scanf("%f", &temperatura);
    printf("Digite a humidade do armazem: ");
    scanf("%f", &humidade);
    printf("Digite o nivel de estoque: ");
    scanf("%u", &nivel_estoque);

    printf("-------------------------------------------\n");

    if (temperatura < 0 || temperatura > 30){
        printf("ALERTA: Temperatura fora dos limites!\n");
    } else {
        printf("Temperatura dentro dos limites.\n");
    }

    if (humidade < 20 || humidade > 80){
        printf("ALERTA: Humidade fora dos limites!\n");
    } else {
        printf("Humidade dentro dos limites.\n");
    }

    if (nivel_estoque < estoque_minimo || nivel_estoque > estoque_maximo){
        printf("ALERTA: Nivel de estoque fora dos limites!\n");
    } else {
        printf("Nivel de estoque dentro dos limites.\n");
    }
    return 0;

}
