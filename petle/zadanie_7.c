/* program wypisujace liczbe liczb dodatnich wczytanych do tablicy z stdin */
#include <stdio.h>
#define ROZMIAR 6

void wyszukaj(double tab[], int n)
{
    int zlicz=0;
    for (int i=0; i<ROZMIAR; i++)
    {
        if (tab[i] > 0)
        {
            zlicz += 1;
        }
    }
    printf("Z podanych liczb, dodatnich jest: %d\n", zlicz);
}

int main()
{
    double tab[ROZMIAR];
    printf("Podaj 6 liczb calkowitych: \n");
    for (int i=0; i<ROZMIAR; i++)
    {
        scanf("%lf", &tab[i]);
    }
    wyszukaj(tab, ROZMIAR);
}