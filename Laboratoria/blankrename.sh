#!/bin/bash

number=0             # licznik plików, którym zmieniono nazwy
FOUND=0              # zmienna: aby kod się lepiej czytał

for filename in *    # przejrzyj wszystkie pliki w katalogu
do
     echo "$filename" | grep -q " "         # sprawdź czy nazwa pliku
     if [ $? -eq $FOUND ]                   # zawiera spacje
     then
       fname=$filename                      # tak, więc zabieramy sie do pracy
       n=$(echo $fname | sed -e "s/ /_/g")  # podstawiamy _ za każdą spację
       mv "$fname" "$n"                     # zmieniamy nazwę pliku
       let "number += 1"
     fi
done

echo "Liczba plików, którym zmieniono nazwy: $number"
exit 0