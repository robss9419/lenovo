
int r=1, r1;

void collatz(int h)
{
  while(r<h){
  int n;
  n = r;
  int r2=0;
  while(n > 1)
  {
    if (n % 2 == 0)
      r1 = n / 2;
    else
      r1 = 3 * n + 1;
    n = r1;
    r2++;
  }
  printf("%d\t%d\n", r, r2);
  r++;
  }
}
