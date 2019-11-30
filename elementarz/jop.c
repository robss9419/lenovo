#include <stdio.h>

int main()
{
  double a = 1.0 / 3;
  size_t i;
  size_t iMax= sizeof a;

  printf("bytes are numbered from 0 to %x\n", (unsigned)iMax -1);

  for (i = 0; i < iMax ; ++i) 
  {
    printf("byte number %u  =  %x\n", (unsigned)i, ((unsigned char *)&a)[i]);
  }


  printf("hex memory representation  of %f is : \n", a);
  for (i = iMax; i>0 ; --i) 
  {
    printf("%x", ((unsigned char *)&a)[i-1]);
  }
  printf(" \n");
  return 0;
}