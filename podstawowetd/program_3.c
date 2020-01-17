#include <stdio.h>
#include <stdlib.h>

/*--------------------------------------------------------------------------------*/

int check(int age)
{
int przestepny=0;
int teraz = 2020;
int rocznik = teraz - age;
if (rocznik < teraz)
{
    while (rocznik < teraz)
    {   
        if (rocznik%4==0 && rocznik%100!=0 || rocznik%400 == 0)
        {
            przestepny++;
        }
        rocznik++;
    }
}
else
{
    exit(printf("BLAD! Wiek nie moge byc mniejszy od 1! \n"));
}
return przestepny;
}

/*--------------------------------------------------------------------------------*/

void calculate(int age, int przestepny)
{
    int wynik = 0;
    int nieprzestepny = (age - przestepny) * 365;
    przestepny = przestepny * 366;
    wynik = (nieprzestepny + przestepny) * 24 * 60 * 60; 
    printf("Twoj wiek po przeliczeniu na sekundy : %d sekund\n", wynik);
}

/*--------------------------------------------------------------------------------*/

int main()
{
    int age;
    printf("Ile masz lat?\n");
    scanf("%d", &age);
    int zmienna = check(age);
    calculate(age, zmienna);
}