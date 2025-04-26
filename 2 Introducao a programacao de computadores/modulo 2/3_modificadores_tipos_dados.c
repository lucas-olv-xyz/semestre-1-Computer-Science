#include <stdio.h>

int main(){
    //int pode armazenar valores -2,147,483,648 a 2,147,483,647
    //char pode armazenar valores de -128 a 127
    //unsigned int pode armazenar valores de 0 a 4,294,967,295
    //pra pintar unasigned int, usar %u
    //pra printar unsigned long int, usar %lu
    //unsigned char pode armazenar valores de 0 a 255
    int signedNumber = 3000000000;
    unsigned int unsignedNumber = 4000000000;
    char signedChar = 128;
    unsigned char unsignedChar = 255;
    printf("signedNumber: %d\n", signedNumber);
    //o nome do bug acima é overflow, quando um valor excede o limite de armazenamento
    printf("unsignedNumber: %u\n", unsignedNumber);
    //long int pode armazenar valores de -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
    //double pode armazenar valores de 1.7E-308 a 1.7E+308
    //long double pode armazenar valores de 3.4E-4932 a 1.1E+4932
}