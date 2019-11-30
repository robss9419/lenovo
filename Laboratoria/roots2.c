#include <stdio.h>
#include <math.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
    double a, b, c;
    double x1, x2, delta, sqrt_delta;

    scanf("%lf %lf %lf", &a, &b, &c);
    printf("podano a, b, c = %.2lf, %.2lf, %.2lf\n", a, b, c);

    delta = b * b - 4 * a * c;
    sqrt_delta =sqrt(delta);  

    x1 = (-b -sqrt_delta) / (2 * a);
    x2 = (-b +sqrt_delta) / (2 * a);

    printf("policzone pierwiastki: x1 = %.0lf, x2 = %.0lf\n", x1, x2);
    
    
    //printf(ANSI_COLOR_RED"%s ", "witaj"ANSI_COLOR_RESET);

    //for (size_t i = 0; i < count; i++)
    //{
    //    printf(ANSI_COLOR_GREEN"%s"ANSI_COLOR_RESET, name);
    //}

    //printf("%s ", name);
    //printf("%s ", name);
    //printf("%s ", name);

    //printf("!\n ");
}