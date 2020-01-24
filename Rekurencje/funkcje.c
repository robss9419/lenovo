#include <string.h>
#include <stdio.h>
#include "myio.h"

//------------------------------------------------------------

void tabs(char znak, int ile)
{
  for (int i=0; i<=ile; i++)
  {
    putchar(znak);
  }
}

//------------------------------------------------------------

int get_int()
{
  int x;
  printf("Podaj liczbe do ktorej mam obliczyc collatza: \n");
  scanf("%d", &x);
  return x;
}


//------------------------------------------------------------

void print_results(int a, int b, int c)
{
  printf("Nwd(%d, %d) = %d", a, b, c);
}


//------------------------------------------------------------

void collatz(int i)
{
  print_table();
  for(int x=1; x<=i; x++)
    {
      check_collatz(x);
    }
}


//------------------------------------------------------------

int max_int(int max, int n)
{
  if (max < n)
  {
    max = n;
  }
  return max;
}

//------------------------------------------------------------

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

//------------------------------------------------------------

void print_score(int a, int b, int c)
{
  printf("%3d|%5d|%5d\n", a, b, c);
}

void print_table()
{
  printf("\n%3s|%5s|%5s\n", "N", "STEPS", "MAX_INT");
  printf("--------------------\n");
}

//------------------------------------------------------------

int nwd(int a, int b)
{
  if (a * b == 0)
    return a+b;
  else if (a > b)
    return nwd(a%b, b);
  else if (b > a)
    return nwd(a, b%a);
  return 0;
}


//------------------------------------------------------------

int fibonacci(int n)
{
  if(n>2)
    return fibonacci(n-1) + fibonacci(n-2);//double recursion
  else
    return 1;
}

//------------------------------------------------------------

int raising_to_a_power(int n, int k)
{
  if (k==0)
    return 1;
  else
    return n=n*raising_to_a_power(n, k-1);
}