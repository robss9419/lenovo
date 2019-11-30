CFLAGS =ggdb -Wall -std=c11
LIBS = -lm

CC = gcc

all: abc glowny proba jop

abc.o: abc.c
	$(CC) abc.c -c -o abc.o

abc: abc.o
	$(CC) abc.o -o abc

glowny.o: glowny.c
	$(CC) glowny.c -c -o glowny.o
#glowny.o bierze sie z glowny.c

glowny: glowny.o
	$(CC) glowny.o -o glowny
#glowny bierze sie z glowny.o 

proba.o: proba.c
	$(CC) proba.c -c -o proba.o

proba: proba.o
	$(CC) proba.o -o proba

jop.o: jop.c 
	$(CC) jop.c -c -o jop.o

jop: jop.o
	$(CC) jop.o -o jop


clean:
	@echo usuwam gotowe pliki
	rm -f *.o a.out abc glowny proba jop