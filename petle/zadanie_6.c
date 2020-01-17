/* program ktory wczyta z stdin 6 liczb rzeczywistych do tablicy, a nastepnie wyszuka i wypisze najwieksza i najmniejsza liczbe z tablicy */
#include <stdio.h>
#define ROZMIAR 6

void maxsize(int tab[], int n)
{
    int max;
    for (int i=0; i<ROZMIAR; i++)
    {
        if ( max < tab[i])
        {
            max = tab[i];
        }
    }
    printf("maksymalna liczba z tablicy wynosi: %d\n", max);
}

void minsize(int tab[], int n)
{
    int min;
    for (int i=0; i<ROZMIAR; i++)
    {
        if ( min > tab[i])
        {
            min = tab[i];
        }
    }
    printf("minimalna liczba z tablicy wynosi: %d\n", min);
}

int main()
{
    int tab[ROZMIAR];
    printf("Podaj 6 liczb rzeczywistych: \n");
    for (int i=0; i<ROZMIAR; i++)
    {
    scanf("%d", &tab[i]);
    }
    maxsize(tab, ROZMIAR);
    minsize(tab, ROZMIAR);
}