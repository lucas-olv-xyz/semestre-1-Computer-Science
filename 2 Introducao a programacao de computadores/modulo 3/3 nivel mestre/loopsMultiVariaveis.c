//aqui ele roda 2 condições
/*#include <stdio.h>

int main() {
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}
*/

//aqui ele roda se as 2 condicoes forem verdadeiras
/*
#include <stdio.h>
 
int main() {
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
} */
    
//exemplo complexo de loop
#include <stdio.h>
 
int main() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}