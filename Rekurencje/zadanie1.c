#include <stdio.h>
#include "myio.h"

int main()
{
  int n, k;
  printf("podaj liczbe n do potegi k\n");
  printf("podaj n:\n");
  scanf("%d", &n);
  printf("podaj k:\n");
  scanf("%d", &k);
  printf("%d do potegi %d wynosi: %d\n", n, k, raising_to_a_power(n, k));
}