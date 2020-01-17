/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */

#include <stdio.h>
#include "myio.h"
int main()
{
  int first, second;
  printf("Podaj pierwsza liczbe: ");
  scanf("%d", &first);
  printf("Podaj druga liczbe: ");
  scanf("%d", &second);
  comparison(first, second);
}