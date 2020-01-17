#include <stdio.h>

void get_int(int *a)
{
    scanf("%d", a);
}

void get_two_int(int *a, int *b, char *prompt)
{
    printf("%s", prompt);
    get_int(a);
    get_int(b);
}