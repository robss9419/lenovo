/* MOJA BIBLIOTEKA */
#include <math.h>

void hej(void)
{
  printf("Hello World!");
}

void radian(double deg)
{
  double rad;
  rad = 2 * M_PI * (deg / 360);
   printf("%lf deg = %lf rad\n", deg, rad);
}

void comparison(int FirstValue, int SecondValue)
{
  if (FirstValue>SecondValue)
  {
    printf("Pierwsza liczba jest większa od drugiej\n");
  } 
  if (FirstValue<SecondValue)
  {
    printf("Druga liczba jest większa od pierwszej\n");
  }
  if (FirstValue==SecondValue)
  {
    printf("Obie liczby są równe\n");
  }
}

void sqrtt(double num)
{
  double score;
  score = sqrt(num);
  if (num<0)
  {
    printf("BŁĄÐ! Liczba jest mniejsza od zera!\n");
  }
  else
  {
    printf("Pierwiastek kwadratowy z %0.2lf wynosi: %0.2lf\n",num ,score);
  }
}

void wypisz(int tab[], int N)
{
    int i;
    for (i=0; i<N; i++)
        printf("%2d", tab[i]);
}

void inverse(double num)
{
  double inverse;
  inverse = (1 / num);
  if (num==0)
  {
    printf("Nie ma odwrotności liczby 0!\n");
  }
  else
  { 
    printf("Odwrotność liczby %0.2lf to : %lf\n",num ,inverse);
  }
}
