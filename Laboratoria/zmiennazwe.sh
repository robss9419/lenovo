for i in *\ * ; 
do mv "$i" "${i//\ /_}"
done ;


for s in *.htm ;
do mv $s ${s%.htm}.html ;
done ;

