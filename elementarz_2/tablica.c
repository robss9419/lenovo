#include <stdio.h>

int main()
{
  int tab[100];
  int i;
  printf ("Druk tablicy tab:\n");
  for (i=0; i<ROZMIAR; ++i) {
    printf ("Element numer %d = %d\n", i, tab[i]);
    }
    return 0;
    }