#include <stdio.h>
#include "robs.h"

int main()
{
  int a, b;
  printf("Podaj dwie liczby: ");
  scanf("%d", &a);
  printf("Podaj dwie liczby: ");
  scanf("%d", &b);
  euklides(a, b);
  nwd(a, b, euklides(a, b));
}