void prostokat(int width, int height)
{
  char s = ' ';
  char g = '*';
  for (int d=1; d<=height; d++)
    {
      printf("%c", g);
    }
  for (int j=1; j<=width-2; j++)
    {
      printf("\n%c", g);
  for (int h=1; h<=height-2; h++)
    {
      printf("%c", s);
    }
      printf("%c", g);
    }
      printf("\n");
  for (int i=1; i<=height; i++)
    {
      printf("%c", g);
    }
      printf("\n");
}

void strzalka(int width)
{
  int bok = width / 2;
  char s = ' ';
  char g = '*';
  for (int i=1; i<=bok; i++) 
    {
  for (int j=1; j<=(bok-i); j++)
    printf("%c", s);
  for (int z=1; z<=i; z++)
    printf("%c", g);
  for (int n=1; n<=i-1; n++)
    {
    printf("%c", g);
    }
    printf("\n");
    }
  for (int i=1; i<=bok; i++) 
    {
  for (int j=1; j<=bok-1; j++)
    {
    printf("%c", s);
    }
    printf("%c", g);
    printf("\n");
    }
}

void owal(int height)
{
  int bok = height / 2;
  char s = ' ';
  char g = '*';
  for (int i=1; i<=bok; i++) 
    {
    for (int j=1; j<=bok-i; j++)
      {
        printf("%c", s);
      }
        printf("%c", g);
    for (int j=3; j<=i*2; j++)
      {
        printf("%c", s);
      }
        printf("%c", g);
        printf("\n");
    }
  for (int j=1; j<=bok; j++)
    {
    for (int i=2; i<=j; i++)
      {
        printf("%c", s);
      }
        printf("%c", g);
    for (int h=1; h<=height-j*2; h++)
      {
        printf("%c", s);
      }
        printf("%c", g);
        printf("\n");
    }
}

void diament(int height)
{
  int bok = height / 2;
  char s = ' ';
  char g = '*';
  for (int i=1; i<=bok; i++)
    {
      printf("%c", s);
    }
      printf("%c", g);
      printf("\n");
  for (int i=1; i<=bok; i++) 
    {
    for (int j=1; j<=bok-i; j++)
      {
        printf("%c", s);
      }
        printf("%c", g);
    for (int j=2; j<=i*2; j++)
      {
        printf("%c", s);
      }
        printf("%c", g);
        printf("\n");
    }
  for (int j=1; j<=bok; j++)
    {
    for (int i=2; i<=j; i++)
      {
        printf("%c", s);
      }
        printf("%c", g);
    for (int h=0; h<=height-(j*2); h++)
      {
        printf("%c", s);
      }
        printf("%c", g);
        printf("\n");
    }
    for (int i=1; i<=bok; i++)
      {
        printf("%c", s);
      }
        printf("%c", g);
        printf("\n");
}
