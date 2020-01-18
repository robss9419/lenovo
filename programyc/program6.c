#include <stdio.h>
#include <math.h>

double MinSize, MaxSize, Step;

void minsize()
{
    printf("Podaj wartość początkową: \n");
    scanf("%lf", &MinSize);
}

void maxsize()
{
    printf("Podaj wartość końcową: \n");
    scanf("%lf", &MaxSize);
}

void steps()
{
    printf("Podaj krok dla argumentu: \n");
    scanf("%lf", &Step);
}

void calculate()
{
    double i=MinSize;
    while (i <= MaxSize)
    {
    double score=sqrt(i);
    printf("%.4lf   %.4lf\n", i, score);
    i = i + Step;
    }
}

int main()
{
    minsize();
    maxsize();
    steps();
    printf("\nWartość   Pierwiastek Kwadratowy\n");
    calculate();
}