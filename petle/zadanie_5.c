/* program ktory wczytuje z stdin 6 liczb calkowitych do tablicy, a nastepnie wyswietla zawartosc tablicy od poczatku i od konca */

#include <stdio.h>
#define ROZMIAR 6

void prawidlowo(int tab[], int n)
{
    printf("Prawidlowa kolejnosc tablicy: ");
    for (int i=0; i<n; i++)
    {
        printf("%d", tab[i]);
    }
}

void odwrotnie(int tab[], int n)
{
    printf("Odwrotna kolejnosc tablicy: ");
    for (int i=n-1; i>=0; i--)
    {
        printf("%d", tab[i]);
    }
}

int main()
{
    int tab[ROZMIAR];
    printf("Podaj liczby do tablicy:\n");
    for (int i=0; i<ROZMIAR; i++)
    {
        scanf("%d", &tab[i]);
    }
    prawidlowo(tab, ROZMIAR);
    printf("\n");
    odwrotnie(tab, ROZMIAR);
    printf("\n");
}






































