#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int upper = 2010;

    printf("Wypisze wszystkie potęgi liczby 2 nie przekraczające 2010\n");

    int j = 0;
    while (pow(2, j) <= upper)
    {
        printf("\t%d %f\n", j, pow(2, j));
        j++;
    }
    return 0;
}