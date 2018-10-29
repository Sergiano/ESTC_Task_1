all: main.o sum.o sub.o dot.o cross.o
	gcc -w main.o sum.o sub.o dot.o cross.o -o program
main.o: main.c somevector.h
	gcc -w -c main.c
sum.o: sum.c somevector.h
	gcc -w -c sum.c
sub.o: sub.c somevector.h
	gcc -w -c sub.c
dot.o: dot.c somevector.h
	gcc -w -c dot.c
cross.o: cross.c somevector.h
	gcc -w -c cross.c
clean:
	rm -r *.o