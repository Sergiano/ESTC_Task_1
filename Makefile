all: main.o somevector.o
	gcc main.o somevector.o -o program
main.o: main.c somevector.h
	gcc -c main.c
somevector.o: somevector.c somevector.h
	gcc -c somevector.c
clean:
	rm *.o