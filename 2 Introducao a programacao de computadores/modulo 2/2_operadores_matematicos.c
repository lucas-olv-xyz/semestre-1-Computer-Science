#include <stdio.h>
int main() {
  int a = 5;
  int b = 2;
  //soma
  int soma = a + b;
  int c = 5;
  int d = 2;
  //subt
  int subtracao = c - d;
  int e = 5;
  int f = 2;
  //multip
  int multiplicacao = e * f;
  int g = 5;
  int h = 2;
  //div
  int divisao = g / h;
  int i = 5;
  //atribuicao com soma
  i += 3;
  i = 5;
  //atribuicao com subt
  i -= 3;
  i *= 3;
  i /= 3;
  //operador de incremento e decremento
  int j = 5;
  j++;//vai ser 6
  j--;//vai ser 5
  //pré-incremento e pos-decremento
  int k = 5;
  int l = ++k;
  int m = 5;
  int n = m++;
  //operador decremento
  int o = 5;
  o--;
  //pré-decremento
  int p = 5;
  --p;  
  //pós-decremento
  int q = 5;
  int r = q--;

  printf("Divisao: %d\n", divisao);
  printf("Incremento: %d\n", i);
  printf("Pré-incremento: %d\n", l);
  printf("Pos-incremento: %d\n", n);
  printf("Decremento: %d\n", o);
  printf("Pré-decremento: %d\n", p);
  printf("Pos-decremento: %d\n", r);
  printf("Soma: %d\n", soma);
  printf("Subtracao: %d\n", subtracao);
  printf("Multiplicacao: %d\n", multiplicacao);
  return 0;
}
