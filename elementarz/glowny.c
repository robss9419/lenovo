#include <stdio.h>
#include <math.h>
int main()
{
   double deg, rad, pi;
   printf("Podaj kat w stopniach : ");
   scanf("%lf", &deg);
   pi = 3.14;
   rad = (2 * pi * deg / 360);  /* grep PI /usr/include/math.h */
   printf("%.2lf deg = %.2lf rad\n", deg, rad);
   return 0;
}
