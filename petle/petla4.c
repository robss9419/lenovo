#include <stdio.h>
#include <math.h>

int main()
{
    int liczba, i=1, wynik=0;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    while(i<=liczba)
    {
        i++;
        printf("%d\n", i);
        wynik += i;
    }
    printf("wynik = %d\n", wynik);
    return 0;
}
