#include <stdio.h>
#include <stdlib.h>

int a, b, c;

 void wczytaj()
 {
    printf("Wprowdź trzy liczby całkowite: \n");
    scanf("%d %d %d", &a, &b, &c);
 }

 void suma()
 {
     printf("Suma wynosi: %d\n", a + b + c);
 }

void iloczyn()
{
    printf("Iloczyn wynosi: %d\n", a*b*c);
}

void wieksza()
{
    if (a>b && a>c)
    {
        printf("Najwieksza liczba to : %d\n", a);
    }
    if (b>a && b>c)
    {
        printf("Najwieksza liczba to : %d\n", b);
    }
    else
    {
        printf("Najwieksza liczba to : %d\n", c);
    }
}

void mniejsza()
{
    if (a<b && a<c)
    {
        printf("Najmniejsza liczba to : %d\n", a);
    }
    if (b<a && b<c)
    {
        printf("Najmniejsza liczba to : %d\n", b);
    }
    if (c<a && c<b)
    {
        printf("Najmniejsza liczba to : %d\n", c);
    }
}

int main()
{
    wczytaj();
    suma();
    iloczyn();
    wieksza();
    mniejsza();
}
