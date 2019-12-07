#include <stdio.h>
#include <stdlib.h>

int h,i,j,a;
char x;
int main(int argc, char *argv[]) 
{
        printf("Podaj z jakiego znaku ma byc szachownica: ");
        scanf("%c", &x);
        printf("Podstawa : \n");
        scanf("%d",&a);
        printf("Wysokosc : \n");
        scanf("%d",&h);
        for (i=1; i<=h; i++) 
          { 
            for (j=1; j<=a; j++) 
            printf("%c", x);
            printf("\n ");

            for (j=1; j<=a; j++) 
            printf("%c", x);
            printf("\n");
          }
        return 0;
}