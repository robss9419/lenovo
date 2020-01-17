/* Program pokazujący*/

#include <stdio.h>

void jed()
{
    int *wsk;
    int tab[2][2] = {{12, 14}, {16}};
    wsk = tab[0];
    printf("a)  %d %d\n", *wsk, *(wsk+2));
}

void dwa()
{
    int *wsk;
    int tab[2][2] = {{12}, {14, 16}};
    wsk = tab[0];
    printf("b)  %d %d\n", *wsk, *(wsk+2));
}

void trzy()
{
    int *wsk;
    int tab[2][2] = {{12}, {14, 16}};
    wsk = tab[0];
    printf("c)  %d %d\n", *(wsk+1), *(wsk+3));
}

int main ()
{
jed();
dwa();
trzy();
}

/*ref wskazuje na element pierwszy tablicy, *ref+1 dodaje do pierwszego elementu tablicy po prostu liczbe po znaku dodać,
 jak damy w nawiasie *(ref+1) to w ten sposob deklarujemy ktory element tablicy ma nam sie wyswietlic */
