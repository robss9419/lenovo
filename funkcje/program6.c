#include <stdio.h>
#define LIMIT 30
#define ODSTEP ' '
#define NAZWA "Sprawdzmy twoje umiejetnosci mnozenia liczb naturalnych w zakresie od 1 do 100!"

void znak(char a, int num)
{
  for (int i=0; i<=num; i++)
    putchar(a);
  printf("\n");
}

void zadanie(int c, int a, int b, int * x)
{
  int temp = *x;
  int mojwynik = a * b;
  int wynik=0;
  printf("Zestaw nr. %d\na = %d i b = %d\n", c, a, b);
  printf("Podaj wynik: ");
  scanf("%d", &wynik);
  if (wynik == mojwynik)
  {
    temp += 1;
    *x = temp;
    printf("Bardzo dobrze! Poprawne rozwiazanie\n");
  }
  else
  {
    printf("Bledna odpowiedz\n");
  }
}

int main()
{
  int x=0;
  printf("%s\n", NAZWA);
  znak('-', 20);
  zadanie(1, 5, 8, &x);
  znak('-', 20);
  zadanie(2, 10, 21, &x);
  znak('-', 20);
  zadanie(3, 20, 20, &x);
  znak('-', 20);
  zadanie(4, 56, 79, &x);
  znak('-', 20);
  zadanie(5, 78, 93, &x);
  znak('_', 20);
  printf("PODSUMOWANIE: \nodpowiedziales %dx dobrze\n", x);
}
