/* zlicz znaki odstępu, tabulacji i nowego wiersza CTRL + D*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
printf("CTRL + D - konczy program\n");
int c;
int nb, nt, nl;
nt = 0;
nl = 0;
nb = 0;
while ((c=getchar()) != EOF){
if (c == ' '){
    ++nb;}
else if (c == '\t'){
    ++nt;}
else if (c == '\n'){
    ++nl;}
}
printf("spacje : %d\ntabulacje : %d\nznaki nowego wiersza : %d\n", nb, nt, nl);
return 0;
}