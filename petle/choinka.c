#include <stdio.h>
#include <stdlib.h>

int h,i,z,j,a,c;
char x;
int main(int argc, char *argv[]) 
{
        printf("Podaj z jakiego znaku ma byc choinka: ");
        scanf("%c", &x);
        printf("Szerokość choinki : \n");
        scanf("%d",&a);
        printf("Wysokosc choinki: \n");
        scanf("%d",&h);
        
        
        printf("\n");
        
        
        for (i=1; i<=h; i++) 
          { 
            for (j=1; j <= i; j++) 
            printf("%c", x);
            printf("\n");
          }

                    printf("\n");

        for (i=1; i<=h; i++) 
          { 
            for (j=1; j<=(h-i+1); j++)
            printf("%c", x);
            printf("\n");
          }
          

                    printf("\n");

        for (i=1; i<=h; i++) 
          { 
            for (j=1; j<=i; j++)
            printf(" ");
            for (z=1; z<=(h-i+1); z++)
            printf("%c", x);
            printf("\n");
          }
  

                    printf("\n");

        for (i=1; i<=h; i++) 
          { 
            for (j=1; j<=(h-i+1); j++)
            printf(" ");
            for (z=1; z<=i; z++)
            printf("%c", x);
            printf("\n");
          }
  
        return 0;
}

