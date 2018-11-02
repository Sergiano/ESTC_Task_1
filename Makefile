all: main.o sum.o sub.o dot.o cross.o
	gcc main.o sum.o sub.o dot.o cross.o -o program -lm
main.o: main.c somevector.h
	gcc -c main.c
sum.o: sum.c somevector.h
	gcc -c sum.c
sub.o: sub.c somevector.h
	gcc -c sub.c
dot.o: dot.c somevector.h
	gcc -c dot.c
cross.o: cross.c somevector.h
	gcc -c cross.c -lm
clean:
	rm -f *.o