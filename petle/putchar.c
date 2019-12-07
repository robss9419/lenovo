#include<stdio.h>

int main()
{
    int h = 4;
    int i,j;

    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= i; j++)
        putchar('*');
        printf("\n");
    }

    printf("\n");

    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= (h-i+1); j++)
        putchar('*');
        printf("\n");
    }

        printf("\n");

    for (i = 1; i <= h; i++)
    {
        int b = ('*') * (h - i + 1);
        for (j = 1; j <= i; j++)
        putchar(' ');
        putchar(b);
        printf("\n");
    }

    
    return 0;
}