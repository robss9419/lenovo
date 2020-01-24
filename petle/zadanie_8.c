/* generowanie wzorow */

#include <stdio.h>
#include <stdlib.h>

int h,i,z,j,c;
char x;

void wzor_1()
{
  for (i=1; i<=h; i++) 
    { 
      for (j=1; j <= i; j++) 
      printf("%c", x);
      printf("\n");
    }
}

void wzor_2()
{
  for (i=1; i<=h; i++) 
    { 
      for (j=1; j<=(h-i+1); j++)
      printf("%c", x);
      printf("\n");
    }
}

void wzor_3()
{
  for (i=1; i<=h; i++) 
    { 
      for (j=1; j<=i; j++)
      printf(" ");
      for (z=1; z<=(h-i+1); z++)
      printf("%c", x);
      printf("\n");
    }
}

void wzor_4()
{
  for (i=1; i<=h; i++) 
    { 
      for (j=1; j<=(h-i+1); j++)
      printf(" ");
      for (z=1; z<=i; z++)
      printf("%c", x);
      printf("\n");
    }
}

int main(int argc, char *argv[]) 
{
  printf("Podaj z jakiego znaku maja byc wzory:\n");
  scanf("%c", &x);
  printf("Wysokosc: \n");
  scanf("%d",&h);
  printf("\n");
  wzor_1(x, h);
  wzor_2(x, h);
  wzor_3(x, h);
  wzor_4(x, h);
}

