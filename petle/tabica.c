#include <stdio.h>
#include <stdlib.h>


int main()
{
    int rozm,i, min, max;
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
       if (tab[i] > 0)
       max = tab[i];
       min = tab[i];
       scanf("%s", &tab[i]);
       while (tab[i])
       {
           if (tab[i] > max)
           max = tab[i];
           else 
        if (tab[i] < min)
           min = tab[i];
        scanf("%s", &tab[i]);
       printf("min = %d, max = %d\n", min, max);

       }
    

    return 0;
} 