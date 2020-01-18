/* Program, który wczyta liczbę rzeczywistą i wypisze jej pierwiastek kwadratowy. 
   W wypadku podania liczby ujemnej, program wypisuje komunikat o błędzie oraz kończy działanie. */

#include <stdio.h>
#include <math.h>
#include "myio.h"

int main()
{
  double num;
  printf("Podaj liczbe rzeczywistą: ");
  scanf("%lf", &num);
  sqrtt(num);
}