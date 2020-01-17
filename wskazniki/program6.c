/* Program zwracajacy pierwszy znak nie bedacy odstepem w podanym napisie. */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*void wczytaj_napis(char *napis)
{
    printf("Podaj napis: ");
    scanf("%s", napis);
}
*/


char check(char *napis)
{
    char i = *napis;
    i = getchar();
    while ( i == 32 )
    {
        i = getchar();
    }
    return i;
}


int main()
{
    char napis[] = "         asdasdSebastian";
    //wczytaj_napis(napis);
    check(napis);
    printf("pierwszy znak napisu to: %s", napis);
}

/* void check(char wyraz[])
{
    char wyraz[] = "     DOMEK";
   for (int i=0; i<=100; i++)
   if (isspace(wyraz[i]))
   {
        printf("%d Biały znak!\n", i);
   }
   else
   {
       exit(printf("Pierwszy znak wyrazu to: %c\n", wyraz[i]));
   }

}
*/
