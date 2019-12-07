#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int upper = atoi(argv[1]);

    printf("Wypisz wszystkie potęgi 2 nieprzekraczające %d.\n", upper);

    for(int i = 0; pow(2, i) <= upper; i++)
    {
        printf("\t%2d %6.0lf\n", i, pow(2, i));
    }

    printf("----\n");

    int j = 0;
    while (pow(2, j) <= upper)
    {
        printf("\t%2d %lf\n", j, pow(2, j));
        j++;
    }
    return 0;
}