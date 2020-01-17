/* program dla podanej z klawiatury liczby M ma obliczyć najmniejszą liczbę n,
   taką że 1 + 2 + 3 +...+ n >= M */

#include <stdio.h>
int main() {
  int M, i, n, suma;
  suma = 0;
  i = 1;
  printf("Podaj liczbe M: ");
  scanf("%d", &M);
  while (suma <= M) {
     suma=suma+i;
     i=i+1;
  }
  n=i-1;
  printf("Szukane n to: %d\n", n);
  return 0;
}