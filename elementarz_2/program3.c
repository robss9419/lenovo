/* program wypisuje przyblizone wartosci liczby pi przez podane sumy */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LIMIT 14
#define ODSTEP ' '
#define ZNAK '*'

void odstepy(char znak, int ile)
{
  for (int i=0; i<=ile; i++)
  {
    putchar(znak);
  }
}

void licz_pi(long double pi, int num)
{
    int i = 1;
    for (int n=1; n<=num; n++)
    {
        i = i + 2;
        if (n%2==0)
        {
        pi = (pi + (4.0 / i));
        }
        else
        {
        pi = (pi - (4.0 / i));
        }
    }
    char temp [16];
    sprintf(temp,"%d", num);
    printf("  %.4Lf  |  %d", pi, num);
    odstepy(ODSTEP, (LIMIT - (strlen(temp))));
    printf("|\n");
}


void znajdz(float pi, float cel)
{
  int n = 0;
  int i = 1;
  while (cel != pi)
  {
    n = n +1;
    i = i + 2;
    if (n%2==0)
    {
    pi = (pi + (4.0 / i));
    }
    else
    {
    pi = (pi - (4.0 / i));
    }
  }
    char temp [16];
    sprintf(temp,"%f", pi);
    printf("  %d   |  %.4f", n, cel);
    odstepy(ODSTEP, (LIMIT - (strlen(temp) - 2)));
    printf("|\n");
}

int main()
{
    float pi = 4.0;
    printf("  WYNIK   |");
    odstepy(ODSTEP,LIMIT / 2);
    printf("N");
    odstepy(ODSTEP,LIMIT / 2);
    printf("|\n");
    odstepy(ZNAK,30);
    putchar('\n');
    licz_pi(pi, 10);
    licz_pi(pi, 100);
    licz_pi(pi, 1000);
    licz_pi(pi, 1000000);
    odstepy(ZNAK,30);
    //printf("\n");
    //znajdz(pi, 3.1415);
    return 0;
}
