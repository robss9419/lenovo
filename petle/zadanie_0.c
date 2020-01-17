/* program dodajacy do siebie iloczyn kazdej liczby z kolei z zakresu 1 - 10 */

#include <stdio.h>

int main()
{
    int y, x=1, wynik = 0;
    while (x<=10)
    {
        y = x*x;
        printf("%d\n", y);
        wynik += y;
        ++x;
    }
    printf("wynik = %d\n", wynik);
    return 0;
}