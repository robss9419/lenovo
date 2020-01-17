#include <stdio.h>
#include <string.h>
#define ROZMIAR 40

int main()
{
  char tab[ROZMIAR];
  printf("Podaj liczbe : ");
  scanf("%s", tab);
  double dlugosc = strlen(tab);
  for (int i=dlugosc; i>=0; i--)
  putchar(tab[i]);
  printf("\n"); 
}