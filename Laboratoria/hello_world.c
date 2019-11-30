#include <stdio.h>
#include <math.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
    char *name = "wlodek";
    int count = 3;

    scanf("%d", &count);
    // scanf("%s", name);

    printf(ANSI_COLOR_RED"%s ", "witaj"ANSI_COLOR_RESET);

    for (size_t i = 0; i < count; i++)
    {
        printf(ANSI_COLOR_GREEN"%s"ANSI_COLOR_RESET, name);
    }

    //printf("%s ", name);
    //printf("%s ", name);
    //printf("%s ", name);

    printf("!\n ");
}