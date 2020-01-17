#include <stdio.h>
#include <time.h>

int data()
{
    int dzien, miesiac, rok;
    printf("Podaj date urodzin\n");
    scanf("%d %d %d", &dzien, &miesiac, &rok);
    printf("%d - %d - %d", rok, miesiac, dzien);
}

int main()
{
    int zmienna;
    data();
    zmienna = timer;
    printf("%d", zmienna);
}