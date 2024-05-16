all: grep

grep: main.o lib.o
	gcc -o grep main.o lib.o

main.o: main.c
	gcc -c main.c

lib.o: lib.c lib.h
	gcc -c lib.c

clean:
	rm main.o lib.o grep
