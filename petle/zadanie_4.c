/* program wyliczajacy sume liczb naturalnych od 1 do liczby n podanej przez uzytkownika */

#include <stdio.h>

int main()
{
    int liczba;
    int i=1;
    int wynik=0;
    printf("Podaj liczbe wieksza od 0: ");
    scanf("%d", &liczba);
    if (liczba > 0)
    {

    while(i <= liczba)
    {
        wynik += i;
        //printf("%d\n", i);
        i++;
    }
    
    printf("wynik = %d\n", wynik);
    }

    else {
        printf("Podana liczba jest mniejsza od 1 :(\n");
    }
    return 0;
}
