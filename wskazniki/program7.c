#include <stdio.h>
#include <math.h>

#define MIESIACE 12
#define LATA 4


int main (int argc, char *argv[])
{
  int deszcz[LATA][MIESIACE] = { // dane o opadach są wyrażone w mm
    {29, 34, 34, 39, 34, 47, 35, 27, 29, 28, 32, 38},  // 2008
    {24, 25, 30, 36, 29, 34, 30, 27, 27, 23, 28, 27},  // 2009
    {31, 36, 41, 42, 35, 43, 35, 30, 34, 31, 33, 37},  // 2010
    {39, 32, 50, 53, 39, 38, 50, 43, 36, 35, 54, 40}   // 2011
    };
    int i, j, roczna=0;
    printf("Opady w kolejnych latach (w mm)\n");
    for(i=0; i<4; i++)
    {
        int sum=0;
        for(j=0; j<12; j++)
        {
            sum += deszcz[i][j];
        }
    printf("%d \n", sum);

    roczna += sum;
    }
    printf("Roczna srednia wynosi: %d mm \n", roczna / 4);
}