/* program ktory wyswietla wszystkie liczby calkowite pomiedzy a i b */

#include <stdio.h>
#include <stdlib.h>

int a,b;

void petla(int a, int b)
{
      for (a = a + 1; a < b; a++)
        {
            printf("%d", a);
            printf("\n");
        }
}

int main(int argc, char *argv[]) 
{
        printf("Podaj dwie liczby a < b\n");
        printf("Podaj liczbe a: ");
        scanf("%d", &a);
        printf("Podaj liczbe b: ");
        scanf("%d", &b);
        printf("\n");
        petla(a, b);
        printf("\n");   
        return 0;
}