#!/bin/bash

echo "Podaj argument aby obliczyc silnie: "
read N
s=1
while [ $N -ge 1 ];
do
s=$[$s * $N]
N=$[$N - 1]
done
echo "Silnia z podanej liczby to$1 $s"
exit 1