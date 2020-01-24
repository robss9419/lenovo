#include <string.h>
#include <stdio.h>

int euklides(int a, int b);
//oblicza algorytm euklidesa rekurencyjnie

void nwd(int a, int b, int c);
//wyswietla wynik euklides

void tabs(char znak, int ile);
//wypisuje znaki

int get_int();
//pobiera i zwraca jedną zmienną

void collatz(int i);

void check_collatz(int n);
//sprawdz podana liczbe z rownaniem collatza

void print_score(int a, int b, int c);
//wyswietla wynik

int max_int(int max, int n);
//sprawdza podana liczbe i przypisuje jej najwieksza wartosc

void print_table();
//tworzy naglowki tabeli

void print_results(int a, int b, int c);
//wyswietla wynik, a = zmienna, b = zmienna, c = wynik po obliczeniach