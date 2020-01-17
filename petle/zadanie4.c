#include <stdio.h>

void get_int_and_check(int *a){
    get_int(a);
    if (a<1){
        printf("robisz sobie jaja\n");
        exit(1);
    }
    if (check)
}

int main()
{
    int liczba;
    int i=1;
    int wynik=0;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    if (liczba > 0)
    {

    while(i <= liczba)
    {
        wynik += i;
        printf("%d\n", i);
        i++;
    }
    
    printf("wynik = %d\n", wynik);
    }

    else {
        printf("Podano złą liczbę:(\n");
    }
    return 0;
}
