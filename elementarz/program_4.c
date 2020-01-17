/* program obliczajacy silnie z podanej liczby */

#include <stdio.h>

int main()
{
    int z, wynik=1;
    printf("Podaj z jakiej liczby obliczyc silnie: \n");
    scanf("%d", &z);
    while (z>0)
    {
        wynik=wynik*z;
        z--;
    }
    printf("Silnia z twojej liczby wynosi: %d\n", wynik);
}