/* program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010 */

#include <stdio.h>  
#include <math.h>

int main()
{
    int upper = 2010;

    printf("Wypisze wszystkie potęgi liczby 2 nie przekraczające 2010\n");

    int j = 0;
    while (pow(2, j) <= upper)
    {
        printf("%d  |  %.0f\n", j, pow(2, j));
        j++;
    }
    return 0;
}