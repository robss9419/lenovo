/* podaj liczbe a program obliczy problem collatza, licz od 1 do podanej przez uzytkownika */

#include <stdio.h>
#include "robs.h"

int main()
{
  int n;
  n = wczytaj();
  collatz(n);
  return 0;
}
