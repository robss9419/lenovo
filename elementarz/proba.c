#include <stdio.h>
int main()
{
   int licz1, licz2 ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &licz1);
   printf("Podaj druga liczbe: ");
   scanf("%d", &licz2);
   if (licz1 > licz2) 
   {
     printf("Liczba pierwsza jest wieksza od drugiej!\n");
   }   
  else if (licz2 > licz1)
   {
     printf("Liczba druga jest wieksza od pierwszej!\n");
   }
  else if (licz1 = licz2)
   {
     printf("Liczby sa rowne!\n");
   }
   return 0;
}