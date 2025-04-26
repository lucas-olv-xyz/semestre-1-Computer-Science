#include < stdio.h >
//operador relacional

int main(){
    int a = 5;
    int b = 2;
    printf("a maior q b: %d\n", a > b);
    printf("a menor q b: %d\n", a < b);
    printf("a maior ou igual a b: %d\n", a >= b);
    printf("a menor ou igual a b: %d\n", a <= b);
    printf("a igual a b: %d\n", a == b);
    printf("a diferente de b: %d\n", a != b);
    //resultado sera booleano, 0 ou 1 (1 = sim, 0 = nao)
    return 0;
}