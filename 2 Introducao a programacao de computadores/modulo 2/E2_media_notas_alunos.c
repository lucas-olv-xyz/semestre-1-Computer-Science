#include <stdio.h>

/*
inicio
    solicitar ao usuario a primeira nota
    solicitar ao usuario a segunda nota
    calcular a media / somar e dividir por 2
    atribuir a uma variavel
    exibir o resultado do codigo
fim
*/

int main(){
    float nota1, nota2, nota3;
    float media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("A media das notas é: %.2f\n", media);
    return 0;

}