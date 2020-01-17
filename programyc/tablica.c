#include <stdio.h>
#include <stdlib.h>
 
#define N 3
 
void wypelnij (int tab[])
{
    int i;
    printf("Podaj 3 liczby\n");
    for (i=0; i<N; i++)
    {
    scanf("%d", &tab[i]);
    }
}
 
int suma(int tab[], int rozmiar, int sumaa)
{
    if (rozmiar==0)
        return sumaa=sumaa+tab[rozmiar];
    else
    {
        int i=tab[rozmiar];
        return suma(tab, rozmiar-1, sumaa+i); /*REKURENCJA*/
    }
}

float iloczyn(int tab[], int rozmiar, float iloczynn)
{
    if (rozmiar==0)
        return iloczynn=iloczynn+tab[rozmiar];
    else
    {
        int i=tab[rozmiar];
        return iloczyn(tab, rozmiar-1, iloczynn * i);
    }
}
 
int main()
{
    int tab[N];
    wypelnij(tab);
    int sumaa=0;
    int iloczynn=0;
    printf("\nSuma to %d\n", suma(tab, N-1, sumaa));
    printf("\nIloczyn to %f\n", iloczyn(tab, N-1, iloczynn));
    return 0;
}