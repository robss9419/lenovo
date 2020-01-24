#include <stdio.h>
#include "myio.h"

int main()
{
  int a, b;
  printf("Podaj dwie liczby a oblicze Najwiekszy wspolny dzielnik: \n");
  scanf("%d %d", &a, &b);
  nwd(a, b);
  printf("NWD(%d, %d) = %d\n", a, b, nwd(a, b));
}