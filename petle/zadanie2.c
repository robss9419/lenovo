#include <stdio.h>
#include <stdlib.h>

int a,i,j,h,a;
char x;
void petla()
{
    for (i=1; i<=h; i++) 
          { 
            for (j=1; j<=a; j++)
            printf("%c", x);
            printf("\n ");

            for (j=1; j<=a; j++) 
            printf("%c", x);
            printf("\n");
          }
}

int main(int argc, char *argv[]) 
{
        printf("Podaj z jakiego znaku ma byc szachownica: ");
        scanf("%c", &x);
        printf("Podstawa : \n");
        scanf("%d",&a);
        printf("Wysokosc : \n");
        scanf("%d",&h);
        petla(x, h);
        return 0;
}