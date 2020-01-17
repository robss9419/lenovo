/* program, który prosi o podanie kodu ASCII, a następnie wypisuje znak odpowiadający temu kodowi */

#include <stdio.h> 
#include <ctype.h>
#include <stdlib.h>

void dec(char num)
{
    if (isprint(num))
    {
        printf("%c\n", num);
    }
    else 
    {
        exit(printf("znak niedrukowalny!\n"));
    }
}

int main()
{
    int a;
    for(int i=1; i<=3; i++)
    {
    printf("Podaj kod ASCII: ");
    scanf("%i", &a);
    dec(a);
    }
    return 0;
}

