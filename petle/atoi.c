#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int upper;

    printf("Wypisze wszystkie potęgi 2 nieprzekraczające :");
    scanf("%d", &upper);

    int j = 0;
    while (pow(2, j) <= upper)
    {
        printf("\t%.d %.0f\n", j, pow(2, j));
        j++;
    }
    return 0;
}