#include <stdio.h>

void silnia(int c)
{
    int sil=1;
    for (int i=1; i<=c; i++)
    {
        sil = sil * i;
    }
    printf("silnia z 10 pierwszych liczb naturalnych : %d\n", sil);
}

int main()
{
    silnia(10);
}