/* Funkcja, która zwraca różnicę między największym i najmniejszym elementem tablicy podanej jako argument funkcji. Przetestuj ją w prostym programie. */

#include <stdio.h>

int oblicz(int *tab, int *roznica)
{
    int i, min, max;
    for (i=0; i<=4; i++)
    {
        if (min > tab[i])
        {
            min = tab[i];
        }
        if (max < tab[i])
        {
            max = tab[i];
        }
    }
    *roznica = max - min;
    return *roznica;
}

int main()
{
    int zmienna=0, tablica[]={4,9,7,5,3};
    oblicz(tablica, &zmienna);
    printf("Roznica miedzy najwieksza a najmniejsza liczba to: %d\n", zmienna);
}