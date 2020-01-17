/* Program, który wczyta liczbę rzeczywistą i wypisze jej odwrotność oraz jej pierwiastek kwadratowy. 
  Program nie powinien obliczać odwrotności liczby 0 oraz pierwiastka z liczby ujemnej. 
  W takiej sytuacji zamiast obliczeń program powinien wypisać odpowiedni komunikat. */

#include <stdio.h>
#include <math.h>
#include "myio.h"

int main()
{
  double num;
  printf("Podaj liczbe rzeczywistą: ");
  scanf("%lf", &num);
  sqrtt(num);
  inverse(num);
}