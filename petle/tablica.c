#include <stdio.h>
#include <stdlib.h>

void normalnie(char *tab, int rozm)
{
    int i;
    printf("\nPrawidłowa kolejność tablicy:\n");
    for (i=0; i<=rozm; i++)
    {
        printf("%c\n", tab[i]);
    }
}

void odwrocenie(char *tab, int rozm)
{
    int i;
    printf("Odwrócona kolejność tablicy:");
    for (i=rozm; i>=0; i--)
    {
        printf("%c\n", tab[i]);
    }
}

int main()
{
    int rozm,i;
    char *tab;
    printf("Podaj długość tablicy:\n");
    scanf("%d", &rozm);
    tab = (char *)
    malloc(rozm+1);
        printf("Podaj elementy tablicy: \n");
        for (i=0; i<rozm; i++)
        {
            scanf("%s",&tab[i]);
        }
    normalnie(tab, rozm);
    odwrocenie(tab, rozm);
    return 0;
}