/* Program wypisujacy podwojnie tablice, przez przekazanie calej tablicy do wskaznika *wsk */

#include <stdio.h>

int main () {
  int ref[] = {8, 4, 0, 2};
  int *wsk;
  int indeks;

  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++){
    printf("%d %d\n", ref[indeks], *wsk);
}
    printf("%d %d %d\n", *ref, *(ref+1), *ref+1);
}

/*ref wskazuje na element pierwszy tablicy, *ref+1 dodaje do pierwszego elementu tablicy po prostu liczbe po znaku dodać,
 jak damy w nawiasie *(ref+1) to w ten sposob deklarujemy ktory element tablicy ma nam sie wyswietlic */