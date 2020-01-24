#include <stdio.h>
#include "myio.h"

int main()
{
  int n;
  printf("Podaj liczbe n a wyswietle wartosc n-tej liczby z ciagu Fibonacciego\n");
  scanf("%d", &n);
  fibonacci(n);
  printf("W ciagu Fibonacciego %d wyraz ma wartosc = %d\n", n, fibonacci(n));
}