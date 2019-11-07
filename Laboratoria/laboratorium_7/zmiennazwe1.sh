for s in *.html ; 
do mv $s ${s%.html}.htm ;
done ;


for s in *\_* ; 
do mv "$s" "${s//\_/ }"
done ;
