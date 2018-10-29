all: main.o sum.o sub.o
	gcc main.o sum.o sub.o -o program
main.o: main.c somevector.h
	gcc -c main.c
sum.o: sum.c somevector.h
	gcc -c sum.c
sub.o: sub.c somevector.h
	gcc -c sub.c
clean:
	rm -r *.o