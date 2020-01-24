#include <string.h>
#include <stdio.h>
#include "myio.h"

void tabs(char znak, int ile)
{
  for (int i=0; i<=ile; i++)
  {
    putchar(znak);
  }
}

int get_int()
{
  int x;
  printf("Podaj liczbe do ktorej mam obliczyc collatza: \n");
  scanf("%d", &x);
  return x;
}

void print_results(int a, int b, int c)
{
  printf("Nwd(%d, %d) = %d", a, b, c);
}

void collatz(int i)
{
  print_table();
  for(int x=1; x<=i; x++)
    {
      check_collatz(x);
    }
}

int max_int(int max, int n)
{
  if (max < n)
  {
    max = n;
  }
  return max;
}


void check_collatz(int n)
{
  int r2=0, z=0;
  int r=n;
  while(n > 1)
  {
    int r1;
    max_int(z, n);
    z=max_int(z, n);
    if (n % 2 == 0)
      r1 = n / 2;
    else
      r1 = 3 * n + 1;
    n = r1;
    r2++;
  }
  print_score(r, r2, z);
  r++;
}

void print_score(int a, int b, int c)
{
  printf("%3d|%5d|%5d\n", a, b, c);
}

void print_table()
{
  printf("\n%3s|%5s|%5s\n", "N", "STEPS", "MAX_INT");
  printf("--------------------\n");
}

int euklides(int a, int b)
{
  int nwd = a*b;
  printf("%d %d", a ,b);
  while(nwd != 0)
  {
    if (a >= b)
      a = a % b;
    else
      b = b % a;
  }
  return a+b;
}

void nwd(int a, int b, int c)
{
  printf("NWD(%d, %d) = %d\n", a, b, c);
}