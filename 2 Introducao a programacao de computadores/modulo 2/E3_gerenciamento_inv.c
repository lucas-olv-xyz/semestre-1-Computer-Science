#include <stdio.h>

/*
iniciar
    declarar variaveis produtos
    exibir as informacoes dos produtos
    comparar o valor minimo de estoque
    comparar entre os valores totais dos produtos
*/

int main(){
    char produtoA[50] = "produto A", produtoB[50] = "produto B";

    unsigned estoqueA = 1000, estoqueB = 2000;

    float valorA = 10.50, valorB = 20.40;

    unsigned int estoqueMinimoA = 500, estoqueMinimoB = 2500;

    double valorTotalA = estoqueA * valorA, valorTotalB = estoqueB * valorB;

    int resultadoA, resultadoB;

    //exibir
    printf("Produto: %s tem estoque %u e o valor unitario é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto: %s tem estoque %u e o valor unitario é R$%.2f\n", produtoB, estoqueB, valorB);

    //comparar
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    //comparar
    printf("o valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
}
