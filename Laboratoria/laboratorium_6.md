# Laboratorium 6
1. W pliku plik.txt znajdź wiersze zawierające co najmniej jeden znak
```sh
grep ".*" plik.txt
```

1. Znajdź w plikach pl* wiersze rozpoczynające się od cyfry
```sh
find -name 'pl*' | xargs grep -n ^[0-9] --color
```

1. Znajdź pliki zawierające wiersz w którym na 9 pozycji występuje litera r.
```sh
find | xargs grep -n -o '^........r' --color
```

1. Policz, ilu użytkowników systemu używa powłoki bash(zgodnie z zapisami w pliku /etc/passwd)
```sh
grep -n 'bash' /etc/passwd
```

1. Znajdź wiersze zawierające liczby rzymskie w pliku plik.txt
```sh
grep -n '[IVXLCDM]' plik.txt
```
