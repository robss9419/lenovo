/* Program, który sprawdza czy podana liczba całkowita jest pierwsza. */

#include <stdio.h>
#include <stdlib.h>

int sprawdz(int n)
{
    if (n<2)
    {
      return 0;
    }
    for(int i=2; i*i<=n; i++)
    {
      if(n%i==0)
      return 0;
    }
  return 1;
}

int main()
{
  int n, jest_pierwsza;
  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);
  sprawdz(n);
  jest_pierwsza = sprawdz(n);
  printf("Podana liczba %d jest %s\n",n , jest_pierwsza ? "pierwsza" : "złożona");
  return EXIT_SUCCESS;
}