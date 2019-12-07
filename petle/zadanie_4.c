#include <stdio.h>
#include <math.h>

int main()
{
    int liczba;
    int i=1;
    int wynik=0;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    if (liczba > 0)
    {

    while(i <= liczba)
    {
        wynik += i;
        printf("%d\n", i);
        i++;
    }
    
    printf("wynik = %d\n", wynik);
    }

    else {
        printf("Podano złą liczbę:(\n");
    }
    return 0;
}
