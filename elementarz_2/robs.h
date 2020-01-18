#include <string.h>
#define LIMIT 30
#define ODSTEP ' '
#define ZNAK '*'
#define L "NUMB"

int r=1, r1;

void odstepy(char znak, int ile)
{
  for (int i=0; i<=ile; i++)
  {
    putchar(znak);
  }
}

int wczytaj()
{
  int x;
  printf("Podaj liczbe całkowita: ");
  scanf("%d", &x);
  return x;
}

void collatz(int h)
{
  printf("  %s", L);
  odstepy(ODSTEP, 5 - strlen(L));
  printf("|  STEPS");
  printf("\n");
  odstepy('-', LIMIT);
  printf("\n");
  while(r<=h){
  int n;
  n = r;
  int r2=0;
  while(n > 1)
  {
    if (n % 2 == 0)
      r1 = n / 2;
    else
      r1 = 3 * n + 1;
    n = r1;
    r2++;
  }
  char temp [16];
  sprintf(temp,"%d", n);
  odstepy(ODSTEP, 5 - strlen(L));
  printf("|  STEPS");
  printf("\n");
  odstepy('-', LIMIT);
  printf("\n");
  printf("%d", r);
  odstepy(ODSTEP, 5 - strlen(n));
  printf("|  %d\n",2 r2);
  r++;
  }
}
