#include <stdio.h>
#include <math.h>

void pitagoras(double a, double b)
{
    double wynik, c;
    c = a*a+b*b;
    wynik = sqrt(c);
    printf("bok 1 = %.2lf  |  bok 2 = %.2lf  |  przeciwprostokatna = %.2lf\n", a, b, wynik);
}

int main()
{
    double a, b;
    printf("Podaj boki trójkąta prostokątnego:\n");
    scanf("%lf %lf", &a, &b);
    pitagoras(a, b);
}

//pitagoras(a-jak wczytania zstdin, &a jak przypisana = * w funkcji )