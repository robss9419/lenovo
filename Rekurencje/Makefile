CFLAGS=-ggdb -Wall -std=c11
LDLIBS=-lm

all: euklides fibonacci zadanie1

euklides : euklides.o funkcje.o myio.h

fibonacci : fibonacci.o funkcje.o myio.h

zadanie1 : zadanie1.o funkcje.o myio.h

clean:
	rm -f *.o a.out myio.o euklides fibonacci zadanie1