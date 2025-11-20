CC=g++
CFLAGS= -c -w -Wall

all: lab13

lab13: lab13.o
	$(CC) lab13.o -o lab13
	rm -rf *.o

lab13.o: lab13.cpp
	$(CC) $(CFLAGS) lab13.cpp

clean:
	rm lab13
