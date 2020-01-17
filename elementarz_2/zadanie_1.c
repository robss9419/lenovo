#include <stdio.h>
int main() {
  int M,suma,i,n;
  suma = 0;
  i = 0;
  n = 0;
  printf("Podaj liczbe M: ");
  scanf("%d\n", &M);
  while (suma < M) {
     i=i+1;
     suma=suma+i;
  }
  n=i+1;
  printf("Szukane n to: %d\n", n);
  return 0;
}