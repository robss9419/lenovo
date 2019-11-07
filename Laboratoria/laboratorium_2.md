## Laboratorium 2
1. Wyswietl na ekran 2 pierwsze wiersze pliku 'program.c'
```sh
head --lines 2 program.c
head -n 2 program.c
head -2 program.c

```

1. Wyświetl na ekran 4 ostatnie wiersze pliku program.c
```sh
tail 4 program.c
```

1. W pliku program.c znajdź wszystkie wiersze z wystąpieniem słowa "main".
```sh
grep 'main' program.c
```

1. Plikowi program.c nadaj następujące uprawnienia: właściciel-czytanie, pisanie, grupa - czytanie, pozostali użytkownicy: brak uprawnień.
```sh
chmod 740 program.c
```

1. Będąc w katalogu temp przenieś katalog wazne-sprawy do katalogu praca
```sh
mv ~/temp/dom/wazne-sprawy ~/temp/praca
```

1. Zarchiwizuj cały katalog temp
```sh
zip -r temp.zip temp
```

1. Usuń katalog temp
```sh
rm -r temp
```

1. Odtwórz z archiwum katalog temp
```sh
unzip temp.zip
```


