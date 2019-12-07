#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
        int a,b;
        printf("Podaj dwie liczby a < b\n");
        printf("Podaj liczbe a: ");
        scanf("%d", &a);
        printf("Podaj liczbe b: ");
        scanf("%d", &b);
        printf("\n");
        for (a = a + 1; a < b; a++)
        {
            printf("%d", a);
            printf("\n");
        }
        printf("\n");
        return 0;
}