/* Program ten wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */
#include <stdio.h>
#include <math.h>
#include "myio.h"

int main() {
   double deg;
   printf("Podaj kat w stopniach : ");
   scanf("%lf", &deg);
   radian(deg);
}