#include <stdio.h>

#include "myio.h"


void wypisywanie(int a, int b)
{
    printf("wypisywanie liczb z zakresu [%d, %d)\n", a, b);
    if(a + 1 < b)
    {
        odliczanie(a, b);
    }
}

int main ()
{
    int lower_limit;
    int upper_limit;

    get_two_int(&lower_limit, &upper_limit, "Podaj dolny i górny zakres");
    printf("a = %d, b = %d\n", lower_limit, upper_limit);
    //printf("Pobrano liczbe %d\n")

    //wypisywanie(a ,b);
}


void odliczanie(int a, int b)
{
    while(a<b-1)
    printf("%d", a++);

}