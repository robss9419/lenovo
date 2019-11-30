#include <stdio.h>
#include <math.h>

int main()
{
    int N = 100;
    int exponent = 9;
    
        S_4 = 0;

    for (int i = 1; i <= N; i++)
    {
        S_4 += pow(i, exponent);
    }
    printf("\n");

    printf("%lf\n", S_4);
    
}