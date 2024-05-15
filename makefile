all: grep

grep: main.o
	gcc -o grep main.o

main.o: main.c
	gcc -c main.c

clean:
	rm main.o grep
