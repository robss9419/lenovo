#include <stdio.h>

int main()
{
    int tab[512];
    for (int i=0; i<=511; i++)
    {
        tab[i] = 128;
    }
    printf("%d\n", tab[5]);
}