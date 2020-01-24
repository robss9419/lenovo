CFLAGS=-ggdb -Wall -std=c11
LDLIBS=-lm

all: program1 program2 program3 program4 collatz euklides

collatz : collatz.o funkcje.o myio.h

euklides : euklides.o funkcje.o myio.h

clean:
	rm -f *.o a.out myio.o program1 program2 program3 program4 collatz euklides